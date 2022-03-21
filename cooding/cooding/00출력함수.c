#include <stdio.h>

int main(void) 
{
	int jungsu = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosu1 = 0.001592f;
	//문자는 띄어쓰기포함해서 11개
	//배열의 길이는 11+1(널문자) = 12
	char mjyeol[100] = "Hello World";
	printf("정수 %d, 문자 %c, 더블 %lf, 플롯 %f\n"
		, jungsu, munja, sosu, sosu1);
	for (int i = 0; i < 12; i++) 
	{
		printf("%c", mjyeol[i]);
	}
	/*printf("%c", mjyeol[0]);
	printf("%c", mjyeol[1]);
	printf("%c", mjyeol[2]);
	printf("%c", mjyeol[3]);
	printf("%c", mjyeol[4]);
	printf("%c", mjyeol[5]);
	printf("%c", mjyeol[6]);
	printf("%c", mjyeol[7]);
	printf("%c", mjyeol[8]);
	printf("%c", mjyeol[9]);
	printf("%c", mjyeol[10]);
	printf("%c", mjyeol[11]);*/
	//printf("%s\n", mjyeol);
	// mjyeol를 %c로 찍어보자
	//printf("%c\n", mjyeol);
}