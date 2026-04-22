#include <stdio.h>

int main() {
    int arr[100], visited[100];
    int n, i, j, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    for (i = 0; i < n; i++) {

        if (visited[i] == 1) {
            continue;
        }

        for (j = i + 1; j < n; j++) {

            if (arr[i] == arr[j]) {
                count++;

                visited[j] = 1;
            }
        }
    }

    printf("Total number of duplicate elements found: %d\n", count);

    return 0;
}
