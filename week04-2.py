#week04-2.py�@�O���Ѫ� LeetCode�@�D���D Easy �D �G�X�@
#LeetCode 2529. maximumCount Count of positive Integer and Negative Integer
#��X�X�ӥ��ơ@���X�ӭt�ơ@�j�����Ӽƶq�^��
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos = 0
        neg = 0  #�j��e���A���O0
        for i in range(len(nums)):  #�j��� ��s��
            if nums[i] > 0 : pos += 1
            if nums[i] < 0 : neg += 1
        #�j��᭱,�⵪�׮��ӥ�
        return max(pos, neg)
