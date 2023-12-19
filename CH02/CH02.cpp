#include <stdio.h>
int main() {
	/* C언어의 주석 */
	/*
		여러 줄 주석
		주석1
		주석2
	*/

	/*
		주석은 프로그램의 실행 결과에 영향을 주지 않습니다.
		주석은 프로그래머를 위한 것 입니다.
		주석은 프로그램의 가독성을 높입니다.
		주석에는 프로그램의 구조나 동작 등을 설명할 때 사용됩니다.
	*/

	/*
		변수
			변수란 데이터를 일시적으로 저장할 목적으로 사용하는 메모리 공간입니다.
		자료형
			정수형
				- int
				- short
				- long
				- long long
			실수형
				- float
				- double
				- long double
			문자형
				- char

		변수의 이름 짓기
			- 영문자와 숫자, _로 이루어 집니다.
			- 중간에 공백이 있으면 안됩니다.
			- 첫 글자는 반드시 영문자 또는 _이어야 합니다.
			- 대소문자 구별됩니다.
			- 키워드와 같은 이름은 안됩니다.
	*/

	/* 변수의 초기화 */
	// 변수 선언
	int add;
	int sub;
	int mul;
	int div;
	int remain;

	// 선언과 동시에 초깃값 설정
	int a = 20;
	int b = 3;

	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	remain = a % b;

	printf("사칙연산\n");
	printf("a + b = %d\n", add);
	printf("a - b = %d\n", sub);
	printf("a * b = %d\n", mul);
	printf("a / b = %d\n", div);
	printf("a % b = %d\n", remain);

	return 0;
}