#include<stdio.h>
int main()
{
    double total_sum = 0.0;
    int i;
    for (i = 1; i <= 20; i++)//i控制求和
    {
        //i=8  ---> 8*7*6*....*1
        double single_num = 1.0;
        int j;
        for (j = i; j > 0; j--)
        {
            single_num *= j;//j控制阶乘
        }
        total_sum += single_num;
    }
    printf("%.2f", total_sum);
    return 0;
}
