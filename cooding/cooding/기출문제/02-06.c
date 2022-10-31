#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int floors[], int floors_len) {
    // 1(floors[0]) -2(floors[1]) =1
    // 2(floors[1]) -5(floors[2]) =3
    // 5(floors[2]) -4(floors[3]) =1
    // 4(floors[3]) -2(floors[4]) =2
    int dist = 0;
    for (int i = 1; i < floors_len; ++i) {
        //양수만 더하기
        if (floors[i] > floors[i-1])
            dist += floors[i] - floors[i - 1];
        else
            dist += floors[i - 1] - floors[i];
    }
    return dist;
}

int main() {
    int floors[5] = { 1, 2, 5, 4, 2 };
    int floors_len = 5;
    int ret = solution(floors, floors_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
