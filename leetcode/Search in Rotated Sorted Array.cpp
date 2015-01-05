/**
title: Search in Rotated Sorted Array

Suppose a sorted array is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.
 */

class Solution {
public:
    int search(int A[], int n, int target) {
        int start = 0;
        int end = n-1;

        // 二分法
        while (start <= end)
        {
            int mid = (start + end) / 2;

            if (A[mid] == target)
                return mid;

            if (A[start] <= A[mid]) // start -> mid 有序
            {
                if (A[start] <= target && target < A[mid])  // 如果在 start -> mid 这一部分
                    end = mid - 1;
                else    // 如果不在 start -> mid 这一部分
                    start = mid + 1;
            }
            else    // mid -> end 有序
            {
                if (A[mid] < target && target <= A[end])    // 如果在 mid -> end 这一部分
                    start = mid + 1;
                else    // 如果不在 mid -> end 这一部分
                    end = mid - 1;
            }
        }

        return -1;
    }
};