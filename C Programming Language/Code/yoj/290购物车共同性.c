#include <stdio.h>

int main()
{
    int n, i, j, k, num0, num;
    int c0[2][100] = {0};
    int c[19][100] = {0};
    int count[101] = {0};
    scanf("%d", &n);
    scanf("%d", &num0);
    for (j = 0; j < num0; j++)//第一个顾客单独存储
        scanf("%d", &c0[0][j]);//0行是商品编号
    for (i = 0; i < num0 - 1; i++)//排序
        for (j = 0; j < num0 - 1 - i; j++)
            if (c0[0][j] > c0[0][j + 1]) {
                int temp = c0[0][j];
                c0[0][j] = c0[0][j + 1];
                c0[0][j + 1] = temp;
            }
    for (i = 0; i < n - 1; i++) {//后n-1个顾客与第一个顾客进行商品类别比较
        scanf("%d", &num);
        for (j = 0; j < num; j++) {//num当前顾客商品数量
            scanf("%d", &c[i][j]);//商品编号
            for (k = 0; k < num0; k++)//遍历第一个顾客商品看是否存在相同
                if (c[i][j] == c0[0][k])
                    c0[1][k]++;//1行记录商品重复次数
        }
    }
    int flag = 0;
    for (i = 0; i < num0; i++)
        if (c0[1][i] == n - 1) {
            printf("%d ", c0[0][i]);
            flag = 1;
        }
    if (flag == 0)
        printf("NO");



    return 0;
}