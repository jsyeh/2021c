#include <stdio.h>///�j��
int a[8]={2, 0, 2, 1,  1, 2, 0, 2};///���Ѫ����,�O�j��
int main()
{
    int *a7_i, *ai;
    for(int i=0; i<8; i++){
        ai = &a[i]; a7_i = &a[7-i];
        if( a[i] == a[7-i] ) printf("%d %d �ۦP!\n", a[i], a[7-1] );
    }
}
