#include <stdio.h>

int main(void) 
{
	int jungsu = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosu1 = 0.001592f;
	//���ڴ� ���������ؼ� 11��
	//�迭�� ���̴� 11+1(�ι���) = 12
	char mjyeol[100] = "Hello World";
	printf("���� %d, ���� %c, ���� %lf, �÷� %f\n"
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
	// mjyeol�� %c�� ����
	//printf("%c\n", mjyeol);
}