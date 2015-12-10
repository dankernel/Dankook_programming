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
  int input1 = 0,
      ret = 0;

  printf("Input (1, 2, 3) \n");
  ret = scanf("%d", &input);


}

int main(int argc, const char *argv[])
{
  f_603();

  return 0;
}

