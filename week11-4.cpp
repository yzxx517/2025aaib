//week11-4.cpp
//LeetCode 1295. Find Numbers with Even Number of Digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0; //�j��e�� ans �O 0
        for(int i=0;i<nums.size();i++){
            int now = nums[i]; //�{�b�n�B�znims[i]
            // Q:�p�󪾹D nums[i]�O�X���?
            int digits = 0; //���X��ƪ�?
            while(now>0){//�ΤW�g�йL,���ѤS�g2-3����֪k��
                digits++; //�@��Ƥ@�U�A��F�X��
                now = now / 10; //�Ʀr�V��V�p
            }
            if(digits%2==0)ans++;//�j���,���ƪ���Ʈ�, ans++
        }
        return ans; //�j��᭱ans���ӥ�
    }
};
