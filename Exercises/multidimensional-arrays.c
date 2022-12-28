// When initializing multidimensional arrays, rows come first, and then columns second
// Example: int a[4][2]; has 4 rows and 2 columns.


/*
Exercise:
Let us try to find out the average marks of a group of five students for two subjects, Mathematics and Physics. To do this, we use a two-dimensional array called grades. The marks corresponding to Mathematics would be stored in the first row (grades[0]), whereas those corresponding to Physics would be stored in the second row (grades[1]). Complete the following steps so that you can execute this program.

- Declare grades as a two-dimensional array of integers
- Complete the for loops by specifying their terminating conditions
- Compute the average marks obtained in each subject

*/

#include <stdio.h>

int main() {
    // TODO: Declare grades as a two-dimensional array of integers
    int grades[2][5];
    float average;
    int i;
    int j;

    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

    /* TODO: complete the for loop with appropriate terminating conditions */
    for (i = 0; i < ; i++) {
        average = 0;
        for (j = 0; j < ; j++) {
            average += grades[i][j];
        }

        /* TODO: compute the average marks for subject i */
        printf("The average marks obtained in subject %d is: %.2f\n", i, average);
    }

    return 0;
}

// Solution:
	#include <stdio.h>

	int main() {
		int grades[2][5];
		float average;
		int i;
		int j;

		grades[0][0] = 80;
		grades[0][1] = 70;
		grades[0][2] = 65;
		grades[0][3] = 89;
		grades[0][4] = 90;

		grades[1][0] = 85;
		grades[1][1] = 80;
		grades[1][2] = 80;
		grades[1][3] = 82;
		grades[1][4] = 87;

		for (i = 0; i < 2; i++) {
			average = 0;
			
			for (j = 0; j < 5; j++) {
				average += grades[i][j];
			}

			average /= 5.0;
			printf("The average marks obtained in subject %d is: %.2f\n", i, average);
		}

		return 0;
	}