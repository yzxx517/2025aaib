///week11-1.cpp
///����SOIT107_ADVANCE_009 ��
#include <stdio.h>
int main()
{
    printf("�п�J 1422: ");
    int n;
    scanf("%d", &n);
    ///Q:�����̤j�����?
    while(n>0){
        printf("�{�b��X�Ӫ���:%d\n", n%10);
        n%10; ///��֪k,���X�C�@���
        n = n / 10
    }
    printf("���̤j����,�O: %d\n", ans);
}
