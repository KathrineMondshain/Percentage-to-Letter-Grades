#include <stdio.h>//This line includes the standard library

int main (void)//This line creates the function main
{//This line marks the beginning of main
    float score = 0.0f;//This creates the float 'score'. This will be where the score is stored eachtime the user inputs it.
    int A_total = 0;//This creates the integer 'A_total' which will count the total of A's
    int B_total = 0;//This creates the integer 'B_total' which will count the total of B's
    int C_total = 0;//This creates the integer 'C_total' which will count the total of C's
    int D_total = 0;//This creates the integer 'D_total' which will count the total of D's
    int F_total = 0;//This creates the integer 'F_total' which will count the total of F's

    while (score >= 0){//This line starts the while loop which will allow the user to enter a score until they enter a negative number
        printf("Score? ");//This line asks the user for a score
        scanf("%f", &score);//This line scans for the score
        if (score >= 80){//If the score is equal to or more than 80% the program will:
            printf("\tThe grade is an A\n");//1.Print that the grade is A
            A_total = A_total + 1;//2.Add one to the total number of A's
        }//This ends the if statement
        else if (score >= 70){//If the score is not 80 or more but is 70 or more (but not more than 80) the program will:
            printf("\tThe grade is a B\n");//1.Print that the grade is B
            B_total = B_total + 1;//2.Add one to the total number of B's
        }//This ends the if else statement
        else if (score >= 60){//If the score is not 70 or more but is 60 or more (but not more than 70) the program will:
            printf("\tThe grade is a C\n");//1.Print that the grade is C
            C_total = C_total + 1;//2.Add one to the total number of C's
        }//This ends the if else statement
        else if (score >= 50){//If the score is not 60 or more but is 50 or more (but not more than 60) the program will:
            printf("\tThe grade is a D\n");//1.Print that the grade is D
            D_total = D_total + 1;//2.Add one to the total number of D's
        }//This ends the if else statement
        else if (score < 50 && score >= 0){//If the score is not 50 or more but is still  between 0 and 50 the program will:
            printf("\tThe grade is an F\n");//1.Print that the grade is F
            F_total = F_total + 1;//2.Add one to the total number of F's
        }//This ends the if else statement
    }//This line ends the while loop if the user inputs a negative number
    printf("Summary:\nA's: %d\nB's: %d\nC's: %d\nD's: %d\nF's: %d\n\n",A_total,B_total,C_total,D_total,F_total);//This prints the summary with all the totals
}//This line marks the end of main
