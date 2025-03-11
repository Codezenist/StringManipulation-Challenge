#include <stdio.h>

/**
 * My_strlen - Function to calculate the length of a string
 */
int my_strlen(const char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

/**
 * Reverse_string - Function to reverse the entire string so that the words appear in the correct order
 */
void reverse_string(char *str) {
    int length = my_strlen(str);
    int i = 0, j = length - 1;
    char temp;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

/**
 * Reverse_words - Function to reverse the order of words in a string
 */
void reverse_words(char *str) {
    int len = my_strlen(str);
    
    // Step 1: Reverse the entire string
    reverse_string(str);

    // Step 2: Reverse each word individually
    int start = 0, end = 0;

    while (start < len) {
        // Skip leading spaces
        while (start < len && str[start] == ' ') {
            start++;
        }
        end = start;

        // Find the end of the word
        while (end < len && str[end] != ' ') {
            end++;
        }

        // Reverse the found word
        if (start < end) {
            int i = start, j = end - 1;
            char temp;
            while (i < j) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                i++;
                j--;
            }
        }
        
        start = end; //updating start to equal end 
    }
}

int main(void) {
    char test1[] = "The dragons are coming";
    char test2[] = "code love I";
    char test3[] = "G";

    printf("Before: \"%s\"\n", test1);
    reverse_words(test1);
    printf("After: \"%s\"\n\n", test1);

    printf("Before: \"%s\"\n", test2);
    reverse_words(test2);
    printf("After: \"%s\"\n\n", test2);

    printf("Before: \"%s\"\n", test3);
    reverse_words(test3);
    printf("After: \"%s\"\n\n", test3);

    return 0;
}
