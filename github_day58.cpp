//Q108 Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int nums[n], ans[n], prefix[n], suffix[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    prefix[0] = 1;
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] * nums[i - 1];

    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
        suffix[i] = suffix[i + 1] * nums[i + 1];

    for (int i = 0; i < n; i++)
        ans[i] = prefix[i] * suffix[i];

    printf("Answer: ");
    for (int i = 0; i < n; i++)
        printf("%d ", ans[i]);

    return 0;
}

