##week04-1.py 二合一 py for迴圈版本
#leetcode 2579.count total number of colored cells
class Solution:
    def coloredCells(self, n: int) -> int:
        ans=0 #迴圈前面，ans先清空
        for i in range(1, n*2, 2):#py的for迴圈
            ans += i#把這些1，3，5，7的數，加入ans
        for i in range(1, n*2-1,2):
            ans += i#把這些1，3，5，的數，加入ans
        return ans
