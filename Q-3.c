//Q.3 Write a Program to find square of each element from the given array.

#include<stdio.h>

int main() 
{
    int n, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Square of each element:\n");
    for (i = 0; i < n; i++) 
	{
        int square = arr[i] * arr[i];
        printf("%d ", square);
    }
}
