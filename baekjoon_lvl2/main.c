#include <stdio.h>
#include <stdlib.h>

void code_1330();
void code_9498();
void code_2753();
void code_14681();
void code_2884();


int main()
{
    code_2753();
    return 0;
}

void code_1330() {
    int A, B;
    scanf("%d %d", &A, &B);

    if(A>B) printf(">");
    else if(A<B) printf("<");
    else printf("==");
}

void code_9498() {
    int score;
    scanf("%d", &score);

    if(score > 89) printf("A");
    else if (score > 79) printf("B");
    else if (score > 69) printf("C");
    else if (score > 59) printf("D");
    else printf("F");
}

void code_2753() {
    int input_year;
    scanf("%d", &input_year);
    if(input_year % 4 == 0 && input_year % 100 != 0 || input_year % 400 == 0) printf("1");
    else printf("0");
}

void code_14681() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    if(X > 0) {
        if(Y > 0) printf("1");
        else printf("4");
    }
    else {
        if(Y > 0) printf("2");
        else printf("3");
    }
}

void code_2884() {
    int timeBefore, timeAfter;
    int hourBefore, minuteBefore;

    scanf("%d %d", &hourBefore, &minuteBefore);
    timeBefore = 60*hourBefore+minuteBefore;
    if(timeBefore < 45) {
        timeBefore += 60*24;
    }

    timeAfter = timeBefore - 45;
    printf("%d %d", timeAfter / 60, timeAfter % 60);
}
