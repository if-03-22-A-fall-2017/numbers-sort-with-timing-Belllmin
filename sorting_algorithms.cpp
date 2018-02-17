/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "sorting_algorithms.h"

void init_random(int *array, int small)
{
  for(int i = 0; i < small; i++) array[i] = rand() % 10;
}
void bubble_sort(int *array, int small)
{
  for(int i = 0; i < small; i++)
  {
    for(int j = 0; j < small - 1; j++)
    {
      if(array[j] > array[j + 1]) swap(&array[j], &array[j + 1]);
    }
  }
}
void insertion_sort(int *array, int small)
{
  for(int i = 1; i < small; i++)
  {
    int temp = array[i];
    int j = i - 1;

    while(j >= 0 && array[j] > temp)
    {
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = temp;
  }
}
void swap(int *number1, int *number2)
{
  int temp = *number1;
  *number1 = *number2;
  *number2 = temp;
}
