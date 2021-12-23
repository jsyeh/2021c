///Week15-1.cpp step01-1 程そ计
///ㄏノfor癹伴刚场计
///ぃ癸aのb常俱埃, 琌杠,碞琌だそ计
///т程ê,程そ计
/// 369      3
///----- = -----
/// 123      1
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    ///程そ计: 俱埃程ê计
    int ans=1;
    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0 ) ans=i;
    }
    printf("%d", ans);
}
