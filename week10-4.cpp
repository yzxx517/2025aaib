//week10-4 �D���D
//leetcode 1399.count largest group
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count=0;
        int a[100]={};
        for(int i=1;i<=n;i++) {//�H����for�j��q1...n
            int total=0,now=i;//�[�_�Ӫ����G�stotal �{�b����now
            while(now>0){//��֪k�A�p�Gnow�٦��ѡA�~��
                total+=now%10;//��֥[�_��(�C�@��Ƴ��[�_��)
                now=now/10;//�駹�֡A�Ʀr�N�ܤp
            }
            a[total]++;//�έp���G�h1��total���[�_�Ӫ���total���ӥ�
            if(a[total]>max_count)max_count=a[total];//max_count��̦h����
        }
        int ans=0;//�̫�䵪�ץX��
        for (int i=0;i<100;i++){
            if(a[i]==max_count) ans++;//�N�h�@�ӳ̤j��
        }
        return ans;
    }
};
