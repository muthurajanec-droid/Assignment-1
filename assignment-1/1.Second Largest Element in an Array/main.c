/******************************************************************************
QUESTION NUMBER : 1

   Program   : Second Largest Element in an Array
   Purpose   : To Find the Second Largest Element Without Sorting
   Input     : Array Size and Array Elements
   Output    : Second Largest Element
   
*******************************************************************************/

#include <stdio.h>
int secondLargest(int arr[], int size)
{
    int largest, second, i;

    largest = arr[0];
    second = arr[1];

    if (second > largest)
    {
        int temp = largest;
        largest = second;
        second = temp;
    }

    // Find the largest and second largest
    for (i = 2; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;  // Previous largest becomes second
            largest = arr[i];  // Update largest
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];   // Update second largest
        }
    }

    return second;  // Return second largest element
}

int main()
{
    int arr[100], size, i;

    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter array elements: ");
    for (i = 0; i < size; i++)         // Loop
    {
        scanf("%d", &arr[i]);
    }

    printf("Second largest element = %d\n",
           secondLargest(arr, size));

    return 0;
}

