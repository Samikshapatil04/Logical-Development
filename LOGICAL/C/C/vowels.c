
// #include <stdio.h>
// int main()
// {
//     char str;
//     printf("Enter an alphabet: ");
//     scanf("%c", str);

//     if (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u' ||
//         str == 'A' || str == 'E' || str == 'I' || str == 'O' || str == 'U')
//     {
//         printf("%c is a Vowel.\n", str);
//     }
//     else
//     {
//         printf("%c is a Consonant.\n", str);
//     }

//     return 0;
// }

// using ternary operator
#include <stdio.h>
int main()
{
    char str;
    printf("Enter an alphabet: ");
    scanf("%c", &str);
    int mad = str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u' ||
              str == 'A' || str == 'E' || str == 'I' || str == 'O' || str == 'U';
    (mad) ? printf("%c is a Vowel.\n", str) : printf("%c is a Consonant.\n", str);

    return 0;
}