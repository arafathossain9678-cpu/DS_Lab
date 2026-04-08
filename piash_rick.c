#include<stdio.h>

int findRick(int students, int rick_type) //this is the function for Calculating RICKSHAW NUMBER.
{
    int capacity;
    if(rick_type==1)
    {
        capacity = 2;
    }
    else if(rick_type==2)
    {
        capacity = 4;
    }

    int rickshaw = students/capacity;

    if(students%capacity != 0) rickshaw++;

    return rickshaw;
}

int main()
{
    int students, rick_type, rick_num;
    scanf("%d %d", &students, &rick_type);
    rick_num = findRick(students, rick_type);


    printf("rickshaw number is: %d",rick_num);

}

// sample input : 10 2 ; output: 3
