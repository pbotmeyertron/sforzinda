/* 
   A C-program for MT19937-64 (2004/9/29 version).
   Coded by Takuji Nishimura and Makoto Matsumoto.

   This is a 64-bit version of Mersenne Twister pseudorandom number
   generator.

   Before using, initialize the state by using init_genrand(seed)  
   or init_by_array(init_key, key_length).

   Copyright (C) 2004, Makoto Matsumoto and Takuji Nishimura,
   All rights reserved.                          

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:

     1. Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.

     2. Redistributions in binary form must reproduce the above copyright
        notice, this list of conditions and the following disclaimer in the
        documentation and/or other materials provided with the distribution.

     3. The names of its contributors may not be used to endorse or promote 
        products derived from this software without specific prior written 
        permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

   References:
   T. Nishimura, ``Tables of 64-bit Mersenne Twisters''
     ACM Transactions on Modeling and 
     Computer Simulation 10. (2000) 348--357.
   M. Matsumoto and T. Nishimura,
     ``Mersenne Twister: a 623-dimensionally equidistributed
       uniform pseudorandom number generator''
     ACM Transactions on Modeling and 
     Computer Simulation 8. (Jan. 1998) 3--30.

   Any feedback is very welcome.
   http://www.math.hiroshima-u.ac.jp/~m-mat/MT/emt.html
   email: m-mat @ math.sci.hiroshima-u.ac.jp (remove spaces)
*/

/* 6/15/2021 - Patrick Meyer
 * This version has been slightly modified to accomodate Sforzinda's typedefs
 * and formatting style. Some function and variable names have also been changed, 
 * but the functionality of the oringinal algorithm is essentially the same. 
 * 
 * Compile with -O3 for best results. Other possible compilation flags include "-O3 
 * -finline-functions -fomit-frame-pointer -DNDEBUG -fno-strict-aliasing 
 * --param max-inline-insns-single=1800" but more testing will have to be done to 
 * determine if this provides better results on modern x86-64 architectures and GCC 11.
 * So far, my testing hasn't shown any better results over -O3.
 * 
 * For
 */

#include <stdio.h>
#include "mt19937.h"

int main(void) {
    i32 i;
   // u64 init[4]={0x12345ULL, 0x23456ULL, 0x34567ULL, 0x45678ULL}, length=4;
//
   // init_by_array(init, length);

    // printf("100 outputs of genrandu64()\n");
    // for (i = 0; i < 100; i++) {
    //     printf("%8lu ", genrandu64());
    //     if (i % 5 == 4) printf("\n");
    // }

    printf("\n100 outputs of genrandf64\n");
    for (i = 0; i < 100; i++) {
	// Specify the amount of precision; eg, 10.16 = 16 digits
        printf("%10.16f  ", genrandf64());
        if (i % 5 == 4) printf("\n");
    }
    return 0;
}
