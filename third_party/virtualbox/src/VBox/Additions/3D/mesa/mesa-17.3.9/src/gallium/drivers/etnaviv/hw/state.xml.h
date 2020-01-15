#ifndef STATE_XML
#define STATE_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://0x04.net/cgit/index.cgi/rules-ng-ng
git clone git://0x04.net/rules-ng-ng

The rules-ng-ng source files this header was generated from are:
- state.xml     (  26245 bytes, from 2017-10-05 21:32:06)
- common.xml    (  26135 bytes, from 2017-10-05 21:20:32)
- state_hi.xml  (  27733 bytes, from 2017-10-05 21:20:32)
- copyright.xml (   1597 bytes, from 2016-11-13 13:46:17)
- state_2d.xml  (  51552 bytes, from 2016-11-13 13:46:17)
- state_3d.xml  (  80819 bytes, from 2017-10-05 21:20:32)
- state_vg.xml  (   5975 bytes, from 2016-11-13 13:46:17)

Copyright (C) 2012-2017 by the following authors:
- Wladimir J. van der Laan <laanwj@gmail.com>
- Christian Gmeiner <christian.gmeiner@gmail.com>
- Lucas Stach <l.stach@pengutronix.de>
- Russell King <rmk@arm.linux.org.uk>

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sub license,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial portions
of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/


#define VARYING_COMPONENT_USE_UNUSED				0x00000000
#define VARYING_COMPONENT_USE_USED				0x00000001
#define VARYING_COMPONENT_USE_POINTCOORD_X			0x00000002
#define VARYING_COMPONENT_USE_POINTCOORD_Y			0x00000003
#define FE_VERTEX_STREAM_CONTROL_VERTEX_STRIDE__MASK		0x000000ff
#define FE_VERTEX_STREAM_CONTROL_VERTEX_STRIDE__SHIFT		0
#define FE_VERTEX_STREAM_CONTROL_VERTEX_STRIDE(x)		(((x) << FE_VERTEX_STREAM_CONTROL_VERTEX_STRIDE__SHIFT) & FE_VERTEX_STREAM_CONTROL_VERTEX_STRIDE__MASK)
#define FE_VERTEX_STREAM_CONTROL_VERTEX_DIVISOR__MASK		0x00ff0000
#define FE_VERTEX_STREAM_CONTROL_VERTEX_DIVISOR__SHIFT		16
#define FE_VERTEX_STREAM_CONTROL_VERTEX_DIVISOR(x)		(((x) << FE_VERTEX_STREAM_CONTROL_VERTEX_DIVISOR__SHIFT) & FE_VERTEX_STREAM_CONTROL_VERTEX_DIVISOR__MASK)
#define VIVS_FE							0x00000000

#define VIVS_FE_VERTEX_ELEMENT_CONFIG(i0)		       (0x00000600 + 0x4*(i0))
#define VIVS_FE_VERTEX_ELEMENT_CONFIG__ESIZE			0x00000004
#define VIVS_FE_VERTEX_ELEMENT_CONFIG__LEN			0x00000010
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE__MASK		0x0000000f
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE__SHIFT		0
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE_BYTE			0x00000000
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE_UNSIGNED_BYTE	0x00000001
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE_SHORT		0x00000002
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE_UNSIGNED_SHORT	0x00000003
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE_INT			0x00000004
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE_UNSIGNED_INT		0x00000005
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE_FLOAT		0x00000008
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE_HALF_FLOAT		0x00000009
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE_FIXED		0x0000000b
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE_INT_10_10_10_2	0x0000000c
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_TYPE_UNSIGNED_INT_10_10_10_2	0x0000000d
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_ENDIAN__MASK		0x00000030
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_ENDIAN__SHIFT		4
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_ENDIAN(x)			(((x) << VIVS_FE_VERTEX_ELEMENT_CONFIG_ENDIAN__SHIFT) & VIVS_FE_VERTEX_ELEMENT_CONFIG_ENDIAN__MASK)
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NONCONSECUTIVE		0x00000080
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_STREAM__MASK		0x00000700
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_STREAM__SHIFT		8
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_STREAM(x)			(((x) << VIVS_FE_VERTEX_ELEMENT_CONFIG_STREAM__SHIFT) & VIVS_FE_VERTEX_ELEMENT_CONFIG_STREAM__MASK)
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NUM__MASK			0x00003000
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NUM__SHIFT		12
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NUM(x)			(((x) << VIVS_FE_VERTEX_ELEMENT_CONFIG_NUM__SHIFT) & VIVS_FE_VERTEX_ELEMENT_CONFIG_NUM__MASK)
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NORMALIZE__MASK		0x0000c000
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NORMALIZE__SHIFT		14
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NORMALIZE_OFF		0x00000000
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_NORMALIZE_ON		0x00008000
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_START__MASK		0x00ff0000
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_START__SHIFT		16
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_START(x)			(((x) << VIVS_FE_VERTEX_ELEMENT_CONFIG_START__SHIFT) & VIVS_FE_VERTEX_ELEMENT_CONFIG_START__MASK)
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_END__MASK			0xff000000
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_END__SHIFT		24
#define VIVS_FE_VERTEX_ELEMENT_CONFIG_END(x)			(((x) << VIVS_FE_VERTEX_ELEMENT_CONFIG_END__SHIFT) & VIVS_FE_VERTEX_ELEMENT_CONFIG_END__MASK)

#define VIVS_FE_CMD_STREAM_BASE_ADDR				0x00000640

#define VIVS_FE_INDEX_STREAM_BASE_ADDR				0x00000644

#define VIVS_FE_INDEX_STREAM_CONTROL				0x00000648
#define VIVS_FE_INDEX_STREAM_CONTROL_TYPE__MASK			0x00000003
#define VIVS_FE_INDEX_STREAM_CONTROL_TYPE__SHIFT		0
#define VIVS_FE_INDEX_STREAM_CONTROL_TYPE_UNSIGNED_CHAR		0x00000000
#define VIVS_FE_INDEX_STREAM_CONTROL_TYPE_UNSIGNED_SHORT	0x00000001
#define VIVS_FE_INDEX_STREAM_CONTROL_TYPE_UNSIGNED_INT		0x00000002
#define VIVS_FE_INDEX_STREAM_CONTROL_PRIMITIVE_RESTART		0x00000100

#define VIVS_FE_VERTEX_STREAM_BASE_ADDR				0x0000064c

#define VIVS_FE_VERTEX_STREAM_CONTROL				0x00000650

#define VIVS_FE_COMMAND_ADDRESS					0x00000654

#define VIVS_FE_COMMAND_CONTROL					0x00000658
#define VIVS_FE_COMMAND_CONTROL_PREFETCH__MASK			0x0000ffff
#define VIVS_FE_COMMAND_CONTROL_PREFETCH__SHIFT			0
#define VIVS_FE_COMMAND_CONTROL_PREFETCH(x)			(((x) << VIVS_FE_COMMAND_CONTROL_PREFETCH__SHIFT) & VIVS_FE_COMMAND_CONTROL_PREFETCH__MASK)
#define VIVS_FE_COMMAND_CONTROL_ENABLE				0x00010000

#define VIVS_FE_DMA_STATUS					0x0000065c

#define VIVS_FE_DMA_DEBUG_STATE					0x00000660
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE__MASK			0x0000001f
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE__SHIFT		0
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_IDLE			0x00000000
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_DEC			0x00000001
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_ADR0			0x00000002
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_LOAD0			0x00000003
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_ADR1			0x00000004
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_LOAD1			0x00000005
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_3DADR			0x00000006
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_3DCMD			0x00000007
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_3DCNTL		0x00000008
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_3DIDXCNTL		0x00000009
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_INITREQDMA		0x0000000a
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_DRAWIDX		0x0000000b
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_DRAW			0x0000000c
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_2DRECT0		0x0000000d
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_2DRECT1		0x0000000e
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_2DDATA0		0x0000000f
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_2DDATA1		0x00000010
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_WAITFIFO		0x00000011
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_WAIT			0x00000012
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_LINK			0x00000013
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_END			0x00000014
#define VIVS_FE_DMA_DEBUG_STATE_CMD_STATE_STALL			0x00000015
#define VIVS_FE_DMA_DEBUG_STATE_CMD_DMA_STATE__MASK		0x00000300
#define VIVS_FE_DMA_DEBUG_STATE_CMD_DMA_STATE__SHIFT		8
#define VIVS_FE_DMA_DEBUG_STATE_CMD_DMA_STATE_IDLE		0x00000000
#define VIVS_FE_DMA_DEBUG_STATE_CMD_DMA_STATE_START		0x00000100
#define VIVS_FE_DMA_DEBUG_STATE_CMD_DMA_STATE_REQ		0x00000200
#define VIVS_FE_DMA_DEBUG_STATE_CMD_DMA_STATE_END		0x00000300
#define VIVS_FE_DMA_DEBUG_STATE_CMD_FETCH_STATE__MASK		0x00000c00
#define VIVS_FE_DMA_DEBUG_STATE_CMD_FETCH_STATE__SHIFT		10
#define VIVS_FE_DMA_DEBUG_STATE_CMD_FETCH_STATE_IDLE		0x00000000
#define VIVS_FE_DMA_DEBUG_STATE_CMD_FETCH_STATE_RAMVALID	0x00000400
#define VIVS_FE_DMA_DEBUG_STATE_CMD_FETCH_STATE_VALID		0x00000800
#define VIVS_FE_DMA_DEBUG_STATE_REQ_DMA_STATE__MASK		0x00003000
#define VIVS_FE_DMA_DEBUG_STATE_REQ_DMA_STATE__SHIFT		12
#define VIVS_FE_DMA_DEBUG_STATE_REQ_DMA_STATE_IDLE		0x00000000
#define VIVS_FE_DMA_DEBUG_STATE_REQ_DMA_STATE_WAITIDX		0x00001000
#define VIVS_FE_DMA_DEBUG_STATE_REQ_DMA_STATE_CAL		0x00002000
#define VIVS_FE_DMA_DEBUG_STATE_CAL_STATE__MASK			0x0000c000
#define VIVS_FE_DMA_DEBUG_STATE_CAL_STATE__SHIFT		14
#define VIVS_FE_DMA_DEBUG_STATE_CAL_STATE_IDLE			0x00000000
#define VIVS_FE_DMA_DEBUG_STATE_CAL_STATE_LDADR			0x00004000
#define VIVS_FE_DMA_DEBUG_STATE_CAL_STATE_IDXCALC		0x00008000
#define VIVS_FE_DMA_DEBUG_STATE_VE_REQ_STATE__MASK		0x00030000
#define VIVS_FE_DMA_DEBUG_STATE_VE_REQ_STATE__SHIFT		16
#define VIVS_FE_DMA_DEBUG_STATE_VE_REQ_STATE_IDLE		0x00000000
#define VIVS_FE_DMA_DEBUG_STATE_VE_REQ_STATE_CKCACHE		0x00010000
#define VIVS_FE_DMA_DEBUG_STATE_VE_REQ_STATE_MISS		0x00020000

#define VIVS_FE_DMA_ADDRESS					0x00000664

#define VIVS_FE_DMA_LOW						0x00000668

#define VIVS_FE_DMA_HIGH					0x0000066c

#define VIVS_FE_AUTO_FLUSH					0x00000670

#define VIVS_FE_PRIMITIVE_RESTART_INDEX				0x00000674

#define VIVS_FE_UNK00678					0x00000678

#define VIVS_FE_UNK0067C					0x0000067c

#define VIVS_FE_VERTEX_STREAMS(i0)			       (0x00000000 + 0x4*(i0))
#define VIVS_FE_VERTEX_STREAMS__ESIZE				0x00000004
#define VIVS_FE_VERTEX_STREAMS__LEN				0x00000008

#define VIVS_FE_VERTEX_STREAMS_BASE_ADDR(i0)		       (0x00000680 + 0x4*(i0))

#define VIVS_FE_VERTEX_STREAMS_CONTROL(i0)		       (0x000006a0 + 0x4*(i0))

#define VIVS_FE_GENERIC_ATTRIB(i0)			       (0x00000000 + 0x4*(i0))
#define VIVS_FE_GENERIC_ATTRIB__ESIZE				0x00000004
#define VIVS_FE_GENERIC_ATTRIB__LEN				0x00000010

#define VIVS_FE_GENERIC_ATTRIB_UNK006C0(i0)		       (0x000006c0 + 0x4*(i0))

#define VIVS_FE_GENERIC_ATTRIB_UNK00700(i0)		       (0x00000700 + 0x4*(i0))

#define VIVS_FE_GENERIC_ATTRIB_UNK00740(i0)		       (0x00000740 + 0x4*(i0))

#define VIVS_FE_GENERIC_ATTRIB_UNK00780(i0)		       (0x00000780 + 0x4*(i0))

#define VIVS_FE_HALTI5_UNK007C4					0x000007c4

#define VIVS_FE_HALTI5_UNK007D0(i0)			       (0x000007d0 + 0x4*(i0))
#define VIVS_FE_HALTI5_UNK007D0__ESIZE				0x00000004
#define VIVS_FE_HALTI5_UNK007D0__LEN				0x00000002

#define VIVS_FE_HALTI5_UNK007D8					0x000007d8

#define VIVS_FE_DESC_START					0x000007dc

#define VIVS_FE_DESC_END					0x000007e0

#define VIVS_FE_DESC_AVAIL					0x000007e4
#define VIVS_FE_DESC_AVAIL_COUNT__MASK				0x0000007f
#define VIVS_FE_DESC_AVAIL_COUNT__SHIFT				0
#define VIVS_FE_DESC_AVAIL_COUNT(x)				(((x) << VIVS_FE_DESC_AVAIL_COUNT__SHIFT) & VIVS_FE_DESC_AVAIL_COUNT__MASK)

#define VIVS_FE_FENCE_WAIT_DATA_LOW				0x000007e8

#define VIVS_FE_FENCE_WAIT_DATA_HIGH				0x000007f4

#define VIVS_FE_ROBUSTNESS_UNK007F8				0x000007f8

#define VIVS_GL							0x00000000

#define VIVS_GL_PIPE_SELECT					0x00003800
#define VIVS_GL_PIPE_SELECT_PIPE__MASK				0x00000001
#define VIVS_GL_PIPE_SELECT_PIPE__SHIFT				0
#define VIVS_GL_PIPE_SELECT_PIPE(x)				(((x) << VIVS_GL_PIPE_SELECT_PIPE__SHIFT) & VIVS_GL_PIPE_SELECT_PIPE__MASK)

#define VIVS_GL_EVENT						0x00003804
#define VIVS_GL_EVENT_EVENT_ID__MASK				0x0000001f
#define VIVS_GL_EVENT_EVENT_ID__SHIFT				0
#define VIVS_GL_EVENT_EVENT_ID(x)				(((x) << VIVS_GL_EVENT_EVENT_ID__SHIFT) & VIVS_GL_EVENT_EVENT_ID__MASK)
#define VIVS_GL_EVENT_FROM_FE					0x00000020
#define VIVS_GL_EVENT_FROM_PE					0x00000040
#define VIVS_GL_EVENT_SOURCE__MASK				0x00001f00
#define VIVS_GL_EVENT_SOURCE__SHIFT				8
#define VIVS_GL_EVENT_SOURCE(x)					(((x) << VIVS_GL_EVENT_SOURCE__SHIFT) & VIVS_GL_EVENT_SOURCE__MASK)

#define VIVS_GL_SEMAPHORE_TOKEN					0x00003808
#define VIVS_GL_SEMAPHORE_TOKEN_FROM__MASK			0x0000001f
#define VIVS_GL_SEMAPHORE_TOKEN_FROM__SHIFT			0
#define VIVS_GL_SEMAPHORE_TOKEN_FROM(x)				(((x) << VIVS_GL_SEMAPHORE_TOKEN_FROM__SHIFT) & VIVS_GL_SEMAPHORE_TOKEN_FROM__MASK)
#define VIVS_GL_SEMAPHORE_TOKEN_TO__MASK			0x00001f00
#define VIVS_GL_SEMAPHORE_TOKEN_TO__SHIFT			8
#define VIVS_GL_SEMAPHORE_TOKEN_TO(x)				(((x) << VIVS_GL_SEMAPHORE_TOKEN_TO__SHIFT) & VIVS_GL_SEMAPHORE_TOKEN_TO__MASK)
#define VIVS_GL_SEMAPHORE_TOKEN_UNK28__MASK			0x30000000
#define VIVS_GL_SEMAPHORE_TOKEN_UNK28__SHIFT			28
#define VIVS_GL_SEMAPHORE_TOKEN_UNK28(x)			(((x) << VIVS_GL_SEMAPHORE_TOKEN_UNK28__SHIFT) & VIVS_GL_SEMAPHORE_TOKEN_UNK28__MASK)

#define VIVS_GL_FLUSH_CACHE					0x0000380c
#define VIVS_GL_FLUSH_CACHE_DEPTH				0x00000001
#define VIVS_GL_FLUSH_CACHE_COLOR				0x00000002
#define VIVS_GL_FLUSH_CACHE_TEXTURE				0x00000004
#define VIVS_GL_FLUSH_CACHE_PE2D				0x00000008
#define VIVS_GL_FLUSH_CACHE_TEXTUREVS				0x00000010
#define VIVS_GL_FLUSH_CACHE_SHADER_L1				0x00000020
#define VIVS_GL_FLUSH_CACHE_SHADER_L2				0x00000040
#define VIVS_GL_FLUSH_CACHE_UNK10				0x00000400
#define VIVS_GL_FLUSH_CACHE_UNK11				0x00000800
#define VIVS_GL_FLUSH_CACHE_DESCRIPTOR_UNK12			0x00001000
#define VIVS_GL_FLUSH_CACHE_DESCRIPTOR_UNK13			0x00002000

#define VIVS_GL_FLUSH_MMU					0x00003810
#define VIVS_GL_FLUSH_MMU_FLUSH_FEMMU				0x00000001
#define VIVS_GL_FLUSH_MMU_FLUSH_UNK1				0x00000002
#define VIVS_GL_FLUSH_MMU_FLUSH_UNK2				0x00000004
#define VIVS_GL_FLUSH_MMU_FLUSH_PEMMU				0x00000008
#define VIVS_GL_FLUSH_MMU_FLUSH_UNK4				0x00000010

#define VIVS_GL_VERTEX_ELEMENT_CONFIG				0x00003814

#define VIVS_GL_MULTI_SAMPLE_CONFIG				0x00003818
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_SAMPLES__MASK		0x00000003
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_SAMPLES__SHIFT		0
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_SAMPLES_NONE		0x00000000
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_SAMPLES_2X		0x00000001
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_SAMPLES_4X		0x00000002
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_SAMPLES_MASK		0x00000008
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_ENABLES__MASK		0x000000f0
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_ENABLES__SHIFT		4
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_ENABLES(x)		(((x) << VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_ENABLES__SHIFT) & VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_ENABLES__MASK)
#define VIVS_GL_MULTI_SAMPLE_CONFIG_MSAA_ENABLES_MASK		0x00000100
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK12__MASK			0x00007000
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK12__SHIFT		12
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK12(x)			(((x) << VIVS_GL_MULTI_SAMPLE_CONFIG_UNK12__SHIFT) & VIVS_GL_MULTI_SAMPLE_CONFIG_UNK12__MASK)
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK12_MASK			0x00008000
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK16__MASK			0x00030000
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK16__SHIFT		16
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK16(x)			(((x) << VIVS_GL_MULTI_SAMPLE_CONFIG_UNK16__SHIFT) & VIVS_GL_MULTI_SAMPLE_CONFIG_UNK16__MASK)
#define VIVS_GL_MULTI_SAMPLE_CONFIG_UNK16_MASK			0x00080000

#define VIVS_GL_VARYING_TOTAL_COMPONENTS			0x0000381c
#define VIVS_GL_VARYING_TOTAL_COMPONENTS_NUM__MASK		0x000000ff
#define VIVS_GL_VARYING_TOTAL_COMPONENTS_NUM__SHIFT		0
#define VIVS_GL_VARYING_TOTAL_COMPONENTS_NUM(x)			(((x) << VIVS_GL_VARYING_TOTAL_COMPONENTS_NUM__SHIFT) & VIVS_GL_VARYING_TOTAL_COMPONENTS_NUM__MASK)

#define VIVS_GL_VARYING_NUM_COMPONENTS				0x00003820
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR0__MASK		0x00000007
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR0__SHIFT		0
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR0(x)			(((x) << VIVS_GL_VARYING_NUM_COMPONENTS_VAR0__SHIFT) & VIVS_GL_VARYING_NUM_COMPONENTS_VAR0__MASK)
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR1__MASK		0x00000070
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR1__SHIFT		4
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR1(x)			(((x) << VIVS_GL_VARYING_NUM_COMPONENTS_VAR1__SHIFT) & VIVS_GL_VARYING_NUM_COMPONENTS_VAR1__MASK)
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR2__MASK		0x00000700
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR2__SHIFT		8
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR2(x)			(((x) << VIVS_GL_VARYING_NUM_COMPONENTS_VAR2__SHIFT) & VIVS_GL_VARYING_NUM_COMPONENTS_VAR2__MASK)
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR3__MASK		0x00007000
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR3__SHIFT		12
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR3(x)			(((x) << VIVS_GL_VARYING_NUM_COMPONENTS_VAR3__SHIFT) & VIVS_GL_VARYING_NUM_COMPONENTS_VAR3__MASK)
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR4__MASK		0x00070000
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR4__SHIFT		16
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR4(x)			(((x) << VIVS_GL_VARYING_NUM_COMPONENTS_VAR4__SHIFT) & VIVS_GL_VARYING_NUM_COMPONENTS_VAR4__MASK)
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR5__MASK		0x00700000
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR5__SHIFT		20
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR5(x)			(((x) << VIVS_GL_VARYING_NUM_COMPONENTS_VAR5__SHIFT) & VIVS_GL_VARYING_NUM_COMPONENTS_VAR5__MASK)
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR6__MASK		0x07000000
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR6__SHIFT		24
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR6(x)			(((x) << VIVS_GL_VARYING_NUM_COMPONENTS_VAR6__SHIFT) & VIVS_GL_VARYING_NUM_COMPONENTS_VAR6__MASK)
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR7__MASK		0x70000000
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR7__SHIFT		28
#define VIVS_GL_VARYING_NUM_COMPONENTS_VAR7(x)			(((x) << VIVS_GL_VARYING_NUM_COMPONENTS_VAR7__SHIFT) & VIVS_GL_VARYING_NUM_COMPONENTS_VAR7__MASK)

#define VIVS_GL_OCCLUSION_QUERY_ADDR				0x00003824

#define VIVS_GL_VARYING_COMPONENT_USE(i0)		       (0x00003828 + 0x4*(i0))
#define VIVS_GL_VARYING_COMPONENT_USE__ESIZE			0x00000004
#define VIVS_GL_VARYING_COMPONENT_USE__LEN			0x00000002
#define VIVS_GL_VARYING_COMPONENT_USE_COMP0__MASK		0x00000003
#define VIVS_GL_VARYING_COMPONENT_USE_COMP0__SHIFT		0
#define VIVS_GL_VARYING_COMPONENT_USE_COMP0(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP0__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP0__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP1__MASK		0x0000000c
#define VIVS_GL_VARYING_COMPONENT_USE_COMP1__SHIFT		2
#define VIVS_GL_VARYING_COMPONENT_USE_COMP1(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP1__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP1__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP2__MASK		0x00000030
#define VIVS_GL_VARYING_COMPONENT_USE_COMP2__SHIFT		4
#define VIVS_GL_VARYING_COMPONENT_USE_COMP2(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP2__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP2__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP3__MASK		0x000000c0
#define VIVS_GL_VARYING_COMPONENT_USE_COMP3__SHIFT		6
#define VIVS_GL_VARYING_COMPONENT_USE_COMP3(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP3__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP3__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP4__MASK		0x00000300
#define VIVS_GL_VARYING_COMPONENT_USE_COMP4__SHIFT		8
#define VIVS_GL_VARYING_COMPONENT_USE_COMP4(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP4__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP4__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP5__MASK		0x00000c00
#define VIVS_GL_VARYING_COMPONENT_USE_COMP5__SHIFT		10
#define VIVS_GL_VARYING_COMPONENT_USE_COMP5(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP5__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP5__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP6__MASK		0x00003000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP6__SHIFT		12
#define VIVS_GL_VARYING_COMPONENT_USE_COMP6(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP6__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP6__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP7__MASK		0x0000c000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP7__SHIFT		14
#define VIVS_GL_VARYING_COMPONENT_USE_COMP7(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP7__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP7__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP8__MASK		0x00030000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP8__SHIFT		16
#define VIVS_GL_VARYING_COMPONENT_USE_COMP8(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP8__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP8__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP9__MASK		0x000c0000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP9__SHIFT		18
#define VIVS_GL_VARYING_COMPONENT_USE_COMP9(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP9__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP9__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP10__MASK		0x00300000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP10__SHIFT		20
#define VIVS_GL_VARYING_COMPONENT_USE_COMP10(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP10__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP10__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP11__MASK		0x00c00000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP11__SHIFT		22
#define VIVS_GL_VARYING_COMPONENT_USE_COMP11(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP11__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP11__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP12__MASK		0x03000000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP12__SHIFT		24
#define VIVS_GL_VARYING_COMPONENT_USE_COMP12(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP12__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP12__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP13__MASK		0x0c000000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP13__SHIFT		26
#define VIVS_GL_VARYING_COMPONENT_USE_COMP13(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP13__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP13__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP14__MASK		0x30000000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP14__SHIFT		28
#define VIVS_GL_VARYING_COMPONENT_USE_COMP14(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP14__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP14__MASK)
#define VIVS_GL_VARYING_COMPONENT_USE_COMP15__MASK		0xc0000000
#define VIVS_GL_VARYING_COMPONENT_USE_COMP15__SHIFT		30
#define VIVS_GL_VARYING_COMPONENT_USE_COMP15(x)			(((x) << VIVS_GL_VARYING_COMPONENT_USE_COMP15__SHIFT) & VIVS_GL_VARYING_COMPONENT_USE_COMP15__MASK)

#define VIVS_GL_UNK0382C					0x0000382c

#define VIVS_GL_OCCLUSION_QUERY_CONTROL				0x00003830

#define VIVS_GL_UNK03834					0x00003834

#define VIVS_GL_UNK03838					0x00003838

#define VIVS_GL_API_MODE					0x0000384c
#define VIVS_GL_API_MODE_OPENGL					0x00000000
#define VIVS_GL_API_MODE_OPENVG					0x00000001
#define VIVS_GL_API_MODE_OPENCL					0x00000002

#define VIVS_GL_CONTEXT_POINTER					0x00003850

#define VIVS_GL_UNK03854					0x00003854

#define VIVS_GL_BUG_FIXES					0x00003860

#define VIVS_GL_FENCE_OUT_ADDRESS				0x00003868

#define VIVS_GL_FENCE_OUT_DATA_LOW				0x0000386c

#define VIVS_GL_HALTI5_UNK03884					0x00003884

#define VIVS_GL_HALTI5_UNK03888					0x00003888

#define VIVS_GL_GS_UNK0388C					0x0000388c

#define VIVS_GL_FENCE_OUT_DATA_HIGH				0x00003898

#define VIVS_GL_SHADER_INDEX					0x0000389c

#define VIVS_GL_GS_UNK038A0(i0)				       (0x000038a0 + 0x4*(i0))
#define VIVS_GL_GS_UNK038A0__ESIZE				0x00000004
#define VIVS_GL_GS_UNK038A0__LEN				0x00000008

#define VIVS_GL_HALTI5_UNK038C0(i0)			       (0x000038c0 + 0x4*(i0))
#define VIVS_GL_HALTI5_UNK038C0__ESIZE				0x00000004
#define VIVS_GL_HALTI5_UNK038C0__LEN				0x00000010

#define VIVS_GL_SECURITY_UNK3900				0x00003900

#define VIVS_GL_SECURITY_UNK3904				0x00003904

#define VIVS_GL_UNK03A00					0x00003a00

#define VIVS_GL_UNK03A04					0x00003a04

#define VIVS_GL_UNK03A08					0x00003a08

#define VIVS_GL_UNK03A0C					0x00003a0c

#define VIVS_GL_UNK03A10					0x00003a10

#define VIVS_GL_STALL_TOKEN					0x00003c00
#define VIVS_GL_STALL_TOKEN_FROM__MASK				0x0000001f
#define VIVS_GL_STALL_TOKEN_FROM__SHIFT				0
#define VIVS_GL_STALL_TOKEN_FROM(x)				(((x) << VIVS_GL_STALL_TOKEN_FROM__SHIFT) & VIVS_GL_STALL_TOKEN_FROM__MASK)
#define VIVS_GL_STALL_TOKEN_TO__MASK				0x00001f00
#define VIVS_GL_STALL_TOKEN_TO__SHIFT				8
#define VIVS_GL_STALL_TOKEN_TO(x)				(((x) << VIVS_GL_STALL_TOKEN_TO__SHIFT) & VIVS_GL_STALL_TOKEN_TO__MASK)
#define VIVS_GL_STALL_TOKEN_FLIP0				0x40000000
#define VIVS_GL_STALL_TOKEN_FLIP1				0x80000000

#define VIVS_NFE						0x00000000

#define VIVS_NFE_VERTEX_STREAMS(i0)			       (0x00000000 + 0x4*(i0))
#define VIVS_NFE_VERTEX_STREAMS__ESIZE				0x00000004
#define VIVS_NFE_VERTEX_STREAMS__LEN				0x00000010

#define VIVS_NFE_VERTEX_STREAMS_BASE_ADDR(i0)		       (0x00014600 + 0x4*(i0))

#define VIVS_NFE_VERTEX_STREAMS_CONTROL(i0)		       (0x00014640 + 0x4*(i0))

#define VIVS_NFE_VERTEX_STREAMS_UNK14680(i0)		       (0x00014680 + 0x4*(i0))

#define VIVS_NFE_VERTEX_STREAMS_ROBUSTNESS_UNK146C0(i0)	       (0x000146c0 + 0x4*(i0))

#define VIVS_NFE_HALTI5_UNK17800(i0)			       (0x00017800 + 0x4*(i0))
#define VIVS_NFE_HALTI5_UNK17800__ESIZE				0x00000004
#define VIVS_NFE_HALTI5_UNK17800__LEN				0x00000020

#define VIVS_NFE_HALTI5_UNK17880(i0)			       (0x00017880 + 0x4*(i0))
#define VIVS_NFE_HALTI5_UNK17880__ESIZE				0x00000004
#define VIVS_NFE_HALTI5_UNK17880__LEN				0x00000020

#define VIVS_NFE_HALTI5_UNK17900(i0)			       (0x00017900 + 0x4*(i0))
#define VIVS_NFE_HALTI5_UNK17900__ESIZE				0x00000004
#define VIVS_NFE_HALTI5_UNK17900__LEN				0x00000020

#define VIVS_NFE_HALTI5_UNK17980(i0)			       (0x00017980 + 0x4*(i0))
#define VIVS_NFE_HALTI5_UNK17980__ESIZE				0x00000004
#define VIVS_NFE_HALTI5_UNK17980__LEN				0x00000020

#define VIVS_NFE_HALTI5_UNK17A00(i0)			       (0x00017a00 + 0x4*(i0))
#define VIVS_NFE_HALTI5_UNK17A00__ESIZE				0x00000004
#define VIVS_NFE_HALTI5_UNK17A00__LEN				0x00000020

#define VIVS_NFE_HALTI5_UNK17A80(i0)			       (0x00017a80 + 0x4*(i0))
#define VIVS_NFE_HALTI5_UNK17A80__ESIZE				0x00000004
#define VIVS_NFE_HALTI5_UNK17A80__LEN				0x00000020

#define VIVS_BLT						0x00000000

#define VIVS_BLT_UNK14000					0x00014000

#define VIVS_BLT_UNK14008					0x00014008

#define VIVS_BLT_UNK1400C					0x0001400c

#define VIVS_BLT_UNK14010					0x00014010

#define VIVS_BLT_UNK14014					0x00014014

#define VIVS_BLT_UNK14018					0x00014018

#define VIVS_BLT_UNK14020					0x00014020

#define VIVS_BLT_UNK14024					0x00014024

#define VIVS_BLT_UNK14028					0x00014028

#define VIVS_BLT_UNK1402C					0x0001402c

#define VIVS_BLT_UNK14030					0x00014030

#define VIVS_BLT_UNK14034					0x00014034

#define VIVS_BLT_UNK14038					0x00014038

#define VIVS_BLT_UNK1403C					0x0001403c

#define VIVS_BLT_UNK14040					0x00014040

#define VIVS_BLT_UNK14044					0x00014044

#define VIVS_BLT_UNK14048					0x00014048

#define VIVS_BLT_UNK1404C					0x0001404c

#define VIVS_BLT_UNK14050					0x00014050

#define VIVS_BLT_UNK14054					0x00014054

#define VIVS_BLT_UNK14058					0x00014058

#define VIVS_BLT_UNK1405C					0x0001405c

#define VIVS_BLT_UNK14060					0x00014060

#define VIVS_BLT_UNK14064					0x00014064

#define VIVS_BLT_UNK1409C					0x0001409c

#define VIVS_BLT_UNK140A0					0x000140a0

#define VIVS_BLT_FENCE_OUT_ADDRESS				0x000140a4

#define VIVS_BLT_FENCE_OUT_DATA_LOW				0x000140a8

#define VIVS_BLT_UNK140AC					0x000140ac

#define VIVS_BLT_FENCE_OUT_DATA_HIGH				0x000140b4

#define VIVS_BLT_ENABLE						0x000140b8
#define VIVS_BLT_ENABLE_ENABLE					0x00000001

#define VIVS_BLT_UNK140BC					0x000140bc

#define VIVS_DUMMY						0x00000000

#define VIVS_DUMMY_DUMMY					0x0003fffc


#endif /* STATE_XML */
