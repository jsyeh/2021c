///Week08-3.cpp step02-2 �P�_���
#include <stdio.h>
int main()
{
    int n;///Input: 1��, Output: �O���O���
    scanf("%d", &n);

    /// n �O���O���: 1 �M n�����i�㰣,�䥦������
    int bad=0;///�S���a��,�S���ѹ���
    for( int i=2 ; i<n; i++ ){///�u�P�_ 2...n-1
        if( n%i==0 ) bad++; ///�V�|, �㰣�F, ���O���
    }

    if( bad==0 ) printf("%d�O���", n);///�S���ѹ���,�S���a��
    else printf("%d�a���F, ���O���", n);
}
