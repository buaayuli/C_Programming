#include<stdio.h>

int weishu(int num){
	int i = 0;
	while(1){
		num /= 10;
		i++;
		if (num == 0)
		break;
	}
	return i;
}

int main(){
	int a, b, n, k, m;
	int i, t=0;
	scanf("%d %d %d %d %d", &a, &b, &n, &k, &m);
	for (i = a; i <= b; i++){
		if (i % 10 == n && i % k == 0 && weishu(i) == m)
		t++;
	}
	printf("%d",t);
	return 0;
}