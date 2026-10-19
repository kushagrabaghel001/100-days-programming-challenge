// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main() {
    int m, n, i, j, k;

    scanf("%d", &m);
    int nums1[m];
    for (i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    scanf("%d", &n);
    int nums2[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }
    int nums3[m + n];
    i = j = k = 0;

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            nums3[k++] = nums1[i++];
        } else {
            nums3[k++] = nums2[j++];
        }
    }

    while (i < m) {
        nums3[k++] = nums1[i++];
    }
    while (j < n) {
        nums3[k++] = nums2[j++];
    }


    for (i = 0; i < m + n; i++) {
        printf("%d ", nums3[i]);
    }
    printf("\n");

    return 0;
}
