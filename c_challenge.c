/**
 * @file c_challenge.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <assert.h>
#include <string.h>
#include <ctype.h> 

int find_max(int nums[], int size);
int find_min(int nums[], int size);
double find_average(int nums[], int size);
int find_mode(int nums[], int size);
int find_median(int nums[], int size);
int main(int argc, char const *argv[]); 

int find_min(int nums[], int size)
{
    int min = nums[0];
    for (int i = 1; i < size; i++)
    {
        if (nums[i] < min)
        {
            min = nums[i];
        }
    }
    return min;
}

int find_max(int nums[], int size)
{
    int max = nums[0];
    for (int i = 1; i < size; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
    return max;
}

double find_average(int nums[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += nums[i];
    }
    return (double)sum / size;
}

int find_mode(int nums[], int size)
{
    int max_count = 0;
    int mode = 0;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (nums[j] == nums[i])
            {
                count++;
            }
        }
        if (count > max_count)
        {
            max_count = count;
            mode = nums[i];
        }
    }
    return mode;
}

int find_median(int nums[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] > nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    if (size % 2 == 0)
    {
        return (nums[size / 2] + nums[size / 2 - 1]) / 2;
    }
    else
    {
        return nums[size / 2];
    }
}

int main(int argc, char const *argv[])
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(nums) / sizeof(nums[0]);
    int max = find_max(nums, size);
    int min = find_min(nums, size);
    double average = find_average(nums, size);
    int mode = find_mode(nums, size);
    int median = find_median(nums, size);
    printf("The max is %d\n", max);
    printf("The min is %d\n", min);
    printf("The average is %f\n", average);
    printf("The mode is %d\n", mode);  
    printf("The median is %d\n", median);
    return 0;
}

