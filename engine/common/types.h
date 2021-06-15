#ifndef types_h
#define types_h

#include <stdint.h>
#include <assert.h>
#include <float.h>
#include <stdbool.h>

/*

o-----------------o
| Primitive Types |
o-----------------o

Fundamental types renamed to ensure cross-platform conformity and to better 
illustrate their actual bit-size. Inspired by Rust.

TODO benchmark the standard intN_t against the int_fastN_t to see if a speed-up 
is really gained. For now, use the fast types as replacements for normal ints 
and see what the compiler does...

*/

typedef int_fast8_t    i8;  /* Signed 8-bit  integer */
typedef int_fast16_t   i16; /* Signed 16-bit integer */
typedef int_fast32_t   i32; /* Signed 32-bit integer */
typedef int_fast64_t   i64; /* Signed 64-bit integer */

typedef uint_fast8_t   u8;  /* Unsigned 8-bit  integer */
typedef uint_fast16_t  u16; /* Unsigned 16-bit integer */
typedef uint_fast32_t  u32; /* Unsigned 32-bit integer */
typedef uint_fast64_t  u64; /* Unsigned 64-bit integer */

typedef float          f32; /* 32-bit floating-point number */
typedef double         f64; /* 64-bit floating-point number */
 
/*

o--------------o
| Vector Types |
o--------------o

*/

/* 2D Vector */
typedef struct vec2 {
    f64 x;
    f64 y;
} vec2;

/* 3D Vector */
typedef struct vec3 {
    f64 x;
    f64 y;
    f64 z;
} vec3;

/* 4D Vector "Homogeneous Coordinates" */
typedef struct vec4 {
    f64 x;
    f64 y;
    f64 z;
    f64 w;
} vec4;

/*                           

o-------------------o
| 2D geometry types | 
o-------------------o 

*/                          

/* 1D Point */
typedef vec4 point;

/*

o--------------o
| Matrix Types |
o--------------o

*/

/* 2x2 Matrix */
typedef struct mat2 {
    f64 m[2][2];
} mat2;

/* 3x3 Matrix */
typedef struct mat3 {
    f64 m[3][3];
} mat3;

/* 4x4 Matrix */
typedef struct mat4 {
    f64 m[4][4];
} mat4;

/*                           

o------------------o
| Quaternion Types | 
o------------------o 

*/                          

/* Quaternion */
typedef struct quat {
    f64 x;
    f64 y;
    f64 z;
    f64 w;
} quat;

#endif
