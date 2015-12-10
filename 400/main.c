/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015년 12월 09일 21시 15분 48초
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

// 1. 사용자로부터 하나의 실수를 입력받아서 
// 소수점 표기 방법과 지수 표기 방법으로 동시에 출력하는 프로그램을 작성하라.
void f_401(void)
{
  float input = 0;
  int ret = 0;

  ret = scanf("%f", &input);
  printf("%f\n", input);
  printf("%e\n", input);
}

// 2. 사용자로부터 정수를 16진수로 입력받아서 
// 8진수,10진수,16진수 형태로 출력하는 프로그램을 작성하라.
void f_402(void)
{
  int input = 0;
  int ret = 0;

  ret = scanf("%x", &input);
  printf("%o\n", input);
  printf("%d\n", input);
  printf("%x\n", input);


}

// 3. int 형의 변수 x와 y의 값을 서로 교환하는 
// 프로그램을 작성하여 보자. 별도의 변수가 필요 하면 정의하여서 사용한다. 
// 변수 x와 y는 10, 20의 값으로 초기화 하라.
void f_403(void) 
{
  int input1 = 0, input2 = 0;
  int ret = 0;
  int tmp = 0;

  ret = scanf("%d", &input1);
  ret = scanf("%d", &input2);

  tmp = input1;
  input1 = input2;
  input2 = tmp;

  printf("%d\n", input1);
  printf("%d\n", input2);
 
}

// 4. 상자의 부피를 구하는 프록그램을 작성하여 보자. 
// 부피는 길이*너비*높이로 계산된다. 길이, 너비, 높이는 모두 double형의 실수로 입력받아 보자.
void f_404(void) 
{
  int ret = 0;
  double x = 0,
         y = 0,
         z = 0,
         result = 0;

  printf("Input 3 Arg \n");
  ret = scanf("%lf", &x);
  ret = scanf("%lf", &y);
  ret = scanf("%lf", &z);

  result = x * y * z;

  printf("x * y * z = %lf\n", result);

}

// 5. 우리나라에서 많이 사용되는 면적의 단위인 평을 
// 제곱미터로 환산하는 프로그램을 작성하라. 여기서 1평은 3.3m^2이다. 
void f_405(void) 
{
  int ret = 0;
  float input = 0,
        result = 0;

  printf("Input to m^2\n");
  ret = scanf("%f", &input);

  result = input * 3.305785;

  printf("%f m^2\n", result);
}

// 6. 다음과 같은 수식의 값을 계산하여 화면에 출력하는 프로그램을 작성하라. 
// 지수 표기법을 사용하여 변수들을 초기화한다.
void f_406(void) 
{
  int ret = 0;
  float x;

  ret = scanf("%f", &x);
  x = (3.32e-3) + 9.76e-8;

  printf("%f\n", x);
}

// 7. 물리학에서 운동에너지는 E=mv^2/2.0으로 계산된다. 
// 사용자로부터 질량(m)과 속도(v)를 받아서 운동에너지(E)를 
// 계산하는 프로그램을 작성하여 보자. 모든 변수는 double형을 사용하라.
void f_407(void) 
{
  int ret = 0;
  float m = 0,
        v = 0,
        e = 0;

  printf("Input m, v\n");
  ret = scanf("%f", &m);
  ret = scanf("%f", &v);

  e = ((m * v) * (m * v)) / 2.0;

  printf("e : %f\n", e);

}

// 8. 'a'+1, 'a'+2, 'a'+3을 문자 형식(%c)으로 출력하는 프로그램을 작성하라. 
// 이 프로그램에서 알 수 있는 것은 무엇인가?
void f_408(void) 
{
  int ret = 0;
  char input = 0;

  input = 'a';
  printf("%c\n", input);
  printf("%c\n", input + 1);
  printf("%c\n", input + 2);
  printf("%c\n", input + 3);
  
}

// 9. 경보음이 울린 후에 다음과 같은 메시지를 출력하고 
// 다시 경보음이 울리는 프로그램을 작성하여 보자.
void f_409(void) 
{
  printf("\a\n");
  printf("..\n");
  printf("\a\n");
}

// 10. 다음과 같이 화면에 출력하는 프로그램을 작성하라.
void f_410(void)
{
  printf("\\t \\a \\n \n");
}

int main(int argc, const char *argv[])
{
  f_407();
 
  return 0;
}

