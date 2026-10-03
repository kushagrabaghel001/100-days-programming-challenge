// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.


#include <stdio.h>

int majorityElement(int nums[], int n) {
    int candidate = -1, count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }


    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int nums1[] = {3, 2, 3};
    int nums2[] = {2, 2, 1, 1, 1, 2, 2};
    int nums3[] = {2, 2, 1, 1, 1, 2, 2, 3};

    printf("Output 1: %d\n", majorityElement(nums1, 3));   
    printf("Output 2: %d\n", majorityElement(nums2, 7));
    printf("Output 3: %d\n", majorityElement(nums3, 8));   

    return 0;
}
