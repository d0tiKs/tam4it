#ifndef STDLIB_STDIO
#define STDLIB_STDIO

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

#endif

#ifndef NEURO
#define NEURO

struct vector
{
  double *data;
  int size;
};

double neuron (struct vector *value, struct vector *weight, int start, int end);
double xorNeuro (double input1, double input2);
void improveWeight (struct vector *inputs, double result);
struct vector get_weight ();
void set_weight (struct vector *weight);
double toDouble(const char* s, int start, int stop);

#endif
