#include <stdio.h>
int obtainedMarks;
int totalMarks;
int getGrade(int marks)
{
    if (marks >= 86 && marks <= 100)
    {
        printf("GRADE IS A ");
    }
    else if (marks >= 70 && marks <= 85)
    {
        printf("GRADE IS B+ ");
    }
    else if (marks >= 61 && marks <= 70)
    {
        printf("GRADE  IS B ");
    }
    else if (marks >= 45 && marks <= 60)
    {
        printf("GRADE  IS C ");
    }
    else if (marks >= 33 && marks <= 44)
    {
        printf("GRADE IS D ");
    }
    else
    {
        printf("FAIL");
    }
    return 0;
}
    int getPercentahge(int obtainedMarks, int totalMarks)
    {
        int marks = (obtainedMarks * 100) / totalMarks;
        printf("You get %d percent in the exam \ntotalMarks", marks);
        return marks;
    }
int main()
{
    printf("Enter obtained marks:");
    scanf("%d", &obtainedMarks); 

    printf("Enter total marks:");
    scanf("%d", &totalMarks); 

    int marks = (obtainedMarks * 100) / totalMarks;
    printf("Percentage: %d%%\n", marks);
    getGrade(marks);
    
}
