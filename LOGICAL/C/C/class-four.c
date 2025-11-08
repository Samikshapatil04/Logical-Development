#include<stdio.h>

int area(){
    int radius;
    float area;

    printf("Enter the radius of circle:");
    scanf("%d",&radius);

    area = 3.14 * radius * radius;
    return area;
}

int main(){
    float a = area();
    printf("Area of circle is: %f",a);
}


// 10-oct-25