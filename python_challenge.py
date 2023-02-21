
def find_max(nums):
    """Find the max number in a list of numbers."""
    max_num = float('-inf')
    for num in nums:
        if num > max_num:
            max_num = num            
    return max_num

def find_min(nums):
    """Find the min number in a list of numbers."""
    min_num = float('inf')
    for num in nums:
        if num < min_num:
            min_num = num            
    return min_num

def find_average(nums):
    """Find the average of a list of numbers."""
    total = 0
    for num in nums:
        total += num
    return total / len(nums)

def main():
    """Test all the functions."""
    nums = [1, 2, 3, 4, 5]
    print(find_max(nums))
    print(find_min(nums))
    print(find_average(nums))
    
if __name__ == '__main__':
    main()
