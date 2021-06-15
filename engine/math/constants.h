#ifndef constants_h
#define constants_h

#include <float.h>

/*
o------------------------o
| Mathematical Constants |
o------------------------o
*/

// TODO Create links for each constant to files that define each constant in 
// terms of their C function implementation

/* Each common numerical constant is defined here with long double precision
   to facilitate more accurate computation. Enough digits are provided to 
   satisfy the IEEE 128-bit quad if necessary */

/* Machine Epsilon is the smallest number such that 1 + Epsilon != 0. It is
 * a machine-dependent floating point value that provides an upper bound on
 * relative error due to rounding in floating point arithmetic. Mathematically
 * speaking, it is equivalent to the difference between 1.0 and the smallest
 * representable value that is greater than 1.0. */
#ifndef EPSILON
#define EPSILON     DBL_EPSILON  /* Machine epsilon as specified in float.h */
#endif

#ifndef SQRT2
#define SQRT2       1.414213562373095048801688724209698079  /* sqrt(2) */
#endif

#ifndef SQRT3
#define SQRT3       1.732050807568877293527446341505872366  /* sqrt(3) */
#endif

#ifndef SQRT5
#define SQRT5       2.236067977499789696409173668731276235  /* sqrt(5) */
#endif

#ifndef SQRT1_2
#define SQRT1_2     0.707106781186547524400844362104849039  /* sqrt(1/2) */
#endif

#ifndef SQRT1_3
#define SQRT1_3     0.577350269189625764509148780501957455  /* sqrt(1/3) */
#endif

#ifndef PI
#define PI          3.141592653589793238462643383279502884  /* pi */
#endif

#ifndef PI_2
#define PI_2        1.570796326794896619231321691639751442  /* pi/2 */
#endif

#ifndef PI_4
#define PI_4        0.785398163397448309615660845819875721  /* pi/4 */
#endif

// #ifndef 1_PI
// #define 1_PI        0.318309886183790671537767526745028724  /* 1/pi */
// #endif
//  
// #ifndef 2_PI
// #define 2_PI        0.636619772367581343075535053490057448  /* 2/pi */
// #endif

#ifndef SQRTPI
#define SQRTPI      1.772453850905516027298167483341145183  /* sqrt(pi) */
#endif

// #ifndef 1_SQRTPI
// #define 1_SQRTPI    0.564189583547756286948079451560772585  /* 1/sqrt(pi) */
// #endif
// 
// #ifndef 2_SQRTPI
// #define 2_SQRTPI    1.128379167095512573896158903121545172  /* 2/sqrt(pi) */
// #endif

#ifndef E
#define E           2.718281828459045235360287471352662498  /* e */      
#endif

#ifndef LN2
#define LN2         0.693147180559945309417232121458176568  /* ln(2) */
#endif

#ifndef LN10
#define LN10        2.302585092994045684017991454684364208  /* ln(10) */
#endif

#ifndef LNPI
#define LNPI        1.144729885849400174143427351353058712  /* ln(pi) */
#endif

#ifndef LOG2E
#define LOG2E       1.442695040888963407359924681001892137  /* log_2 (e) */	
#endif

#ifndef LOG10E
#define LOG10E      0.434294481903251827651128918916605082  /* log_10 (e) */
#endif

#ifndef EULER
#define EULER       0.577215664901532860606512090082402431  /* Euler-Mascheroni Constant */
#endif

#ifndef PHI
#define PHI         1.618033988749894848204586834365638118  /* Golden Ratio */
#endif

#ifndef APERY
#define APERY       1.202056903159594285399738161511449991  /* Apery's Constant */
#endif

/*
==================
Physical Constants
==================
*/

// TODO Create links for each constant to files that define each constant in 
// terms of their C function implementation

/* Each common physical constant is defined here with long double precision
   to facilitate more accurate computation. Enough digits are provided to 
   satisfy the IEEE 128-bit quad if necessary */

#endif
