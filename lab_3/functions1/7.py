#Given a list of ints, return True if the array contains a 3 next to a 3 somewhere.

nums = list(map(int, input().split()))

def has_33(nums):
    for x in range(len(nums) - 1):
        if nums[x] == nums[x + 1] == 3:
            return True
    return False

result = has_33(nums)
print(result)
