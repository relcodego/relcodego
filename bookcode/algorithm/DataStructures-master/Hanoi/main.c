/*
    ��ŵ������ŵ�����ֳƺ�������������Դ��ӡ��һ�����ϴ�˵��������ߡ�
    �����촴�������ʱ�������������ʯ���ӣ�
    ��һ�������ϴ������ϰ��մ�С˳������64Ƭ�ƽ�Բ�̡�
    ���������������Ű�Բ�̴����濪ʼ����С˳�����°ڷ�����һ�������ϡ�
    ���ҹ涨����СԲ���ϲ��ܷŴ�Բ�̣�����������֮��һ��ֻ���ƶ�һ��Բ�̡�


    ���Ĳ��裺
    1.�Ƚ�63�����Ӵ�X�ƶ���Y��
    2.�ٽ���64����X�ƶ���Z��
    3.��Y�ϵ�63�������ƶ���Z��

    ����Ĳ��輰����Ҫ����������������������
*/

#include <stdio.h>
#include <stdlib.h>

int count = 1;

//����ʵ�ֺ�ŵ�����ƶ�
void hanoi( int n, char x, char y, char z)
{
    if( 1 == n )
    {
        printf("step NO.%d move %c to %c \n", count++, x, z);
    }
    else
    {
        hanoi( n-1, x, z, y );
        printf("step NO.%d move %c to %c \n", count++, x, z);
        hanoi( n-1, y, x, z );
    }
}

int main()
{
    int n;
    char a = 'X', b = 'Y', c = 'Z';

    printf("�����뺺ŵ���Ĳ�����");
    scanf("%d", &n);

    hanoi( n, a, b, c );

    return 0;
}