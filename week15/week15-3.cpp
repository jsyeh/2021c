///Week15-3.cpp step02-2 ����۰��k,��L�{�L�X��
///�f�Z: ���k, �l��, ���୫�а�,��0
///�ja,����b, �o��pc, �Ѥj���H,�ѤG���H,����
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b );
    int c = a%b;
    printf("�Ѥj:%d �ѤG:%d �ѤT:%d\n", a, b, c);
    while(1){
        if(c==0){
            printf("�]��c�O0,�Nbreak���}�j��\n");
            break;///���}�j��
        }
        a=b;///�Ѥj���H
        b=c;///�ѤG���H
        c=a%b;///�s���ѤT
        printf("�Ѥj:%d �ѤG:%d �ѤT:%d\n", a, b, c);
    }
    printf("���j�}�j���,���׬Ob: %d \n", b);
}
