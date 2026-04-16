#include<stdio.h>

int isprime(int low, int high)
{
    int flag, idx=0;
    int arr[100];

    for(int i=low; i<=high; i++){
        if(i<=1)
            continue;
        flag = 0;
        for(int j=2; j*j<=i; j++){
            if(i%j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
                //printf("%d ", i);
            arr[idx++]=i;
        }
    }

    //print all prime numbers in range.
    printf("The prime series: ");
    for(int i=0;i<idx;i++){
        printf("%d ", arr[i]);
    }

    //find kth prime number
    int k;
    printf("Enter the kth number for prime: ");
    scanf("%d", &k);
    printf("%d\n", arr[k-1]);
}

int main()
{
    int low, high;

    printf("Enter lower and upper limits: ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);
    isprime(low, high);



return 0;
}







