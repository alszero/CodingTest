#include <stdio.h>

int main(void) {
	int arr[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//실수 1 idx 범위 초과 + 2부터 출력
	
	// 반복횟수를 12번 고정(유연하지 못한 코드)
	// sizeof(arr) 배열 arr의 크기: 4*12 = 48
	// sizeof(int) int형 변수의 크기: 4
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		printf("%d ", arr[i]);
	}
}