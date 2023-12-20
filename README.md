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
	위의 처럼 문자열(string)을 출력할 때는 ""를 사용합니다.

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

## 자료형(혹은 데이터 타입)
### 자료형
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

```
자료형은 데이터의 종류입니다. 정수데이터, 실수데이터, 문자열데이터 등 다양한 자료형들이 있습니다.
각각의 자료형들은 저장공간이 다 다릅니다. 정수는 실수보다 적은 공간으로 가능한데 실수는 큰 공간이 필요합니다.

적절한 자료형을 사용해서 실행속도를 빠르게 할 수 있습니다.
```

### 자료형의 크기를 알아내는 연산자 sizeof()
```c
#include <stdio.h>
int main() {
    /* 자료형의 크기를 알아내는 연산자 sizeof() -> 함수 아님 */
    int x;
    printf("변수 x의                   크기: %d\n", sizeof(x));

    printf("char형의                   크기: %d\n", sizeof(char));
    printf("int형의                    크기: %d\n", sizeof(int));
    printf("long형의                   크기: %d\n", sizeof(long));
    printf("short형의                  크기: %d\n", sizeof(short));
    printf("long long형의              크기: %d\n", sizeof(long long));
    printf("float형의                  크기: %d\n", sizeof(float));
    printf("double형의                 크기: %d\n", sizeof(double));
}
```
![자료형의크기](https://github.com/Seong-Jun1525/C-Project/assets/77059720/bc8cca44-c1ef-48cb-ab5e-466928799671)

## 정수형
```
short		<=		int		<=		long		<=		long long
2바이트		      4바이트         4바이트			     8바이트
```

### unsigned, signed 수식자
두 개의 키워드 모두 정수형 앞에 쓸 수 있습니다.<br>
unsigned: 음수가 아닌 값만을 나타낸다는 의미<br>
signed: 음수도 가능하다는 의미<br>

## 실수형

## 문자형
문자는 글자, 숫자, 기호 등을 의미합니다.
아스키코드(확장문자)를 참고하면 좋습니다.
<a href="https://namu.wiki/w/%EC%95%84%EC%8A%A4%ED%82%A4%20%EC%BD%94%EB%93%9C">아스키코드</a>
```c
char c1 = 'A'; // 문자 상수로 초기화
char c2 = 65; // 아스키코드로 초기화

printf("c1 = % c\n", c1);
printf("c2 = %c\n", c2);
```
![아스키코드사용](https://github.com/Seong-Jun1525/C-Project/assets/77059720/c92eab7a-32e5-4c9b-8801-ab82f3422690)

### 제어문자
제어문자 | 이름 | 의미
-- | -- | --
\0 | 널문자 | 
\a | 경고 | "삐" 경고음 발생
\b | 백스페이스 | 커서를 현위치에서 뒤로 옮김
\t | 수평탭 | 다음 수평탭 위치로 커서를 옮김
\n | 줄바꿈 | 커서를 다음 라인으로 옮김
\v | 수직탭 | 커서를 다음 수직탭으로 위치로 옮김
\f | 폼피드 | 주로 프린터에서 강제적으로 다음 페이지로 넘길 때 사용
\r | 캐리지 리턴 | 커서를 현재 라인의 시작위치로 옮김
\" | 큰 따옴표 | 
\' | 작은 따옴표 | 
\\\\ | 역슬래시 | 

```c
int id, pw;
printf("아이디와 패스워드를 입력하세요\n");
printf("id: ____\b\b\b\b");
scanf("%d", &id);

printf("pw: ____\b\b\b\b");
scanf("%d", &pw);

printf("id: %d\npw: %d", id, pw);
```
![제어문자사용1](https://github.com/Seong-Jun1525/C-Project/assets/77059720/1256503a-29d2-4450-a95b-ef04cf2d5221)
![제어문자사용2](https://github.com/Seong-Jun1525/C-Project/assets/77059720/63f1f75a-d6f6-427c-91ac-202fb3554834)

## 변수
변수란 데이터를 일시적으로 저장할 목적으로 사용하는 메모리 공간입니다. 변수는 메인메모리에 만들어집니다. 변수의 값은 언제든지 변할 수 있습니다.

### 변수를 사용하는 이유
- 사용자에게서 받은 데이터를 저장하기 위해
- 프로그램을 유연하게 만들기 위해
- 동일한 코드를 여러가지 데이터에 적용하기 위해

### 변수의 이름 짓기
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

# CH03

## 상수
```
상수는 변수와는 반대로 값이 변할 수 없습니다. 프로그램이 실행되는 동안 변하지 않는 값을 상수로 만들 수 있습니다.
앞에서 만든 원의 면적 구하기 프로그램에서 원주율 3.14의 값은 변하지 않는데 이러한 값을 상수로 만들어 사용할 수 있습니다.
상수에도 자료형이 있고 메인메모리에 저장됩니다.

위에서 사용한 3.14같은 경우는 이름을 붙이지 않았는데 이런 상수를 리터럴상수라고 합니다.
이름이 붙은 상수는 기호 상수라고 합니다.
```

## 오버플로우
변수가 저장할 수 있는 범위의 한계를 넘어갔을 때 발생합니다. 한계를 벗어나면 다시 처음으로 돌아갑니다.

## 기호 상수
### 기호 상수 선언방법
#### 1
```c
#define EXCHANGE_RATE 1301
```
#### 2
```c
const int EXCHANGE_RATE = 1301
```
보통 2번을 많이 사용합니다.
```
const 키워드를 사용해서 상수를 선언하면 자료형도 지정할 수 있습니다. 또한 상수를 지정하는 범위를 변수와 같이 지정할 수 있습니다.
추가로 배열이나 구조체와 같은 복합 데이터 타입에서도 const키워드를 사용할 수 있습니다.
```

## 태양빛 도달 시간 계산
```c
printf("태양빛 도달 시간\n");
double lightSpeed = 300000.000000;
double distance = 149600000.000000;
double time;

time = distance / lightSpeed;

printf("빛의 속도: %lfkm/s\n", lightSpeed);
printf("태양과 지구와의 거리: %lfkm\n", distance);
printf("도달 시간: %lf초\n", time);
```

![태양빛](https://github.com/Seong-Jun1525/C-Project/assets/77059720/0bbd18d9-c849-4e7d-bab2-bb17e57af4ed)