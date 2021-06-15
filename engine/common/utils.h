#ifndef common_utilities_h
#define common_utilities_h 

#include <math.h>
#include "types.h"
#include "../math/constants.h"

/*

o-------------------o
| Utility Functions |
o-------------------o

*/

/* Type-safe macro for determining maximum value between two numbers */ 
#define max(a, b) \
    ({__typeof__ (a) _a = (a); \
      __typeof__ (b) _b = (b); \
      _a > _b ? _a : _b; })

/* Type-safe macro for determining minimum value between two numbers */
#define min(a, b) \
    ({__typeof__ (a) _a = (a); \
      __typeof__ (b) _b = (b); \
      _a < _b ? _a : _b; })

/* Returns the sign of a 32-bit integer +1, -1, or 0. Returns for zero input. */
static inline i32 sign_i32(i32 value) {
    return (value > 0) - (value < 0);
}

/* Returns the sign of a 64-bit integer +1, -1, or 0. Returns for zero input. */
static inline i64 sign_i64(i64 value) {
    return (value > 0) - (value < 0);
}

/* Returns the sign of a 32-bit floating-point value as +1.0f, -1.0f, 0.0f. 
 * Returns 0 for zero/NaN input. */
static inline f32 sign_f32(f32 value) {
    return ((value > 0.0f) - (value < 0.0f));
}

/* Returns the sign of a 64-bit floating-point value as +1.0f, -1.0f, 0.0f. 
 * Returns 0 for zero/NaN input. */
static inline f64 sign_f64(f64 value) {
    return ((value > 0.0f) - (value < 0.0f));
}

/* Converts degrees to radians. */
static inline f64 radians(f64 degrees) {
    return degrees * PI / 180.0f;
}

/* Converts radians to degrees. */
static inline f64 degrees(f64 radians) {
    return radians * 180.0f / PI;
}

/* Converts an existing degrees value to radians. Takes a pointer-to-degrees 
 * value. */
static inline void radians_ptr(f64 *degrees) {
    *degrees = *degrees * PI / 180.0f;
}

/* Converts an existing radians value to degrees. Takes a pointer-to-degrees 
 * value. */
static inline void degrees_ptr(f64 *radians) {
    *radians = *radians * 180.0f / PI;
}

/* Tests equality between two values against machine epsilon. */
static inline bool equals(f64 a, f64 b) {
    return fabs(a - b) <= EPSILON;
}

/* Swap two i32 values. */
static inline void swap_i32(i32 * __restrict a, i32 * __restrict b) {
    i32 temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/* Swap two i64 values. */
static inline void swap_i64(i64 * __restrict a, i64 * __restrict b) {
    i64 temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/* Swap two f32 values. */
static inline void swap_f32(f32 * __restrict a, f32 * __restrict b) {
    f32 temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/* Swap two f64 values. */
static inline void swap_f64(f64 * __restrict a, f64 * __restrict b) {
    f64 temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/*

o-----------------------o
| Interpolation Methods |
o-----------------------o

*/

/* Clamps an f64 within a specified range - [start, end]. */
static inline f64 clamp(f64 value, f64 start, f64 end) {
    return min(max(value, start), end);
}

/* Clamps an f64 between 0 and 1. */
static inline f64 clamp_zero(f64 value) {
    return clamp(value, 0.0f, 1.0f);
}

/* Threshold function takes a value x and tests it against a specified
 * threshold. */
static inline f64 threshold(f64 threshold, f64 x) {
    return (x < threshold) ? 0.0f : 1.0f;
}

/* Linear interpolation. Interpolant must be between [start, end]. */
static inline f64 linear_interpolation(f64 start, f64 end, f64 interpolant) {
    return (1 - interpolant) * start + interpolant * end;
}

/* Clamped linear interpolation. Same as lerp, but the interpolant is
 * clamped between [0, 1]. */
static inline f64 linear_interpolation_clamp_zero(f64 start, f64 end, f64 interpolant) {
    return linear_interpolation(start, end, clamp_zero(interpolant));
}


#endif
