#include <stdio.h>
void Func(int)    //函数定义格式错误    删掉;换行加入{}
{
}
int main()
{
    int s = (int)1.5;    //定义不规范    在1.5前加(int)进行强制类型转换，将1.5转换为整型
    float f = 3.6;    //缺少分号    语句末尾添加分号
    char c = 'a';
    Func(3);
    int i = 1;
    while (i)    //原来都是偶数，导致i不可能等于23，从而陷入无限循环    删除i++中的++
    {
        if (i == 23)
            break;
        ++i;
    }
    int done = 0;
    if (done == 1)    //逻辑等于误写为赋值等于    = 应改为 ==
        printf("OK!\n");
    float average = 9.0 / 10.0;    //对整数进行除法运算造成小数损失    添加小数点后的数字
    float t = 0.5;    //除零错误    int 应改为 float
    float r = 100 / t;
    i = 0;
    while (i < 3)    //while后多添加了分号    删除分号
        printf("%d\t", i++);
    scanf_s("%c", &c, 8);
    switch (c)    //switch语句中漏写break语句    补写break语句
    {
    case 'A':
        printf("The score is 90~100\n");
        break;
    case 'B':
        printf("The score is 80~90\n");
        break;
    default:
        printf("Wrong input\n");
        break;
    }
    unsigned short playerIDs[5] = { 101,102,103,104,105 };
    for (int i = 0; i < 5; i++)    //数组访问越界    将 <= 改为 <
        printf("Player ID is: %d\t", playerIDs[i]);
    return 0;
}