#include<stdio.h>

int main(){
    int n, target;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    //linear_search(arr, target);
    int flag = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("Found, index number is %d", i);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("Target Not Found, %d", target);

return 0;
}
