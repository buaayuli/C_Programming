#include <stdio.h>

/*
����һ��������4λ��ʮ���ƷǸ�����N�������Ǽ�λ����������ʮ��ǧ˳���ӡ����λ���֡�
�����ʽ
����һ�У�ֻ����һ��ʮ���ƷǸ�����N��
�����ʽ
����һ�У���Ϊ�����֣����Ȱ���ʮ��ǧ�����λ���֣�Ȼ�����λ��������֮���Զ��ŷָ���
��������
123
�������
3,2,1,3
*/



#if 0

int main() {
	int b = 0, c = 0, i = 0;
	long a = 0;

	scanf("%ld", &a);
	if (a == 0) {
		printf("%ld,", a);
		i = 1;
	}

	b = a;
	while (a != 0) {
		a = a / 10;
		i++;
	}

	while (b != 0) {
		c = b % 10;
		printf("%d,", b % 10);

		b = b / 10;
	}

	printf("%d", i);
	return 0;


}
#endif


#if 1

#include <stdio.h>
int main() {
	int n, cnt = 0;
	scanf("%d", &n);

	if (n == 0)
		printf("0,1\n");
	else {
		while (n != 0) {
			printf("%d,", n % 10);
			n /= 10;
			cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
#endif
