/*

��15�� ���дһ������unsigned fun(unsigned w),wʹһ������10���޷���������
��w��n(n��2)λ���������������w��n��1λ������Ϊ����ֵ���ء�
333  33
4856115  856115
485611
*/
#include<string.h>
unsigned fun(unsigned w) {
	char *p = (char)w;
	int a = strlen(p);
	return (int)w % (a * 10);
}

//451
unsigned fun(unsigned w)
{
	unsigned t, s = 0, s1 = 1, p = 0;
	t = w;
	while (t>10)
	{/*s1��һ���۳˵���������ûһλ�Ĵ�С����ʵ�о��ַ���ƴ�Ӹ��򵥣�python������ַ�����Ƭ
			def p(w):
				w = str(w)
				return int(w[1:])     
		python�����
	 
	 */
		if (t / 10)	p = t % 10;
		s = s + p*s1;
		s1 *= 10;
		t /= 10;
	}
	return s;
}