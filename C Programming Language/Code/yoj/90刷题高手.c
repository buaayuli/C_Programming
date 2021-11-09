#include <stdio.h>

typedef struct Stu {
    int sno;        //学号
    int p;          //刷题数量
    int ass[100];   //通过题目编号
    int perf;       //刷题数量
} Stu;


int main()
{
    int n, m, k, ass[100] = {0};
    Stu stu[100] = {0};
    int i, j, l;
    scanf("%d", &n);
    //输入老师要求的题号
    for (i = 0; i < n; i++) {
        scanf("%d", &ass[i]);
    }
    scanf("%d %d", &m, &k);
    //输入m个同学的学号、刷题数目、刷题编号
    for (i = 0; i < m; i++) {
        scanf("%d %d", &stu[i].sno, &stu[i].p);
        for (j = 0; j < stu[i].p; j++) {
            scanf("%d", &stu[i].ass[j]);
            //判断当前题目是否是老师要求的题目
            for (l = 0; l < n; l++)
                if (stu[i].ass[j] == ass[l]) {
                    stu[i].perf++;
                    break;
                }
        }
    }
    //m个同学按照刷题数目从多到少，学号从低到高排序
    for(i = 0; i < m - 1; i++)
        for (j = 0; j < m - 1 - i; j++)
            if (stu[j].perf < stu[j+1].perf ||
                stu[j].perf == stu[j+1].perf &&
                stu[j].sno > stu[j+1].sno) {
                    Stu temp = stu[j];
                    stu[j] = stu[j+1];
                    stu[j+1] = temp;
                }
    //输出排名前k的学生，所有学生排名均前k则按成绩从高到低输出
    int count;
    for (i = 0, count = 0; count < k && i < m; i++) {
        printf("%d ", stu[i].sno);
        if (stu[i].perf != stu[i+1].perf)
            count++;
    }

    
    return 0;
}