# C-project
# CH01
## C����� Ư¡
- ������ ���
- ȿ������ ���
- �������� ���α׷��ֵ� �����ϰ� ������� ���α׷��ֵ� ����
- �̽ļ��� �پ ���

## �Ӻ���� �ý���
Ư�� ������ �ý����Դϴ�.

��) ����Ʈ��, �����ȣ ���� �ý���, �ڵ���, ī�޶� ��

## Hello World ����ϱ�
```c
#include <stdio.h>
int main(void) {
	printf("Hello World");
	return 0;
}
```
### �ڵ� ����
```
#include <stdio.h>
-> ����
	#: ��ó���� ��ȣ
	��ó����� �������ϱ� ���� ���� ���� �۾��� �ϴ� �����Ϸ��� �Ϻκ� �Դϴ�.
	#include�� �ҽ��ڵ� �ȿ� Ư�� ������ ���� ��ġ�� ���Խ�Ű��� ���Դϴ�.
	�̷��� ������ ��������̶�� �մϴ�.
	stdio.h ������ ����� �Լ��� ������ ������ �ִ� ��� �����Դϴ�.

int main(void) {
-> ����
	int main(void) {}�� main()�Լ��� �����ϴ� �����Դϴ�.
	�Լ��� Ư�� �۾��� �����ϱ� ���Ͽ� �ۼ��� �������� �ڵ��Դϴ�.
	int�� �Լ��� ����ϴ� ���� Ÿ���Դϴ�. int�� ������ ���մϴ�.
	main()�Լ��� C ���α׷����� ���� ó�� ����Ǵ� �κ��̶� C���α׷��� �ϳ��� main()�Լ��� �ݵ�� �־�� �մϴ�.
	void�� ����ִٴ� �ǹ̷� �Լ��� �Է°��� ���ٴ� ���Դϴ�.
	int�� void���� �� �����(�Ǵ� Ű����)��� �մϴ�.

	printf("Hello World");
-> ����
	printf()�� ����Լ��� ���մϴ�.
	()�ȿ� ����� ���� �־��ݴϴ�.
	���� ó�� ���ڿ�(string)�� ����� ���� ""�� ����մϴ�.

	return 0;
-> ����
	return�� �Լ��� �۾��� ������ ����� ��ȯ�� �� ����մϴ�.
	0�� ���� ���α׷��� ���������� ���������� ���մϴ�.

	�߰��� ���� �ڿ��� �׻� �����ݷ� ; �� �ٿ��� �մϴ�.
}
```

## ���� �� ����ϱ�
```c
#include <stdio.h>
int main(void) {
	printf("Hello World\n");
	printf("Hello World");
	return 0;
}
```
���� ���� ����� ���� `\n`��ȣ�� ����մϴ�.

![������ ����ϱ�](https://raw.githubusercontent.com/Seong-Jun1525/C-Project/master/readmeImg/%EC%97%AC%EB%9F%AC%EC%A4%84%20%EC%B6%9C%EB%A0%A5%ED%95%98%EA%B8%B0.png)

## ������ ����غ���
```c
#include <stdio.h>
int main() {
	// ������ ��� �غ���
	printf("1 + 1 = %d\n", 1 + 1);
	printf("2 - 2 = %d\n", 2 - 2);
	printf("3 * 3 = %d\n", 3 * 3);
	printf("4 / 4 = %d\n", 4 / 4);
	printf("4 %% 4 = %d", 4 % 4);
	return 0;
}
```
### �ڵ� ����
```
// ������ ��� �غ���
-> ����
	//�� �ּ� ��ȣ�Դϴ�.
printf("1 + 1 = %d\n", 1 + 1);
-> ����
	"1+1=%d"�� ���ڿ��� 1+1= �� ����ϰ�
	���� %d�� ������ ����� �� ����ϴ� ���� ������ �Դϴ�.
printf("2 - 2 = %d\n", 2 - 2);
printf("3 * 3 = %d\n", 3 * 3);
printf("4 / 4 = %d\n", 4 / 4);
-> ����
	���� �� ���
printf("4 %% 4 = %d", 4 % 4);
-> ����
	���� ������ ���
```

# CH02
## �ּ�
```c
/* C����� �ּ� */
/*
	���� �� �ּ�
	�ּ�1
	�ּ�2
*/

/*
	�ּ��� ���α׷��� ���� ����� ������ ���� �ʽ��ϴ�.
	�ּ��� ���α׷��Ӹ� ���� �� �Դϴ�.
	�ּ��� ���α׷��� �������� ���Դϴ�.
	�ּ����� ���α׷��� ������ ���� ���� ������ �� ���˴ϴ�.
*/
```

## �ڷ���(Ȥ�� ������ Ÿ��)
### �ڷ���
	- ������
		- int
		- short
		- long
		- long long
	- �Ǽ���
		- float
		- double
		- long double
	- ������
		- char

```
�ڷ����� �������� �����Դϴ�. ����������, �Ǽ�������, ���ڿ������� �� �پ��� �ڷ������� �ֽ��ϴ�.
������ �ڷ������� ��������� �� �ٸ��ϴ�. ������ �Ǽ����� ���� �������� �����ѵ� �Ǽ��� ū ������ �ʿ��մϴ�.

������ �ڷ����� ����ؼ� ����ӵ��� ������ �� �� �ֽ��ϴ�.
```

### �ڷ����� ũ�⸦ �˾Ƴ��� ������ sizeof()
```c
#include <stdio.h>
int main() {
    /* �ڷ����� ũ�⸦ �˾Ƴ��� ������ sizeof() -> �Լ� �ƴ� */
    int x;
    printf("���� x��                   ũ��: %d\n", sizeof(x));

    printf("char����                   ũ��: %d\n", sizeof(char));
    printf("int����                    ũ��: %d\n", sizeof(int));
    printf("long����                   ũ��: %d\n", sizeof(long));
    printf("short����                  ũ��: %d\n", sizeof(short));
    printf("long long����              ũ��: %d\n", sizeof(long long));
    printf("float����                  ũ��: %d\n", sizeof(float));
    printf("double����                 ũ��: %d\n", sizeof(double));
}
```
![�ڷ�����ũ��](https://github.com/Seong-Jun1525/C-Project/assets/77059720/bc8cca44-c1ef-48cb-ab5e-466928799671)

## ������
```
short		<=		int		<=		long		<=		long long
2����Ʈ		      4����Ʈ         4����Ʈ			     8����Ʈ
```

### unsigned, signed ������
�� ���� Ű���� ��� ������ �տ� �� �� �ֽ��ϴ�.<br>
unsigned: ������ �ƴ� ������ ��Ÿ���ٴ� �ǹ�<br>
signed: ������ �����ϴٴ� �ǹ�<br>

## �Ǽ���

## ������
���ڴ� ����, ����, ��ȣ ���� �ǹ��մϴ�.
�ƽ�Ű�ڵ�(Ȯ�幮��)�� �����ϸ� �����ϴ�.
<a href="https://namu.wiki/w/%EC%95%84%EC%8A%A4%ED%82%A4%20%EC%BD%94%EB%93%9C">�ƽ�Ű�ڵ�</a>
```c
char c1 = 'A'; // ���� ����� �ʱ�ȭ
char c2 = 65; // �ƽ�Ű�ڵ�� �ʱ�ȭ

printf("c1 = % c\n", c1);
printf("c2 = %c\n", c2);
```
![�ƽ�Ű�ڵ���](https://github.com/Seong-Jun1525/C-Project/assets/77059720/c92eab7a-32e5-4c9b-8801-ab82f3422690)

### �����
����� | �̸� | �ǹ�
-- | -- | --
\0 | �ι��� | 
\a | ��� | "��" ����� �߻�
\b | �齺���̽� | Ŀ���� ����ġ���� �ڷ� �ű�
\t | ������ | ���� ������ ��ġ�� Ŀ���� �ű�
\n | �ٹٲ� | Ŀ���� ���� �������� �ű�
\v | ������ | Ŀ���� ���� ���������� ��ġ�� �ű�
\f | ���ǵ� | �ַ� �����Ϳ��� ���������� ���� �������� �ѱ� �� ���
\r | ĳ���� ���� | Ŀ���� ���� ������ ������ġ�� �ű�
\" | ū ����ǥ | 
\' | ���� ����ǥ | 
\\\\ | �������� | 

```c
int id, pw;
printf("���̵�� �н����带 �Է��ϼ���\n");
printf("id: ____\b\b\b\b");
scanf("%d", &id);

printf("pw: ____\b\b\b\b");
scanf("%d", &pw);

printf("id: %d\npw: %d", id, pw);
```
![����ڻ��1](https://github.com/Seong-Jun1525/C-Project/assets/77059720/1256503a-29d2-4450-a95b-ef04cf2d5221)
![����ڻ��2](https://github.com/Seong-Jun1525/C-Project/assets/77059720/63f1f75a-d6f6-427c-91ac-202fb3554834)

## ����
������ �����͸� �Ͻ������� ������ �������� ����ϴ� �޸� �����Դϴ�. ������ ���θ޸𸮿� ��������ϴ�. ������ ���� �������� ���� �� �ֽ��ϴ�.

### ������ ����ϴ� ����
- ����ڿ��Լ� ���� �����͸� �����ϱ� ����
- ���α׷��� �����ϰ� ����� ����
- ������ �ڵ带 �������� �����Ϳ� �����ϱ� ����

### ������ �̸� ����
	- �����ڿ� ����, _�� �̷�� ���ϴ�.
	- �߰��� ������ ������ �ȵ˴ϴ�.
	- ù ���ڴ� �ݵ�� ������ �Ǵ� _�̾�� �մϴ�.
	- ��ҹ��� �����˴ϴ�.
	- Ű����� ���� �̸��� �ȵ˴ϴ�.

```c
/* ������ �ʱ�ȭ */
int a = 10; // ����� ���ÿ� �ʱ갪 ����
int b = 20;
int c; // ���� ����
return 0;
```
## ������ Ȱ���� ��Ģ����
```c
#include <stdio.h>
int main() {
	/* ������ �ʱ�ȭ */
	// ���� ����
	int add;
	int sub;
	int mul;
	int div;
	int remain;

	// ����� ���ÿ� �ʱ갪 ����
	int a = 20;
	int b = 3;

	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	remain = a % b;

	printf("��Ģ����\n");
	printf("a + b = %d\n", add);
	printf("a - b = %d\n", sub);
	printf("a * b = %d\n", mul);
	printf("a / b = %d\n", div);
	printf("a % b = %d\n", remain);

	return 0;
}
```
![�������](https://raw.githubusercontent.com/Seong-Jun1525/C-Project/master/readmeImg/%EB%B3%80%EC%88%98%EC%82%AC%EC%9A%A9.png)

## ���� ������
���� ������ | ���� | ����
-- | -- | --
%d | 10���� ������ ������� �� ��� | scanf("%d", &i);<br>printf("%d", i);
%f | �Ǽ����� ������� �� ��� | scanf("%f", &f);<br>printf("%f", f);
%lf | double���� �Ǽ��� �Է��� �� ��� | scanf("%lf", &df);<br>printf("%f", df);
%c | ���ڸ� ������� �� ��� | scanf("%c", &ch);<br>printf("%c", ch);
%s | ���ڿ��� ����� �� ��� | printf("%s", "Hello");

## �Է¹ޱ�
### �� ���� scanf()�Լ��� ����ϴٰ� �Ʒ��� ���� ������ �ذ��ϴ� ���
```
'scanf': This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
```

```
���Ȼ��� ���������� scanf()�� ����� �� ���� ���Դϴ�.

�ذ��� 1
scanf() ��� scanf_s() ���

�ذ��� 2
#define _CRT_SECURE_NO_WARNINGS // �߰�
#include <stdio.h>
```

### ��Ģ����
```c
int add;
int sub;
int mul;
int div;
int remain;

int a;
int b;
scanf("%d %d\n", &a, &b); // &: ������

add = a + b;
sub = a - b;
mul = a * b;
div = a / b;
remain = a % b;

printf("��Ģ����\n");
printf("a + b = %d\n", add);
printf("a - b = %d\n", sub);
printf("a * b = %d\n", mul);
printf("a / b = %d\n", div);
printf("a % b = %d\n", remain);

return 0;
```
![scanf](https://github.com/Seong-Jun1525/C-Project/assets/77059720/2908e062-30ef-49a6-b6b4-f864af0586a5)


### ���� ���α׷�
```c
int x;
int y;
int sum;

printf("ù ��° ����: ");
scanf("%d", &x);

printf("�� ��° ����: ");
scanf("%d", &y);

sum = x + y;

printf("�� ���� ��: %d\n", sum);

return 0;
```

### ��������
```c
int ysalary;
int msalary;
printf("������ �Է��Ͻÿ�");
scanf("%d", &ysalary);

msalary = ysalary / 12;

printf("�� ���ɾ� %d\n", msalary);
```

### ���� ����
```c
float radius;
float area;

printf("�������� �Է�: ");
scanf("%f", &radius);

area = radius * radius * 3.14;
printf("���� ����: %f", area);
```

### ȯ�� ����
```c
double rate; // ȯ��
double usd; // �޷�ȭ
int krw; // ��ȭ

printf("ȯ���� �Է��ϼ���: ");
scanf("%lf", &rate);
printf("\n");

printf("��ȭ�ݾ��� �Է��ϼ���: ");
scanf("%d", &krw);
printf("\n");

usd = krw / rate;

printf("��ȭ %d���� %lf �޷��Դϴ�.", krw, usd);
```

### �簢���� ���̿� �ѷ�
```c
double w;
double h;
double area;
double perimeter;

printf("����: ");
scanf("%lf", &w);
printf("\n");

printf("����: ");
scanf("%lf", &h);
printf("\n");
	
area = w * h;
perimeter = 2 * (w + h);

printf("����: %f\n�ѷ�: %f", area, perimeter);
```

# CH03

## ���
```
����� �����ʹ� �ݴ�� ���� ���� �� �����ϴ�. ���α׷��� ����Ǵ� ���� ������ �ʴ� ���� ����� ���� �� �ֽ��ϴ�.
�տ��� ���� ���� ���� ���ϱ� ���α׷����� ������ 3.14�� ���� ������ �ʴµ� �̷��� ���� ����� ����� ����� �� �ֽ��ϴ�.
������� �ڷ����� �ְ� ���θ޸𸮿� ����˴ϴ�.

������ ����� 3.14���� ���� �̸��� ������ �ʾҴµ� �̷� ����� ���ͷ������� �մϴ�.
�̸��� ���� ����� ��ȣ ������ �մϴ�.
```

## �����÷ο�
������ ������ �� �ִ� ������ �Ѱ踦 �Ѿ�� �� �߻��մϴ�. �Ѱ踦 ����� �ٽ� ó������ ���ư��ϴ�.

## ��ȣ ���
### ��ȣ ��� ������
#### 1
```c
#define EXCHANGE_RATE 1301
```
#### 2
```c
const int EXCHANGE_RATE = 1301
```
���� 2���� ���� ����մϴ�.
```
const Ű���带 ����ؼ� ����� �����ϸ� �ڷ����� ������ �� �ֽ��ϴ�. ���� ����� �����ϴ� ������ ������ ���� ������ �� �ֽ��ϴ�.
�߰��� �迭�̳� ����ü�� ���� ���� ������ Ÿ�Կ����� constŰ���带 ����� �� �ֽ��ϴ�.
```

## �¾�� ���� �ð� ���
```c
printf("�¾�� ���� �ð�\n");
double lightSpeed = 300000.000000;
double distance = 149600000.000000;
double time;

time = distance / lightSpeed;

printf("���� �ӵ�: %lfkm/s\n", lightSpeed);
printf("�¾�� �������� �Ÿ�: %lfkm\n", distance);
printf("���� �ð�: %lf��\n", time);
```

![�¾��](https://github.com/Seong-Jun1525/C-Project/assets/77059720/0bbd18d9-c849-4e7d-bab2-bb17e57af4ed)