#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Add() {
	int x;
	int y;
	int sum;

	printf("첫 번째 숫자: ");
	scanf("%d", &x);

	printf("두 번째 숫자: ");
	scanf("%d", &y);

	sum = x + y;

	printf("두 수의 합: %d\n", sum);
}

void Ysalary() {
	int ysalary;
	int msalary;
	printf("연봉을 입력하시오");
	scanf("%d", &ysalary);

	msalary = ysalary / 12;

	printf("월 수령액 %d\n", msalary);
}

void R_Area() {
	float radius;
	float area;

	printf("반지름을 입력: ");
	scanf("%f", &radius);

	area = radius * radius * 3.14;
	printf("원의 면적: %f", area);
}

void Rate() {
	double rate; // 환율
	double usd; // 달러화
	int krw; // 원화

	printf("환율을 입력하세요: ");
	scanf("%lf", &rate);
	printf("\n");

	printf("원화금액을 입력하세요: ");
	scanf("%d", &krw);
	printf("\n");

	usd = krw / rate;

	printf("원화 %d원은 %lf 달러입니다.", krw, usd);
}

void Square() {
	double w;
	double h;
	double area;
	double perimeter;

	printf("넓이: ");
	scanf("%lf", &w);
	printf("\n");

	printf("높이: ");
	scanf("%lf", &h);
	printf("\n");
	
	area = w * h;
	perimeter = 2 * (w + h);

	printf("면적: %f\n둘레: %f", area, perimeter);

}

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
	/*
		int add;
		int sub;
		int mul;
		int div;
		int remain;

		int a;
		int b;
		scanf("%d %d", &a, &b); // &: 포인터

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
	*/

	// 덧셈 프로그램
	//Add();
	//printf("\n");
	// 연봉계산기
	//Ysalary();
	//printf("\n");
	// 원의 면적 구하기
	//R_Area();
	//printf("\n");
	// 환율계산
	//Rate();
	// printf("\n");

	Square();
	printf("\n");
	return 0;
}