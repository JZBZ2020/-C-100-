#include<stdio.h>
#include<string.h>

/*
��19�� ��д����fun,�ú����Ĺ����ǣ�
���ַ���ɾ��ָ�����ַ���ͬһ��ĸ�Ĵ�Сд����ͬ�ַ�����
"abbbbccffwfwevwgddddwwq"   --ɾ��b-->  "accffwfwevwgddddwwq"
*/

void fun(char s[], char ch)
{
	int i, k = 0;
	char *p = s;
	int num = strlen(s);

	for (i = 0; i < num; i++)
	{
		if (s[i] != ch) p[k++] = s[i];//�Լ����Լ�����
	}
	p[k] = '\0';

}




//int main() {
//	char s[] = "abbbbccffwfwevwgdbbdddwwq";
//	char a = 'b';
//	fun(s, a);
//	puts(s);
//
//}