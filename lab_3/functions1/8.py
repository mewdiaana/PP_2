# Write a function that takes in a list of integers and returns True if it contains 007 in order

nums = list(map(int, input().split()))

def spy_game(nums):
    for x in range(len(nums) - 1):
        if nums[x] ==  nums[x + 1] == 0 and nums[x + 2] == 7:
            return True
    return False

result = spy_game(nums)
print(result)
