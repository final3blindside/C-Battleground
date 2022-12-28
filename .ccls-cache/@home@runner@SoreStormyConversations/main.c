#include <stdio.h>

int main(){
    int grades[3];
    int average;

    grades[0] = 80;
    grades[1] = 85;
    grades[2] = 90;

    average = (grades[1] + grades[0] + grades[2]) / 3;
    printf("The average of the three numbers is:  %d", average)
    return 0;

}

