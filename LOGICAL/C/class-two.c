// data type is compulsory
int num = 10;
int sum(int number){
    number = number + 10;
    return number;
}

int sub(int ayush)
{
    return ayush-10;
}
int main(){
    printf("%d", sum(num));
    printf("\n%d", sub(num));
}