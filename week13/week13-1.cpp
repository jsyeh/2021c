///Week13-1.cpp step01-1 ���� printf()���榡
///step01-1_�����Ͱ�,�L�X�Ӫ��Ʀr,�n������ƪ��n�C
///�Ѯv�Q�Τ@�i�Ϩӥܽd ���ϥ� printf()��format�榡�ӳ]�w,
///�䤤%5s �O5�檺�r��, %5d �O��5�檺���, %6.2f�O��6�檺�B�I��,�䤤�p���I���2��.zip
#include <stdio.h>
int main()
{
    printf("�п�J�y��1~10=>");
    int id;
    scanf("%d", &id);

    printf(" %5s %5s %5s %5s %5s %5s %5s %5s %5s\n",
           "�m�W ","�y��","��y","�ƾ�","�^��","��q","�q�l","�`��","�������Z" );
    printf(" %5s %5d %5d %5d %5d %5d %5d %5d %6.2f\n",
           "�W�r1",1,  1,  1,  1,  1,  1,  5,   1.0f );
    printf(" %5s %5d %5d %5d %5d %5d %5d %5d %6.2f\n",
           "�W�r5",5,100,100,100,100,100,500, 100.0f );
}

