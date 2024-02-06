nums = list(map(int, input().split()))

def uni(nums):
    unique_list = []
    for num in nums:
        if num not in unique_list:
            unique_list.append(num)
    return unique_list

new_list = uni(nums)
print(new_list)
