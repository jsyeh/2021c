///step02-1
#include <stdio.h>
int main()
{
    int a=999, b=100;
    int temp;

    printf("%d %d\n", a, b);

    temp=a; ///a�� �]�� temp���W (a����N�ŤU�ӤF)
    a=b; ///���W�� b��, ������ŤU�Ӫ�a����
    b=temp; ///�� temp���W��谱 ���l, ��i

    printf("%d %d\n", a, b);
}
