#include<stdio.h>
#include<string.h>
void numberToRoman(int number, char input[1]){
    int nums[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char roman[13][3]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    char output[10] = "";
    
    for(int i=0;i<13;i++){
        int value = number / nums[i];
        for(int j=0;j<value;j++){
            if(strcmp(input, roman[i]) == 0) {
                strcat(output, roman[i]);
            }
            else{
                printf("%s",roman[i]);
            }
        }
        number = number % nums[i];
    }
    return output;
}
int a = 10;
int main(){

    char input[16];
    printf("Enter a Roman Number: ");
    scanf("%s", input);

    for (int number = 1; number <= 100; number++){
        numberToRoman(number);
        printf("\n");
    }
    printf("\n");
    return 0;   
}
