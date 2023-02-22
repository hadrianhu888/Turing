"""summary_line

Keyword arguments:
argument -- description
Return: return_description
"""

# Description: This program will take a list of numbers and return the max, min, average, median, and mode.

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

def find_median(nums):
    """Finds the median of a list of numbers."""
    for num in nums: 
        if len(nums) % 2 == 0:
            return (nums[len(nums) // 2] + nums[len(nums) // 2 - 1]) / 2
        else:
            return nums[len(nums) // 2]
        
def find_mode(nums):
    """Finds the mode of a list of numbers."""
    counts = {}
    for num in nums:
        if num in counts:
            counts[num] += 1
        else:
            counts[num] = 1
    max_count = 0
    mode = None
    for num, count in counts.items():
        if count > max_count:
            max_count = count
            mode = num
    return mode

def main():
    """Test all the functions."""
    nums = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    print (find_max(nums))
    print (find_min(nums))
    print (find_average(nums))
    print (find_median(nums))
    print (find_mode(nums))
    
if __name__ == '__main__':
    main()
