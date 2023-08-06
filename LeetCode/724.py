nums = list(map(int,input().split()))
left_sum = 0
right_sum = sum(nums)-nums[0]
if left_sum == right_sum:
    print(0)
for i in range(1,len(nums)-1):
    left_sum += nums[i-1]
    right_sum -= nums[i]
    if left_sum == right_sum:
        print(i)
if sum(nums)-nums[-1] ==0:
    print(len(nums)-1)
print("-1")

# class Solution:
#     def pivotIndex(self, nums: List[int]) -> int:
#         left_sum = 0
#         right_sum = sum(nums)-nums[0]
#         if left_sum == right_sum:
#             return(0)
#         for i in range(1,len(nums)-1):
#             left_sum += nums[i-1]
#             right_sum -= nums[i]
#             if left_sum == right_sum:
#                 return(i)
#         if sum(nums)-nums[-1] ==0:
#             return(len(nums)-1)
#         return("-1")