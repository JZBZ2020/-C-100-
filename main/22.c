/*
��22�� n��ѧ���ĳɼ������������з���һ����ͷ�ڵ������ṹ�У�
hָ�������ͷ�ڵ㡣���д����fun�����Ĺ����ǣ��ҳ�ѧ������߷֣��ɺ���ֵ���ء�
*/
//��ûд��������
double fun(STREC *h)
{
	double max;
	STREC *q = h;
	max = h->s;
	do
	{
		if (q->s>max)
			max = q->s;
		q = q->next;
	} while (q != 0);
	return max;
}