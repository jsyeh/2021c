///Week17-2.cpp step01-2 ��֪k
#include <stdio.h>
int main()
{
    int N=1234567892;///Q: �аݭӦ�ƬO�h��
    ///  N%10 ���l��,�N�O�Ӧ��
    ///  N/10 ��10, �e�������

    while( N > 0 ){
        printf("%d => %d %d \n", N, N/10, N%10 );
        N = N / 10;///�ܤp
    }

}
