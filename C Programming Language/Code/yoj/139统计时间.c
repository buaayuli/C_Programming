#include<stdio.h>

int main(){
    int n, i, min, max;
    float sum=0;
    int s[200];
	scanf("%d", &n);

	for (i=0; i<n; i++)
		scanf("%d", &s[i]);

	min=max=sum=s[0];
	for (i=1; i<n; i++) {
		if (s[i]<min) min=s[i];
		if (s[i]>max) max=s[i];
		sum += s[i];
	}
	printf("%d %d %d", max, min, (int)(sum/n + 0.5));

    return 0;
}