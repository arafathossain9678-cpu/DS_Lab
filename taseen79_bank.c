#include<stdio.h>
int main()
{
    int month, profit1, profit2;
    printf("User wants to cancel FDR in: ");
    scanf("%d", &month);
    if(month>12)
    {
        printf("Invalid month\n");
        printf("The number of month will be between 1-12");
        return 0;
    }

    if(month>6)
    {
        int interest1=109;
    profit1=((109*300000)/100)*6;
    }
    else
    {
        profit1=300000;
    }

    int interest2=112;
    profit2=((112*500000)/100)*6;
    long long int Profit=(profit1+profit2)-800000;
    printf("Profit: %lld", Profit);
}
// prepared by Taseen79 from Spring25
// Sample input: 8, Output: Profit 452000.
