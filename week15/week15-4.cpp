///Week15-4.cpp step02-3 ����۰��k �禡�I�s�禡
#include <stdio.h>
int box(int a, int b)///�o�����_���l,��̤j���]��
{     ///�Ѥj,�ѤG
    if( a==0 ) return b;
    if( b==0 ) return a;
    return box( b, a%b );
}         /// �ѤG,�ѤT
int main()
{
    int a, b;
    scanf("%d %d", &a, &b );

    int ans = box( a, b );
    printf("%d", ans);
}
