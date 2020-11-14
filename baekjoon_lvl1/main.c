/*
백준 단계별 문제
1단계
코드는 백준에서의 문제 번호
*/


#include <stdio.h>
#include <stdlib.h>

void code_2557();
void code_10718();
void code_10171();
void code_10172();
void code_1000();

void code_1001();
void code_10998();
void code_1008();
void code_10869();
void code_10430();

void code_2588();


int main()
{
    code_2588();
    return 0;
}

void code_2557() {
    printf("Hello World!");
}

void code_10718() {
    printf("강한친구 대한육군\n강한친구 대한육군");
}

void code_10171() {
    printf("\\    /\\\n )  ( ')\n(  /  )\n \\(__)|");
}

void code_10172() {
    printf("|\\_/|\n|q p|   /}\n( 0 )\"\"\"\\\n|\"^\"`    |\n||_/=\\\\__|");
}

void code_1000() {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d", A+B);
}

void code_1001() {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d", A-B);
}

void code_10998() {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d", A*B);
}

void code_1008() {
    double A, B;
    scanf("%lf %lf", &A, &B);
    printf("%.10lf", A/B);
}

void code_10869() {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d\n%d\n%d\n%d\n%d", A+B, A-B, A*B, A/B, A%B);
}

void code_10430() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    printf("%d\n%d\n%d\n%d", (A+B)%C, ((A%C) + (B%C))%C, (A*B)%C, ((A%C) * (B%C))%C);
}

void code_2588() {
    int A, B, C, D, E;
    scanf("%d %d", &A, &B);
    E = A*B;
    D = B%10;
    C = B%100;
    C /= 10;
    B /= 100;
    printf("%d\n%d\n%d\n%d", A*D, A*C, A*B, E);
}
