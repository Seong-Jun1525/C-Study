#define _CRT_SECURE_NO_WARNINGS
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

    printf("\n");

    char c1 = 'A'; // 문자 상수로 초기화
    char c2 = 65; // 아스키코드로 초기화

    printf("c1 = % c\n", c1);
    printf("c2 = %c\n", c2);

    printf("\n");

    int id, pw;
    printf("아이디와 패스워드를 입력하세요\n");
    printf("id: ____\b\b\b\b");
    scanf("%d", &id);

    printf("pw: ____\b\b\b\b");
    scanf("%d", &pw);

    printf("id: %d\npw: %d", id, pw);

    printf("\n");
    printf("\n");

    printf("태양빛 도달 시간\n");
    double lightSpeed = 300000.000000;
    double distance = 149600000.000000;
    double time;

    time = distance / lightSpeed;

    printf("빛의 속도: %lfkm/s\n", lightSpeed);
    printf("태양과 지구와의 거리: %lfkm\n", distance);
    printf("도달 시간: %lf초\n", time);

    return 0;
}