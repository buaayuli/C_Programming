#include <stdio.h>

/*
给出一个不多于4位的十进制非负整数N，求它是几位数，并按个十百千顺序打印出各位数字。
输入格式
　　一行，只包含一个十进制非负整数N。
输出格式
　　一行，分为两部分，首先按个十百千输出各位数字；然后输出位数。数字之间以逗号分隔。
输入样例
123
输出样例
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
