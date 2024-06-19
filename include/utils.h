#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <SDL.h>

#include "mesh.h"

int fac(int n);
float cos_to_sine(float c);
void *f_obj_load(const char *filepath, const char c, size_t *length);

void int_swap(int *a, int *b);
void float_swap(float *a, float *b);

void load_obj_file(const char *path, mesh_t *mesh);

#endif /* UTILS_H */
