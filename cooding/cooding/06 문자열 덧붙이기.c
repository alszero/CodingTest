#include <stdio.h>
#include <string.h>		//strlen()ȣ��

void my_strcat(char*s1, char*s2) {
	int s1_len = strlen(s1); //str1�� ���ڰ���
	int s2_len = strlen(s2); //str2�� ���ڰ���

	//s1[5] = s2[0];
	//s1[6] = s2[1];
	//s1[7] = s2[2];
	//s1[8] = s2[3];
	//s1[9] = s2[4];
	//s1[10] = s2[5];

	// 5�� �ǹ̴� strlen(s1), 6�� �ݺ��ϴ� �ǹ̴� strlen(s2)
	for (int i = s1_len; i < s1_len + s2_len; i++)
	{
		s1[s1_len + i] = s2[i];
	} 
	return 0;
}
int main(void)
{
	char str1[20] = "hello";
	char str2[20] = "yellow";

	// str1�� ���뿡 str2�� ������
	strcat(str1, str2);
	// helloyellow�� �������� ���ڴ�
	printf("%s", str1);

	my_strcat(str1, str2);
}