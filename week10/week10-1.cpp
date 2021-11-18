///Week10-2.cpp step02-1  想知道有幾個質數, 如何做?
#include <stdio.h>	///A: 每找到1個質數, 就 ++
int main()
{ ///程式有個問題: 越大的數字, 會越慢 =>快一點!!!!!
	int m;
	scanf("%d", &m);

	int ans=0;///還沒找到任何 質數
	for(int n=2; n<=m; n++){
		int bad=0;
		for(int i=2; i<n; i++){
			if(n%i==0){
                bad=1;///如果有整除,就壞了
                break;///希望迴圈可以提早結束,會快!
			}
		}
		if( bad==0 ){
            ans++;///找到了, 就++
            ///不要印的話,會快! printf("%d ", n);///找到 質數
		}
	}
	printf(" \n ans: %d \n", ans);
}
