#include <stdio.h>

int main(void) {
	int arr[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//실수 1 idx 범위 초과 + 2부터 출력
	
	// 반복횟수를 12번 고정(유연하지 못한 코드)
	for (int i = 0; i < 12; i++) 
	{
		printf("%d ", arr[i]);
	}
}