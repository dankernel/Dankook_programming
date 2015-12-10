/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015년 12월 10일 16시 43분 22초
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

void f_501(void)
{
  int input1,
      input2,
      ret;

  printf("Input 2 Arg \n");
  ret = scanf("%d", &input1);
  ret = scanf("%d", &input2);

  printf("%d, ... %d\n", input1 / input2, input1 % input2);
}

void f_502(void)
{
  int input1,
      input2,
      ret;

  printf("Input 2 Arg \n");
  ret = scanf("%d", &input1);
  ret = scanf("%d", &input2);

  printf("+ => %d\n", input1 + input2);
  printf("- => %d\n", input1 - input2);
  printf("* => %d\n", input1 * input2);
  printf("/ => %d\n", input1 / input2);
}

void f_503(void)
{
  int input1,
      input2,
      input3,
      max,
      ret;

  printf("Input 3 Arg \n");
  ret = scanf("%d", &input1);
  ret = scanf("%d", &input2);
  ret = scanf("%d", &input3);

  max = 0;
  if (max < input1)
    max = input1;
  if (max < input2)
    max = input2;
  if (max < input3)
    max = input3;

  printf("Max = %d\n", max);
}

void f_504(void)
{
  int input1,
      ret;

  printf("Input 1 Arg \n");
  ret = scanf("%d", &input1);

  printf("%10d feet \n", (int)(input1 / 2.54) / 12);
  printf("%10f inch \n", (float)(input1 / 2.54) - (int)((input1 / 2.54) / 12) * 12);
}


void f_505(void)
{
  int input1,
      input2,
      ret;

  printf("Input 1 Arg < 100\n");
  ret = scanf("%d", &input1);

  if (100 <= input1) {
    printf("Error! \n");
    return;
  }

  printf("(10 * %d) + %d\n", input1 / 10, input1 % 10);
}

void f_506(void)
{
  int input1,
      ret;

  printf("Input 1 Arg \n");
  ret = scanf("%d", &input1);
  
  printf("2's complement : %d \n", (~input1) + 1);

}

void f_507(void)
{
  int input1,
      input2,
      ret;

  printf("Input 2 Arg \n");
  ret = scanf("%d", &input1);
  ret = scanf("%d", &input2);

  printf("%d << %d = %d \n", input1, input2, input1 << input2);
}

void f_508(void)
{
  int ret;
  float r;
  const float pi = 3.141592;

  printf("Input 1 Arg (r) \n");
  ret = scanf("%f", &r);

  printf("Result1 : %f \n", r * r * pi * 4.0);
  printf("Result2 : %f \n", (4.0/3.0) * r * r * r * pi);
}

void f_509(void)
{
  int ret = 0;
  float ac, ae, bc;

  printf("Input 4 Arg (AC, AE, BC) \n");
  ret = scanf("%f", &ac);
  ret = scanf("%f", &ae);
  ret = scanf("%f", &bc);

  printf("DE :  %f\n", ae * bc / ac);
}

void f_510(void)
{
  int x, y,
      ret = 0;

  printf("Input 2 Arg (x, y) \n");
  ret = scanf("%d", &x);
  ret = scanf("%d", &y);

  if (0 < x && 0 < y)
    printf("Result : 1 \n");
  if (x < 0 && 0 < y)
    printf("Result : 2 \n");
  if (x < 0 && y < 0)
    printf("Result : 3 \n");
  if (0 < x && y < 0)
    printf("Result : 4 \n");
}

int main(int argc, const char *argv[])
{
  f_512();
  
  return 0;
}
