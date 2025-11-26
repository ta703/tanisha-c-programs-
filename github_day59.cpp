//Q109 Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Invalid: k is larger than array size");
        return 0;
    }

    int currSum = 0, maxSum;

    for (int i = 0; i < k; i++)
        currSum += arr[i];

    maxSum = currSum;

    for (int i = k; i < n; i++) {
        currSum += arr[i] - arr[i - k];
        if (currSum > maxSum)
            maxSum = currSum;
    }

    printf("Maximum sum of subarray of size %d = %d", k, maxSum);

    return 0;
}

