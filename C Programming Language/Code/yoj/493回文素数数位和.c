#include <stdio.h>
#include <math.h>
#include <stdbool.h>

typedef struct num{
    int PP; //Palindromic Prime
    int DS; //Digit Sum
} Num;

bool isPrime(int n);        //判断素数
bool isPalindromic(int n);  //判断回文数
int DigitSum(int n);        //计算数位和
void BubbleSort(struct num num[], int con); //气泡排序

int main()
{
    int m, n, con = 0;
    int j = 0;
    int flag = 0;
    Num num[1000];
    scanf("%d %d", &m, &n);

    for (int i = m; i <= n; i++) {
        if (isPrime(i) && isPalindromic(i)) {   //判断回文素数
            num[j].PP = i;
            num[j].DS = DigitSum(i);            //存储数位和
            j++;
        }
    }
    BubbleSort(num, j);

    for (int i = 0; i < j; i++)
        if (num[i].DS == num[j-1].DS) {
            printf("%d %d", num[i].PP, num[i].DS);
            flag =1 ;
            break;
        }
    if (flag == 0) {
        printf("0 0");
    }

    return 0;
}


bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n%i == 0)
            return false;
    
    return true;
}

bool isPalindromic(int n)
{
    int rev = 0;                    //rev，翻转
    while (n > rev) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return n == rev || n == rev / 10;   //位数为奇数时，翻转的数需要除以10
}

int DigitSum(int n)
{
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void BubbleSort(struct num num[], int con)
{
    struct num temp;
    for (int i = 0; i < con; i++)
        for (int j = 0; j < con - 1 - i; j++)
            if (num[j].DS > num[j+1].DS) {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
}
