/*
��47�� ���дһ������void fun(char *ss)���书���ǣ�
���ַ���ss�������±�Ϊ����λ���ϵ���ĸת��Ϊ��д(��λ���ϲ�����ĸ����ת��)��


C����   Сд ascii -->  ��д ����
+ ('A' - 'a')
*/

void fun(char *ss)
{/*regwregregw
     p
 */
	char *p = ss;
	while (*p)
	{
		*p += ('A' - 'a');
		p += 2;
	}
}