# C-project
# CH01
## C언어의 특징
- 간결한 언어
- 효율적인 언어
- 저수준의 프로그래밍도 가능하고 고수준의 프로그래밍도 가능
- 이식성이 뛰어난 언어

## 임베디드 시스템
특수 목적의 시스템입니다.

예) 스마트폰, 교통신호 제어 시스템, 자동차, 카메라 등

## Hello World 출력하기
```c
#include <stdio.h>
int main(void) {
	printf("Hello World");
	return 0;
}
```
### 코드 설명
```
#include <stdio.h>
-> 설명
	#: 전처리기 기호
	전처리기는 컴파일하기 전에 사전 정지 작업을 하는 컴파일러의 일부분 입니다.
	#include는 소스코드 안에 특정 파일을 현재 위치에 포함시키라는 뜻입니다.
	이러한 파일은 헤더파일이라고 합니다.
	stdio.h 파일은 입출력 함수의 정보를 가지고 있는 헤더 파일입니다.

int main(void) {
-> 설명
	int main(void) {}는 main()함수를 정의하는 문장입니다.
	함수는 특정 작업을 수행하기 위하여 작성된 독립적인 코드입니다.
	int는 함수가 출력하는 값의 타입입니다. int는 정수를 뜻합니다.
	main()함수는 C 프로그램에서 가장 처음 실행되는 부분이라 C프로그램은 하나의 main()함수가 반드시 있어야 합니다.
	void는 비어있다는 의미로 함수의 입력값이 없다는 뜻입니다.
	int와 void같은 용어를 예약어(또는 키워드)라고 합니다.

	printf("Hello World");
-> 설명
	printf()는 출력함수를 뜻합니다.
	()안에 출력할 값을 넣어줍니다.
	위의 처럼 문자열(string)을 출력할 때는 "" 혹은 ''를 사용합니다.

	return 0;
-> 설명
	return은 함수가 작업을 끝내고 결과를 반환할 때 사용합니다.
	0의 값은 프로그램이 정상적으로 종료했음을 뜻합니다.

	추가로 문장 뒤에는 항상 세미콜론 ; 을 붙여야 합니다.
}
```

## 여러 줄 출력하기
```c
#include <stdio.h>
int main(void) {
	printf("Hello World\n");
	printf("Hello World");
	return 0;
}
```
여러 줄을 출력할 때는 `\n`기호를 사용합니다.

![여러줄 출력하기](https://raw.githubusercontent.com/Seong-Jun1525/C-Project/master/readmeImg/%EC%97%AC%EB%9F%AC%EC%A4%84%20%EC%B6%9C%EB%A0%A5%ED%95%98%EA%B8%B0.png)

## 간단한 계산해보기
```c
#include <stdio.h>
int main() {
	// 간단한 계산 해보기
	printf("1 + 1 = %d\n", 1 + 1);
	printf("2 - 2 = %d\n", 2 - 2);
	printf("3 * 3 = %d\n", 3 * 3);
	printf("4 / 4 = %d\n", 4 / 4);
	printf("4 %% 4 = %d", 4 % 4);
	return 0;
}
```
### 코드 설명
```
// 간단한 계산 해보기
-> 설명
	//는 주석 기호입니다.
printf("1 + 1 = %d\n", 1 + 1);
-> 설명
	"1+1=%d"는 문자열로 1+1= 을 출력하고
	뒤의 %d는 정수를 출력할 때 사용하는 형식 지정자 입니다.
printf("2 - 2 = %d\n", 2 - 2);
printf("3 * 3 = %d\n", 3 * 3);
printf("4 / 4 = %d\n", 4 / 4);
-> 설명
	나눈 몫 출력
printf("4 %% 4 = %d", 4 % 4);
-> 설명
	나눈 나머지 출력
```

# CH02
## 주석
```c
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
```

## 자료형
자료형
	- 정수형
		- int
		- short
		- long
		- long long
	- 실수형
		- float
		- double
		- long double
	- 문자형
		- char

## 변수
변수란 데이터를 일시적으로 저장할 목적으로 사용하는 메모리 공간입니다.

변수의 이름 짓기
	- 영문자와 숫자, _로 이루어 집니다.
	- 중간에 공백이 있으면 안됩니다.
	- 첫 글자는 반드시 영문자 또는 _이어야 합니다.
	- 대소문자 구별됩니다.
	- 키워드와 같은 이름은 안됩니다.

```c
/* 변수의 초기화 */
int a = 10; // 선언과 동시에 초깃값 설정
int b = 20;
int c; // 변수 선언
return 0;
```
## 변수를 활용한 사칙연산
```c
#include <stdio.h>
int main() {
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
```
![변수사용](https://raw.githubusercontent.com/Seong-Jun1525/C-Project/master/readmeImg/%EB%B3%80%EC%88%98%EC%82%AC%EC%9A%A9.png)

## 형식 지정자
형식 지정자 | 설명 | 예시
-- | -- | --
%d | 10진수 정수를 입출력할 때 사용 | scanf("%d", &i);<br>printf("%d", i);
%f | 실수형을 입출력할 때 사용 | scanf("%f", &f);<br>printf("%f", f);
%lf | double형의 실수로 입력할 때 사용 | scanf("%lf", &df);<br>printf("%f", df);
%c | 문자를 입출력할 때 사용 | scanf("%c", &ch);<br>printf("%c", ch);
%s | 문자열을 출력할 때 사용 | printf("%s", "Hello");

## 입력받기
### 그 전에 scanf()함수를 사용하다가 아래와 같은 에러를 해결하는 방법
```
'scanf': This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
```

```
보안상의 문제때문에 scanf()를 사용할 수 없는 것입니다.

해결방법 1
scanf() 대신 scanf_s() 사용

해결방법 2
#define _CRT_SECURE_NO_WARNINGS // 추가
#include <stdio.h>
```

### 사칙연산
```c
int add;
int sub;
int mul;
int div;
int remain;

int a;
int b;
scanf("%d %d\n", &a, &b); // &: 포인터

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
```
![scanf](https://github.com/Seong-Jun1525/C-Project/assets/77059720/2908e062-30ef-49a6-b6b4-f864af0586a5)


### 덧셈 프로그램
```c
int x;
int y;
int sum;

printf("첫 번째 숫자: ");
scanf("%d", &x);

printf("두 번째 숫자: ");
scanf("%d", &y);

sum = x + y;

printf("두 수의 합: %d\n", sum);

return 0;
```

### 연봉계산기
```c
int ysalary;
int msalary;
printf("연봉을 입력하시오");
scanf("%d", &ysalary);

msalary = ysalary / 12;

printf("월 수령액 %d\n", msalary);
```

### 원의 면적
```c
float radius;
float area;

printf("반지름을 입력: ");
scanf("%f", &radius);

area = radius * radius * 3.14;
printf("원의 면적: %f", area);
```

### 환율 계산기
```c
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
```

### 사각형의 넓이와 둘레
```c
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
```