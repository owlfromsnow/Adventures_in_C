/*
 ============================================================================
 Name        : Powers.c
 Author      : JC
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Simple for loop to to show powers of 2 until 2^7 in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main () {

   int p;

   /* for loop execution */
   for( p = 2; p <= 128; p = p * 2 ){
      printf("value of p: %d\n", p);
   }

   return 0;
}
