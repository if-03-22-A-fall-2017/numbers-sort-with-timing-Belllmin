/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "stopwatch.h"

clock_t start, end;

void start_stopwatch()
{
  start = clock();
  end = 0;
}
float elapsed_time()
{
  if(end == 0) stop_stopwatch();
  return float(end - start) / CLOCKS_PER_SEC;
}
void stop_stopwatch()
{
  end = clock();
}
void long_taking_function()
{

}
void sleep(int number)
{

}
