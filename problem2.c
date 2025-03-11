#include <stdio.h>

/**
* My_strlen - Function to calculate the length of a string
*/
int my_strlen(const char *str)
{
    int count=0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

/**
* Reverse_string - Function to reverse the string
*/

void reverse_string(char *str)
{
    int length = my_strlen(str); //string length
    int i = 0; //indice at the start of the string
    int j = length - 1; //and another at the end 
    char temp; 
 
    // Switch the characters at the beginning and the end
    while(i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main(void)
{
    char test1[] = "edoc fo esuoH oT emocleW";
    char test2[] = "uoy pleh lliw ti ;3 melborp ni noitcnuf siht esU";
    char test3[] = "Hello World";
    char test4[] = "G";

    printf("Before: %s\n", test1);
    reverse_string(test1);
    printf("After: %s\n\n", test1);

    printf("Before: %s\n", test2);
    reverse_string(test2);
    printf("After: %s\n\n", test2);

    printf("Before: %s\n", test3);
    reverse_string(test3);
    printf("After: %s\n\n", test3);

    printf("Before: %s\n", test4);
    reverse_string(test4);
    printf("After: %s\n\n", test4);

    return 0;
}