#include <stdio.h>
int main()
{
    int arr[100], n, i, search, low, high, mid;

    printf(" Enter number of elements: ");
    scanf(" %d", &n);

    printf(" Enter %d sorted elements: \n", n);
    for(i = 0; i < n; i++)
        scanf(" %d", & arr[i]);

    printf(" Enter element to search: ");
    scanf(" %d", & search);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == search)
        {
            printf(" %d found at position %d\n", search, mid + 1);
            return 0;
        }
        else if(arr[mid] < search)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf(" %d not found in the array.\n", search);
    return 0;
}
