///week10-2.cpp
///���F�U�P�Ҹ� �ϧǼƦr �ڭ̭n��%10/10��֪k
#include<stdio.h>
int main()
{
    printf("�п�J�@�ӼƦr(ex:379):");
    int n;
    scanf("%d",&n);///Ū�J��J���Ʀr
    printf("�A��J�F%d\n",n);
    ///printf("�L���Ӧ�ƬO%d\n",n%10);
    ///printf("�L���Q��ƬO%d\n",n/10%10);
    ///printf("�L���ʦ�ƬO%d\n",n/10/10%10);
    while(n>0){///�p�GN�٨S���� �N�~����
        printf("�{�b��%d���%d\n",n,n%10);
        n=n/10;
    }
}
