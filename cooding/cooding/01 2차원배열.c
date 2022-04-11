#include <stdio.h>

int main(void) {
	int arr[3][4] = {
		{1,2,3,4},	// [0][0]:1, [0][1]:2, [0][2]:3, [0][3]:4
		{5,6,7,8},	// [1][0]:5, [1][1]:6, [1][2]:7, [1][3]:8
		{9,10,11,12} //[2][0]:9, [2][1]:10, [2][2]:11, [2][3]:12
	};
	//실수 1 idx 범위 초과 + 2부터 출력
	// 반복횟수를 12번 고정(유연하지 못한 코드)
	// sizeof(arr) 배열 arr의 크기: 4*12 = 48
	// sizeof(arr[0]) 공간 하나의 크기: 4
	// sizeof(int) int형 변수의 크기: 4
	/*for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}*/
	/*for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d %d", arr[i][j]);
		}
	}*/
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	/*printf("%d", arr[0][0]);
	printf("%d", arr[0][1]);
	printf("%d", arr[0][2]);
	printf("%d", arr[0][3]);
	printf("\n");
	printf("%d", arr[1][0]);
	printf("%d", arr[1][1]);
	printf("%d", arr[1][2]);
	printf("%d", arr[1][3]);
	printf("\n");
	printf("%d", arr[2][0]);
	printf("%d", arr[2][1]);
	printf("%d", arr[2][2]);
	printf("%d", arr[2][3]);
	printf("\n");*/
	
}