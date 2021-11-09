#include <stdio.h>

typedef struct Pig
{
    int ord;    //序号
    int state;  //状态
    int max;    //最大容量
    int bs_c;   //基本成本
    int cul_c;  //养殖成本
    int toc[3]; //总成本
} Pig;

int main()
{
    Pig p[3001] = {0};
    int b[3];
    int n, i, j, k, l;
    int cost[4] = {1000000};    //0是成本，1～3是批次号
    int o1, o2, o3;
    int c_temp, flag1 = 0, flag2 = 0;
    for (i = 0; i < 3; i++) //输入三个批次
        scanf("%d", &b[i]);
    scanf("%d", &n);
    for (i = 0; i < n; i++) //猪场信息
        scanf("%d %d %d %d %d", &p[i].ord, &p[i].state,
              &p[i].max, &p[i].bs_c, &p[i].cul_c);

    for (i = 0; i < 3; i++) //判断猪场是否可容纳每个批次的猪
        for (j = 0; j < n; j++)
            if (p[j].state == 0 && p[j].max >= b[i])    //可以容纳则计算费用，不能容纳的费用为0
                p[j].toc[i] = p[j].bs_c + p[j].cul_c * b[i];

    for (i = 0; i < n; i++) //所有猪场、三批次，寻找可行方案
        if (p[i].toc[0] != 0)
            for (j = 0; j < n; j++)
                if (p[j].toc[1] != 0 && j != i)
                    for (k = 0; k < n; k++)
                        if (p[k].toc[2] != 0 && k != i && k != j) {
                            c_temp = p[i].toc[0] + p[j].toc[1] + p[k].toc[2];
                            if (c_temp < cost[0]) {
                                flag1 = 1;  //标记，准备存储当前可行方案
                                flag2 = 1;  //标记，表示找到了可行方案
                            }
                            else if (c_temp == cost[0]) {   //准备存储成本相同但序号更小的方案
                                o1 = p[i].ord - cost[1];    //计算新方案与原方案的序号差值
                                o2 = p[j].ord - cost[2];
                                o3 = p[k].ord - cost[3];    
                                if (o1 < 0 || o1 == 0 && o2 < 0 ||
                                    o1 == 0 && o2 == 0 && o3 < 0)
                                    flag1 = 1;
                            }
                            if (flag1 == 1) {   //存储方案
                                cost[0] = c_temp;
                                cost[1] = p[i].ord;
                                cost[2] = p[j].ord;
                                cost[3] = p[k].ord;
                                flag1 = 0;  //标记归0，不影响下一次判断
                            }
                        }
    if (flag2 == 1)
        printf("%d\n%d %d %d", cost[0], cost[1], cost[2], cost[3]);
    else
        printf("NO");

    return 0;
}