// Temperature Range Checker

#include<stdio.h>
int main(){
    int temp;
    printf("Enter the temperature: ");
    scanf("%d", &temp);
    (temp>=40)?printf("Very Hot\n"):(temp>=30)?printf("VShow Hot\n"):(temp>=20)?printf("Show Warm\n"):(temp>10 )?printf("Show Cool\n"):(temp>0)?printf("Cold\n"):printf("Freezing\n");
    return 0;

}