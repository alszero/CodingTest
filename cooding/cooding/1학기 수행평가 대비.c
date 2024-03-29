#include <string.h>
#include <stdio.h>

int main(void)
{
	// 배열은 20개의 공간을 가지지만, 문자의 길이는 3
	char str[20] = "YSY";

	// 문자의 길이를 구하는 함수
	int length = strlen(str);
	printf("%d\n", length);

	// 문자열 복사 strcpy(복사할 대상, 복사할 문자열)
	char copy_str[15];
	strcpy(copy_str, str);
	printf("%s\n", copy_str);

	// 문자열 덧붙이기 strcat(덧붙일 대상, 덧붙일 문자열)
	strcat(copy_str, "BLY");
	printf("%s\n", copy_str);

	// 문자열 비교하기
	if (strcmp(str, "YSY") == 0)
		printf("양서영 입니다. \n");
	else
		printf("양서영이 아닙니다. \n");

	// 배열은 20개의 공간 만들기, 문자의 길이는 3
	char str1[20] = "KMY";

	// 문자의 길이를 구하는 함수 strlen
	int length1 = strlen(str1);
	printf("%d\n", length1);

	// 문자열 복사 strcpy(복사대상, 복사문자열)
	char copy_copy[10];
	strcpy(copy_copy, str1);
	printf("%s\n", copy_copy);

	//문자열 덧붙이기 strcat(덧붙일 대상, 덧붙일 문자열)
	strcat(copy_copy, "HIHI");
	printf("%s\n", copy_copy);

	//문자열 비교하기
	if (strcmp(str, "KMKM") == 0) {
		printf("김민영입니다.\n");
	}
	else {
		printf("김민영이 아니네여\n");
	}


	// 문제 1 문자열의 길이 구하기
	char sstr[30] = "samgyetang";
	int llength = strlen(sstr);
	printf("삼계탕의 길이는 %d\n", llength);

	// 문제 2 copy_sstr에 "iceshu" 집어넣기(복사하기)
	char copy_sstr[30];
	strcpy(copy_sstr, "iceshu");
	printf("복사한 문자열은 %s \n", copy_sstr);

	// 문제3 copy_sstr에 "delicious" 덧붙이기
	strcat(copy_sstr, "delicious");
	printf("덧붙인 문자열은 %s \n", copy_sstr);

	// 문제4 "BMW"와 "benz"의 두 문자열이 같은지 다른지를 판별
	if (strcmp("BMW", "benz") == 0)
		printf("두 문자열은 같습니다.\n");
	else
		printf("두 문자열은 같지 않습니다.\n");
}
