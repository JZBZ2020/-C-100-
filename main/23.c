/*
��23�� ���д����fun���ú����Ĺ����ǣ��ж��ַ����Ƿ�Ϊ����?
������������1�������������yes�����򷵻�0�������������no��������ָ˳���͵�������һ�����ַ�����

*/

int fun23(char *p) {
	int len = strlen(p);
	int i;
	/*
	abeceba  3
	0   6
	1   5
	2
	3
	abeeba   3

	*/
	for (i = 0; i < len / 2; i++) //0~3
		if (p[i] != p[len - i - 1]) {
			printf("no\n");
			return 0;
		}
	printf("yes\n");
	return 1;
}