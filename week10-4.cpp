//week10-4 挑戰題
//leetcode 1399.count largest group
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count=0;
        int a[100]={};
        for(int i=1;i<=n;i++) {//人類的for迴圈從1...n
            int total=0,now=i;//加起來的結果叫total 現在的數now
            while(now>0){//剝皮法，如果now還有剩，繼續撥
                total+=now%10;//把皮加起來(每一位數都加起來)
                now=now/10;//剝完皮，數字就變小
            }
            a[total]++;//統計結果多1個total的加起來的值total拿來用
            if(a[total]>max_count)max_count=a[total];//max_count放最多的數
        }
        int ans=0;//最後找答案出來
        for (int i=0;i<100;i++){
            if(a[i]==max_count) ans++;//就多一個最大的
        }
        return ans;
    }
};
