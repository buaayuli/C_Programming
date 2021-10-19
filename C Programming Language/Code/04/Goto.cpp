#include <stdio.h>

int main (void) {
	int n;
	
pos_1:
	printf("请输入一个正整数：");
	scanf("%d", &n);
	if (n < 0) {
		printf("输入错误！\n");
		goto pos_1;
	}
	printf("成功输入正整数：%d\n", n);
	return 0;
}