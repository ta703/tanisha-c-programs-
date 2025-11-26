//Q110 Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

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

    int deque[n];  
    int front = 0, rear = -1;

    for (int i = 0; i < k; i++) {
        while (front <= rear && arr[deque[rear]] <= arr[i])
            rear--;
        deque[++rear] = i;
    }

    for (int i = k; i < n; i++) {
        printf("%d ", arr[deque[front]]);

        while (front <= rear && deque[front] <= i - k)
            front++;

        while (front <= rear && arr[deque[rear]] <= arr[i])
            rear--;

        deque[++rear] = i;
    }

    printf("%d", arr[deque[front]]);

    return 0;
}

