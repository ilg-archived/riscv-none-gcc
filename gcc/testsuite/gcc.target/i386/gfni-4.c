/* { dg-do compile } */
/* { dg-options "-mgfni -O2" } */
/* { dg-final { scan-assembler-times "gf2p8affineinvqb\[ \\t\]+\[^\{\n\]*\\\$3\[^\n\r]*%xmm\[0-9\]+\[^\n\r]*%xmm\[0-9\]+(?:\n|\[ \\t\]+#)" 1 } } */

#include <x86intrin.h>

int *p;
volatile __m128i x5, x6;
 
void extern
avx512vl_test (void)
{
    x5 = _mm_gf2p8affineinv_epi64_epi8(x5, x6, 3);
}
