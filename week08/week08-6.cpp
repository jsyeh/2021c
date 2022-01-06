///Week08-6.cpp step03-2
///2層迴圈 實習課教過, 星星畫三角形、平行四邊形
#include <stdio.h>
int main()
{

    int n=4;


    for(int i=1; i<=n; i++){
        ///printf("%d: ", i);///鷹架,i層樓
        ///i層樓,有i顆星

        for(int k=1; k<=i; k++) printf("*");

        printf("\n");
    }
}
