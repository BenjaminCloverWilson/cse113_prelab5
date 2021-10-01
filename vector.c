 /**
 * @file vector.c
 *
 * @author Benjamin Wilson & Andrew Sanchez
 *
 * @date October 1, 2021
 *
 * Assignment: Prelab 5
 *
 * @brief Specifies all the functions prototyped in vector.h
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
#include <time.h>

/* Place all of your functions here for your Array Problems */

/** Multiples all elements of an array by 5
 * @param a[] the array to be modified
 * @param size the size or length of the array
 */
void multiply_five(int a[], size_t size)
{
    /* Prints out all the original array element values */
    printf("a1[] = {");
    int i;
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("%d}\n", a[size - 1]);

    /* Prints out the product of all array array elements multiplied by 5*/
    printf("a1[] = {");
    for(i = 0; i < size - 1; i++)
    {
        a[i] *= 5;
        printf("%d, ", a[i]);
    }
    a[size - 1] *= 5;
    printf("%d}\n\n", a[size - 1]);
}


/** Adds 3 to all elements in an array
 * @param a[] the array to be modified
 * @param size the size or length of the array
 */
void add_three(int a[], size_t size)
{
    /* Prints out all the original array element values */
    printf("a2[] = {");
    int i;
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("%d}\n", a[size - 1]);

    /* Prints out the product of all array array elements added by 3*/
    printf("a2[] = {");
    for(i = 0; i < size - 1; i++)
    {
        a[i] += 3;
        printf("%d, ", a[i]);
    }
    a[size - 1] += 3;
    printf("%d}\n\n", a[size - 1]);
}

/** Copies one array exactly into another array (replicates the first)
 * @param a[] the array to be replicated
 * @param b[] the array that will be written over by a[]
 * @param size the size or length of both the arrays
 */
void replication(int a[], int b[], size_t size)
{
    /* Prints out all the original array element values */
    printf("a3[] = {");
    int i;
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("%d}\n", a[size - 1]);

    /* Prints out a new array after storing the contents of the old into the new array*/
    printf("b3[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", b[i]);
    }
    printf("%d}\n", b[size - 1]);

    /* Copies a[] into b[] */
    for(i = 0; i < size - 1; i++)
    {
        b[i] = a[i];
    }

    /* Prints out all the original array element values after copying */
    printf("a3[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("%d}\n", a[size - 1]);

    /* Prints the replication out */
    printf("b3[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", b[i]);
    }
    b[size - 1] = a[size - 1];
    printf("%d}\n\n", b[size - 1]);
}


/** Sums the corresponding elements of a[] and b[] and places the sum in c[]
 * @param a[] the first array to be added
 * @param b[] the second array to be added
 * @param c[] the array that stores the sums
 * @param size the size or length of all the arrays
 */
void array_sum(int a[], int b[], int c[], size_t size)
{
    /* Prints out all the original array element values for the first array*/
    printf("a4[] = {");
    int i;
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("%d}\n", a[size - 1]);

    /* Prints out all the original array element values for the second array*/
    printf("b4[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", b[i]);
    }
    printf("%d}\n", b[size - 1]);

    /** Places sum of both arrays at their corresponding indexes into the
     * mirrored c index
     */
    for(i = 0; i < size; i++)
    {
        c[i] = a[i] + b[i];
    }

    /* Prints out all the original array element values for the first array*/
    printf("a4[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("%d}\n", a[size - 1]);

    /* Prints out all the original array element values for the second array*/
    printf("b4[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", b[i]);
    }
    printf("%d}\n", b[size - 1]);

    /* Prints out all the sum array element values for the third array*/
    printf("c4[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", c[i]);
    }
    printf("%d}\n\n", c[size - 1]);
}


/** Multiples the corresponding elements of a[] and b[] and places the product in c[]
 * @param a[] the first array to be multipled
 * @param b[] the second array to be multipled
 * @param c[] the array that stores the products
 * @param size the size or length of all the arrays
 */
void array_product(int a[], int b[], int c[], size_t size)
{
    /* Prints out all the original array element values for the first array*/
    printf("a5[] = {");
    int i;
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("%d}\n", a[size - 1]);

    /* Prints out all the original array element values for the second array*/
    printf("b5[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", b[i]);
    }
    printf("%d}\n", b[size - 1]);

    /** Places product of both arrays at their corresponding indexes into the
     * mirrored c index
     */
    for(i = 0; i < size; i++)
    {
        c[i] = a[i] * b[i];
    }

    /* Prints out all the original array element values for the first array*/
    printf("a5[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("%d}\n", a[size - 1]);

    /* Prints out all the original array element values for the second array*/
    printf("b5[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", b[i]);
    }
    printf("%d}\n", b[size - 1]);

    /* Prints out all the product array element values for the third array*/
    printf("c5[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", c[i]);
    }
    printf("%d}\n\n", c[size - 1]);
}


/** Multiples the inverted elements of a[] and b[] and places the inverted product in c[]
 * @param a[] the first array to be multipled
 * @param b[] the second array to be multipled
 * @param c[] the array that stores the inverted products
 * @param size the size or length of all the arrays
 */
void array_invert(int a[], int b[], int c[], size_t size)
{
    /* Prints out all the original array element values for the first array*/
    printf("a6[] = {");
    int i;
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("%d}\n", a[size - 1]);

    /* Prints out all the original array element values for the second array*/
    printf("b6[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", b[i]);
    }
    printf("%d}\n", b[size - 1]);

    /* Calculates inverted products and stores it in the third array */
    int n = size - 1;
    for(i = 0; i < size; i++)
    {
        c[i] = a[i] * b[n];
        n--;
    }

    /* Prints out all the original array element values for the first array*/
    printf("a6[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("%d}\n", a[size - 1]);

    /* Prints out all the original array element values for the second array*/
    printf("b6[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", b[i]);
    }
    printf("%d}\n", b[size - 1]);

    /* Prints out all the inverted product array element values for the third array*/
    printf("c6[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", c[i]);
    }
    printf("%d}\n\n", c[size - 1]);
}


/** Reverses the array and swaps the index values around
 * @param a[] the array to be reversed
 * @param size the size or length of the arrays
 */
void reverse(int a[], size_t size)
{
    /* Prints out all the original array element values for the first array*/
    printf("a7[] = {");
    int i;
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("%d}\n", a[size - 1]);

    /* Reverses the array */
    int tmp;
    int j = size - 1;
    for(i = 0; i < size / 2; i++)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        j--;
    }

    /* Prints out all the reversed array element values for the first array*/
    printf("a7[] = {");
    for(i = 0; i < size - 1; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("%d}\n\n", a[size - 1]);
}


/** Generate a random number from the interval [0, n]
 * @param n the upper bound of the random number generator
 * @result A random number between 0 and n
 */
int get_random_int(int n)
{
    return random() % n;
}


/** Generates an array of 10 elements with random numbers
 * between 0 and 50. It then prints out the array.
 */
void random_array()
{
    int a[10];

    /* Seeds random number generator */
    srandom(time(NULL));

    /* Generates the random array with 10 numbers less than or equal to 50 */
    int i;
    for(i = 0; i < 10; i++)
    {
        a[i] = get_random_int(50);
    }

    /* Prints out the randomly generated array */
    printf("a8[] = {");
    for(i = 0; i < 9; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("%d}\n\n", a[9]);
}