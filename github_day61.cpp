//Q111 Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

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

    int q[n], front = 0, rear = -1;

    for (int i = 0; i < k; i++) {
        if (arr[i] < 0)
            q[++rear] = i;
    }

    for (int i = k; i < n; i++) {

        if (front <= rear)
            printf("%d ", arr[q[front]]);
        else
            printf("0 ");

        while (front <= rear && q[front] <= i - k)
            front++;

        if (arr[i] < 0)
            q[++rear] = i;
    }

    if (front <= rear)
        printf("%d", arr[q[front]]);
    else
        printf("0");

    return 0;
}

