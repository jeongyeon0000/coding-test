#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    scanf("%d %d", &num1, &num2);
    int answer = -1;
    answer  = num1%num2;
    return answer;
}