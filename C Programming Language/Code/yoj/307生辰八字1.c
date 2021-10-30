#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int k, n, i, t, j, a[9], b[9], c[101], temp4;
	double s[101] = {0}, temp1, temp2, temp3, temp5;
	scanf("%d%d", &n, &k);
	for (i = 1; i <= 8; i++)
		scanf("%d", &a[i]); 

	for (i = 1; i <= n; i++) {
		scanf("%d", &c[i]); 

		for (t = 1; t <= 8; t++)
			scanf("%d", &b[t]); 

		temp1 = 0;
		temp2 = 0;
		temp3 = 0;
		for (t = 1; t <= 8; t++) {
			temp1 = temp1 + a[t] * b[t];
			temp2 = temp2 + a[t] * a[t];
			temp3 = temp3 + b[t] * b[t];
		}
		s[i] = temp1 / (sqrt(temp2) * sqrt(temp3)); 
	}

	for (i = 1; i <= n; i++)
		for (j = 1; j <= n - i; j++)
			if (s[j] < s[j + 1] || (fabs(s[j] - s[j + 1]) < 1e-10 && c[j] < c[j + 1])) {
				temp4 = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp4;
				temp5 = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp5;
			}
	for (i = 1; i <= k; i++)
		printf("%d ", c[i]);

	return 0;
}
