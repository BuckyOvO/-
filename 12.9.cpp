#include <stdio.h>
void Func(int)    //���������ʽ����    ɾ��;���м���{}
{
}
int main()
{
    int s = (int)1.5;    //���岻�淶    ��1.5ǰ��(int)����ǿ������ת������1.5ת��Ϊ����
    float f = 3.6;    //ȱ�ٷֺ�    ���ĩβ��ӷֺ�
    char c = 'a';
    Func(3);
    int i = 1;
    while (i)    //ԭ������ż��������i�����ܵ���23���Ӷ���������ѭ��    ɾ��i++�е�++
    {
        if (i == 23)
            break;
        ++i;
    }
    int done = 0;
    if (done == 1)    //�߼�������дΪ��ֵ����    = Ӧ��Ϊ ==
        printf("OK!\n");
    float average = 9.0 / 10.0;    //���������г����������С����ʧ    ���С����������
    float t = 0.5;    //�������    int Ӧ��Ϊ float
    float r = 100 / t;
    i = 0;
    while (i < 3)    //while�������˷ֺ�    ɾ���ֺ�
        printf("%d\t", i++);
    scanf_s("%c", &c, 8);
    switch (c)    //switch�����©дbreak���    ��дbreak���
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
    for (int i = 0; i < 5; i++)    //�������Խ��    �� <= ��Ϊ <
        printf("Player ID is: %d\t", playerIDs[i]);
    return 0;
}