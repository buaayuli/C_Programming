#include <stdio.h>

int main (void) {
	int n;
	
pos_1:
	printf("������һ����������");
	scanf("%d", &n);
	if (n < 0) {
		printf("�������\n");
		goto pos_1;
	}
	printf("�ɹ�������������%d\n", n);
	return 0;
}