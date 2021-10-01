 /**
 * @file vector_main.c
 *
 * @author Benjamin Wilson & Andrew Sanchez
 *
 * @date October 1, 2021
 *
 * Assignment: Prelab 5
 *
 * @brief a program that tests basic array manipulating functions
 * in vector.c and vector.h
 *
 * @details
 *
 * @bug none
 *
 * @todo none
 */

#include<stdio.h>
#include <stdlib.h>
#include "vector.h"

int main(void)
{
	/*Write code for your main() for your Array Problems here*/
	/* Arrays and function call for Problem #1 */
	int a1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 3};
	size_t size_a1 = sizeof(a1) / sizeof(int);
	multiply_five(a1, size_a1);

	/* Arrays and function call for Problem #2 */
	int a2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 3};
	size_t size_a2 = sizeof(a2) / sizeof(int);
	add_three(a2, size_a2);

	/* Arrays and function call for Problem #3 */
	int a3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 3};
	int b3[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	size_t size_a3 = sizeof(a3) / sizeof(int);
	replication(a3, b3, size_a3);

	/* Arrays and function call for Problem #4 */
	int a4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 3};
	int b4[] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
	size_t size_a4 = sizeof(a4) / sizeof(int);
	int c4[size_a4];
	array_sum(a4, b4, c4, size_a4);

	/* Arrays and function call for Problem #5 */
	int a5[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 3};
	int b5[] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
	size_t size_a5 = sizeof(a5) / sizeof(int);
	int c5[size_a5];
	array_product(a5, b5, c5, size_a5);

	/* Arrays and function call for Problem #6 */
	int a6[] = {1, 2, 3, 4, 5};
	int b6[] = {6, 7, 8, 9, 10};
	size_t size_a6 = sizeof(a6) / sizeof(int);
	int c6[size_a6];
	array_invert(a6, b6, c6, size_a6);

	/* Arrays and function call for Problem #7 */
	int a7[] = {1, 2, 3, 4, 5};
	size_t size_a7 = sizeof(a7) / sizeof(int);
	reverse(a7, size_a7);

	/* Generates a random 10 element array for Problem #8 */
	random_array();

}
