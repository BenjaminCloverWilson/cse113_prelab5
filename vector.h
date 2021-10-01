 /**
 * @file vector.h
 *
 * @author Benjamin Wilson & Andrew Sanchez
 *
 * @date October 1, 2021
 *
 * Assignment: Prelab 5
 *
 * @brief holds all the function prototypes and is a header file for vector.c functions
 *
 * @details
 *
 * @bug none
 *
 * @todo none
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include "vector.c"
#include <stdlib.h>
#include <time.h>

/* Place all of your function prototypes here for your Array Problems, #1-8 */
void multiply_five(int a[], size_t size);
void add_three(int a[], size_t size);
void replication(int a[], int b[], size_t size);
void array_sum(int a[], int b[], int c[], size_t size);
void array_product(int a[], int b[], int c[], size_t size);
void array_invert(int a[], int b[], int c[], size_t size);
void reverse(int a[], size_t size);
void random_array();
int get_random_int(int n);


#endif
