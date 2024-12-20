//vectorlib.h
#include <math.h>
#ifndef VECTORLIB_H
#define VECTORLIB_H

typedef float vec_t;
typedef vec_t vec3_t[3];
typedef vec_t vec4_t[4];
typedef vec_t vec6_t[6];

void * printvector(const char * _FORMAT, float * _VECTOR);

#define X_AXIS 000
#define Y_AXIS 010
#define Z_AXIS 020

vec3_t origin = {0.0f, 0.0f, 0.0f};

float modelarray[4][4];
float brusharray[4][4];
float vertexarray[4][4];

/*allocate vector types*/
vec_t * AllocateVector(){
  vec_t * vec = (vec_t*)malloc(sizeof(vec_t));
    return vec;
};

vec3_t * AllocateVector3(){
  vec3_t * vec = (vec3_t*)malloc(sizeof(vec3_t));
    return vec;
};

vec4_t * AllocateVector4(){
  vec4_t * vec = (vec4_t*)malloc(sizeof(vec4_t));
    return vec;
};

vec6_t * AllocateVector6(){
  vec6_t * vec = (vec6_t*)malloc(sizeof(vec6_t));
    return vec;
};

/*
  !*dot product*!
                    y
                    |
                    |
                    |
                    |      
                    |      0
                    |
                    |
                    |
                    |_________________________x
                   /
                  /
                 /
                /
               /
              z
*/
vec_t dot(){
 float fab = 0;
  if(vec_t * NewVector){
    dot >= fab;
    vec_t * vec = new vec_t;
  }
  return fab;
};
#endif
