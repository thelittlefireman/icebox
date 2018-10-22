#pragma once

#include "enums.hpp"
#include "types.hpp"

#include <functional>
#include <memory>
#include <string>

namespace sym
{
    struct ModCursor
    {
        std::string symbol;
        uint64_t    offset;
    };

    struct IMod
    {
        virtual ~IMod() = default;

        virtual span_t          span          () = 0;
        virtual opt<uint64_t>   symbol        (const std::string& symbol) = 0;
        virtual opt<uint64_t>   struc_offset  (const std::string& struc, const std::string& member) = 0;
        virtual opt<ModCursor>  symbol        (uint64_t addr) = 0;
    };

    std::unique_ptr<IMod>   make_pdb(span_t span, const std::string& module, const std::string& guid);
    std::unique_ptr<IMod>   make_pdb(span_t span, const void* data);

    struct Cursor
    {
        std::string module;
        std::string symbol;
        uint64_t    offset;
    };

    struct Symbols
    {
         Symbols();
        ~Symbols();

        using on_module_fn = std::function<walk_e(const IMod& module)>;

        bool                insert      (const std::string& name, std::unique_ptr<IMod>& module);
        bool                insert      (const std::string& name, span_t module, const void* data);
        bool                remove      (const std::string& name);
        bool                list        (const on_module_fn& on_module);
        IMod*               find        (const std::string& name);
        opt<uint64_t>       symbol      (const std::string& module, const std::string& symbol);
        opt<uint64_t>       struc_offset(const std::string& module, const std::string& struc, const std::string& member);
        opt<Cursor>         find        (uint64_t addr);

        struct Data;
        std::unique_ptr<Data> d_;
    };
}
