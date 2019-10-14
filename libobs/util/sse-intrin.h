/*
 * Copyright (c) 2019 Hugh Bailey <obs.jim@gmail.com>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#pragma once

#ifdef __aarch64__

#include "aarch/sse2.h"

#define __m128 simde__m128
#define _mm_setzero_ps simde_mm_setzero_ps
#define _mm_set_ps simde_mm_set_ps
#define _mm_add_ps simde_mm_add_ps
#define _mm_sub_ps simde_mm_sub_ps
#define _mm_mul_ps simde_mm_mul_ps
#define _mm_div_ps simde_mm_div_ps
#define _mm_set1_ps simde_mm_set1_ps
#define _mm_movehl_ps simde_mm_movehl_ps
#define _mm_shuffle_ps simde_mm_shuffle_ps
#define _mm_min_ps simde_mm_min_ps
#define _mm_max_ps simde_mm_max_ps
#define _mm_movelh_ps simde_mm_movelh_ps
#define _mm_unpacklo_ps simde_mm_unpacklo_ps
#define _mm_unpackhi_ps simde_mm_unpackhi_ps
#define _mm_load_ps simde_mm_load_ps
#define _mm_andnot_ps simde_mm_andnot_ps
#define _mm_storeu_ps simde_mm_storeu_ps
#define _mm_loadu_ps simde_mm_loadu_ps

#define __m128i simde__m128i
#define _mm_set1_epi32 simde_mm_set1_epi32
#define _mm_set1_epi16 simde_mm_set1_epi16
#define _mm_load_si128 simde_mm_load_si128
#define _mm_packs_epi32 simde_mm_packs_epi32
#define _mm_srli_si128 simde_mm_srli_si128
#define _mm_and_si128 simde_mm_and_si128
#define _mm_packus_epi16 simde_mm_packus_epi16
#define _mm_add_epi64 simde_mm_add_epi64
#define _mm_shuffle_epi32 simde_mm_shuffle_epi32
#define _mm_srai_epi16 simde_mm_srai_epi16
#define _mm_shufflelo_epi16 simde_mm_shufflelo_epi16
#define _mm_storeu_si128 simde_mm_storeu_si128

#define _MM_SHUFFLE SIMDE_MM_SHUFFLE
#define _MM_TRANSPOSE4_PS SIMDE_MM_TRANSPOSE4_PS

#else

#include <xmmintrin.h>
#include <emmintrin.h>

#endif
