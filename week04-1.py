##week04-1.py �G�X�@ py for�j�骩��
#leetcode 2579.count total number of colored cells
class Solution:
    def coloredCells(self, n: int) -> int:
        ans=0 #�j��e���Aans���M��
        for i in range(1, n*2, 2):#py��for�j��
            ans += i#��o��1�A3�A5�A7���ơA�[�Jans
        for i in range(1, n*2-1,2):
            ans += i#��o��1�A3�A5�A���ơA�[�Jans
        return ans
