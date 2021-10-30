#include <stdio.h>
#include <math.h>
int main() {
	int from, to, n, m, weishu, sum, i;
	sum = 0;
	scanf("%d%d", &from, &to);

	for (n = from; n <= to; ++n) {
		i = n;
		weishu = 0;
		do {
			i = i / 10;
			weishu++;
		} while (i != 0);
		m = n * n;
		for (i = 0; i < weishu; i++)
			m = m / 10;
		for (i = 0; i < weishu; i++)
			m = m * 10;
		if (n == n * n - m)
			sum += n;
	}

	printf("%d", sum);
	return 0;
}