#include <stdio.h> //插入标准化输入输出头文件

//主程序
int main()
{
    //请在此输入需要执行的代码
    char year[5],month[3],day[3];

    // 输出提示语句
    printf("请输入年月日，注意月日为两位字符，并以点间隔：\n");
    scanf("%s.%s.%s",year,month,day);
    printf("%s年%s月%s日",year,month,day);
    // C11 即2011版标准要求所有的函数均需要返回
    return 0;
}

