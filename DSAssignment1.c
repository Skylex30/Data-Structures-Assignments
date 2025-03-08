/*A C program that calculate the average of marks got by a student in three subjects, Physics,
Math, Chemistry assuming for each subject, four different tests were conducted;
assignment, coursework, mid term and end of term exams*/

#include <stdio.h>
int main(){
    // Declare variables, We can declare these subjects marks as variables at once as follows:
    // We are going to use the float data type because our average mark may be a float.
    float Math[4], Physics[4], Chemistry[4];
    float PhysicsTotal = 0, MathTotal = 0, ChemistryTotal = 0;
    float PhysicsAverage, MathAverage, ChemistryAverage;

    // Let's now obtain the marks for each subject

 // Math
    printf("Enter marks for Math in the order of Assignment, Coursework, Midterm and End of term : ");
    for (int i = 0; i<4; i++){
        scanf("%f", &Math[i]);
        MathTotal += Math[i];
    }

    // Physics
    printf("Enter marks for Physics in the order of Assignment, Coursework, Midterm and End of term : ");
    for (int i = 0; i<4; i++){
        scanf("%f", &Physics[i]);
        PhysicsTotal += Physics[i];
    }

    // Chemistry
    printf("Enter marks for Chemistry in the order of Assignment, Coursework, Midterm and End of term : ");
    for (int i = 0; i<4; i++){
        scanf("%f", &Chemistry[i]);
        ChemistryTotal += Chemistry[i];
    }

    // Now let's calculate the average marks for each subject
    MathAverage = MathTotal / 4;// 4 because we have 4 tests
    PhysicsAverage = PhysicsTotal / 4;  
    ChemistryAverage = ChemistryTotal / 4;

    // Now let's print the average marks for each subject
    printf("Average marks:\n");
    printf("Math: %.2f\n", MathAverage);
    printf("Physics: %.2f\n", PhysicsAverage);
    printf("Chemistry: %.2f\n", ChemistryAverage);  

    return 0;
}