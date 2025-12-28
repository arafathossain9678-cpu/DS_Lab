#include <stdio.h>

void swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}


int partition1(int A[], int BEG, int END)
{
    int LEFT = BEG;
    int RIGHT = END;
    int LOC = LEFT;
    int done = 0;
    while (!done)
    {
        while (A[LOC] <= A[RIGHT] && LOC != RIGHT)
        {
            RIGHT = RIGHT - 1;
        }
        if (LOC == RIGHT)
        {
            done = 1;
        }
        else if (A[LOC] > A[RIGHT])
        {
            swap(A, LOC, RIGHT);
            LOC = RIGHT;

            while (A[LOC] >= A[LEFT] && LOC != LEFT)
            {
                LEFT = LEFT + 1;
            }
            if (LOC == LEFT)
            {
                done = 1;
            }
            else if (A[LEFT] > A[LOC])
            {
                swap(A, LOC, LEFT);
                LOC = LEFT;
            }
        }
    }
    return LOC;
}


void swap2(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition2(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        // CHANGED: '>' for Descending Order
        if (arr[j] < pivot) {
            i++;
            swap2(&arr[i], &arr[j]);
        }
    }
    swap2(&arr[i + 1], &arr[high]);
    return (i + 1);
}


int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivot is the last element
    int i = (low - 1);     // Index of smaller element
    int j, temp;

    for (j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] > pivot) {
            i++;
            // Swap arr[i] and arr[j]
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Swap arr[i+1] and arr[high] (the pivot)
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1);
}

void quickSort(int A[], int BEG, int END)
{
    if (BEG < END)
    {
        int PIVOT = partition(A, BEG, END);
        quickSort(A, BEG, PIVOT - 1);
        quickSort(A, PIVOT + 1, END);
    }
}

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    int A[] = {25, 12, 64, 10, 22, 11, 90};
    int n = sizeof(A) / sizeof(A[0]);

    printf("Original array:\n");

    printArray(A, n);
    quickSort(A, 0, n - 1);
    // printf("sort done.\n");

    printf("Sorted array:\n");
    printArray(A, n);

    return 0;
}

/**

Sample Output:
Original array:
25 12 64 10 22 11 90

Sorted array:
10 11 12 22 25 64 90

**/
