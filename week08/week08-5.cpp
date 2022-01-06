///Week08-5.cpp step03-1
///2層迴圈 實習課教過, 星星畫三角形、平行四邊形
#include <stdio.h>
int main()
{
    printf("1: *\n");
    printf("2: **\n");
    printf("3: ***\n");
    printf("4: ****\n");///缺點:要好多好多行

    int n=4;
    for(int i=1; i<=n; i++){
        printf("%d: ", i);///鷹架,幾層樓

        printf("\n");
    }
}
