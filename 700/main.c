/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015년 12월 10일 22시 16분 03초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

void f_703(void)
{
  int y, x;

  for(y = 0; y < 7; y++){
    for(x = 0; x < (6 - y); x++)
      printf(" ");
    for(x = 6 - y; x < 7; x++)
      printf("*");
    printf("\n");
  }
}

void f_705(void)
{
  int input,
      ret;

  printf("Input Arg : 1 ");
  ret = scanf("%d", &input);

  while(input)
    printf("%d ", input--);

  printf("\n");
}


void f_707(void)
{
  int tmp = 0,
      i = 0,
      j = 0;

  for (i = 2; i < 100; i++) {
    j = 2;
    while (i % j++ != 0 && j < i);

    if (i <= j)
      printf("%d, ", i);
  }
}

void f_709(void)
{
  int n = 10000;

  printf("%d\n", n * (n + 1) / 2);
}

void f_711(void)
{
  int input,
      ret,
      add,
      i;

  printf("Input Arg1 (int)\n");
  ret = scanf("%d", &input);

  for (i = 1; i <= input; i++) {
    add += i * i;
  }
  printf("%d \n", add);
}

int main(int argc, const char *argv[])
{
  f_711();

  return 0;
}

