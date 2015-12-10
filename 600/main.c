/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015년 12월 09일 21시 52분 04초
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

void f_601(void)
{
  int ret = 0;
  char ch;

  printf("Input char \n");
  ret = scanf("%c", &ch);

  switch (ch)
  {
    case'a':
      printf("모음\n");
      break;
    case'e':
      printf("모음\n");
      break;
    case'i':
      printf("모음\n");
      break;
    case'o':
      printf("모음\n");
      break;
    case'u':
      printf("모음\n");
      break;
    default:
      printf("자음\n");
      break;
  }
}

void f_602(void)
{
  int input1 = 0,
      input2 = 0,
      ret = 0;

  printf("Input 2 number \n");
  ret = scanf("%d", &input1);
  ret = scanf("%d", &input2);

  if (input1 % input2 == 0)
    printf("O \n");
  else
    printf("X \n");

}

void f_603(void)
{
  int input1 = 0,
      input2 = 0,
      input3 = 0,
      min = 0,
      ret = 0,
      i = 0;

  printf("Input 3 number \n");
  ret = scanf("%d", &input1);
  ret = scanf("%d", &input2);
  ret = scanf("%d", &input3);

  min = 0x7FFFFFFF;

  if (input1 < min)
    min = input1;
  if (input2 < min)
    min = input2;
  if (input3 < min)
    min = input3;

  printf("Min : %d \n", min);

}

void f_604(void)
{
  /* TODO : ... */
}

void f_605(void)
{
  int age, 
      len, 
      ret;


  printf("Input len : \n");
  ret = scanf("%d", &len);
  printf("Input age : \n");
  ret = scanf("%d", &age);


  if (140 <= len && 10 <= age)
    printf("OK\n");
  else
    printf("Fail\n");
}

void f_606(void)
{
  int month = 0,
      ret = 0;;

  printf("Input month : ");
  ret = scanf("%d", &month);

  switch(month)
  {
    case 1:
      printf("Jan\n");break; 
    case 2:
      printf("Feb\n");break; 
    case 3:
      printf("Mar\n");break;
    case 4:
      printf("Apr\n");break; 
    case 5:
      printf("May\n");break; 
    case 6:
      printf("Jun\n");break; 
    case 7:
      printf("Jul\n");break; 
    case 8:
      printf("Aug\n");break; 
    case 9:
      printf("Sep\n");break; 
    case 10:
      printf("Oct\n");break; 
    case 11:
      printf("Nov\n");break; 
    case 12:
      printf("Dec\n");break; 
  }
}

void f_607(void)
{
  int weight,
      height,
      ret;

  float result;

  printf("input h : ");
  ret = scanf("%d", &height);
  printf("input w : ");
  ret = scanf("%d", &weight);

  result = (height-100)*0.9;

  if (result < weight) {
    printf("Over \n");
  } else if(result == weight) {
    printf("Standard \n");
  } else if(weight < result) {
    printf("Under \n");
  }
}

void f_608(void)
{
  int time = 0,
      age = 0,
      ret = 0;

  printf("Input Arg 2 (Time, Age) \n");
  ret = scanf("%d", &time);
  ret = scanf("%d", &age);


  if (17 < time && time < 24)
    printf("10,000\n");
  if (time <= 17) {
    if ((3 <= age || age <= 12) && 65 <= age)
      printf("25,000\n");
    else
      printf("34,000\n");
  }
}

void f_609(void)
{
  int ret;
  float x;

  printf("Input Arg 1 (x) ");
  ret = scanf("%f", &x);

  if (x <= 0)
    printf("%f\n", x * x * x * 9.0 * x + 2.0);
  else
    printf("%f\n", 7.0 * x + 2.0);
}

void f_610(void)
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

void f_611(void)
{
  int ret = 0;
  char get;

  printf("Input Arg char\n");
  ret = scanf("%c", &get);

  switch(get)
  {
    case 'R':
      printf("Rectangle\n");break;
    case 'T':
      printf("Triangle\n");break;
    case 'C':
      printf("Circle\n");break;
    default:
      printf("Unknown\n");break;
  }
}


int main(int argc, const char *argv[])
{
  f_611();

  return 0;
}
