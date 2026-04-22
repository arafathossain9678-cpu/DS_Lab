#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int max=arr[0];
    int second_max = arr[0];

    for(int i=1;i<n;i++){
        if(max<arr[i]){
            second_max = max;
            max = arr[i];
        }
    }

    printf("The max value is %d", max);
    printf("The second max value is %d", second_max);

}
