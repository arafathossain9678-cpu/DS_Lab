#include<stdio.h>

int CalStandStd(int students, int shugondhaBus, int whiteBus) //this is the function for Calculating Standing Students
{
    int shugondhaBus_seat = 30;
    int whiteBus_seat = 18;

    int seat_num = shugondhaBus_seat*shugondhaBus + whiteBus_seat*whiteBus;

    int standing_students = students - seat_num;

    if(standing_students<=0)
    {
        standing_students = 0;
    }

    return standing_students;
}

int main()
{
    int students, shugondhaBus, whiteBus, standing_std;
    scanf("%d %d %d", &students, &shugondhaBus, &whiteBus);

    standing_std = CalStandStd(students, shugondhaBus, whiteBus);


    printf("Standing Students number is: %d",standing_std);

}

// sample input : 120 2 2 ; output: 24
