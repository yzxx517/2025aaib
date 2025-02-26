#week02-03.py �gLeetCode
#LeetCode 1. Two Sum
#���@��Ʀr nums �̭�����Ӭۥ[,�Otarget
#nums[i] + nums[j] == target ��� i �M j �ϱo�[�_�ӬO target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {} # ���@�ӽc�l,�̭���X�{�L���Ʀr
        # �ڭ̷Q�n��X target �o�ӥ[�`

        for i,num in enumerate(nums):
            other = target- num #�@�t�~�@�ӭ��n���ƥi�H��Xtaget��(target-num)
            if other in box: #�@�b�c�l��,���t�~�@�ӭ��n����
                return [ box[other], i] #�@��쵪��
            else: # �p�G�S���X�L���Ʀr���
                box[num] = i #�N��{�b���Ʀr num , ��� box �̭�
