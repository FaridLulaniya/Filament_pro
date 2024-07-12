#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_SIZE 100

void countFrequency(char *str) {
    int frequency[26] = {0}; // Array to store frequency of each letter (assuming case insensitive)

    // Iterate through the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert character to lowercase

        // Check if character is a letter
        if (isalpha(ch)) {
            frequency[ch - 'a']++; // Increment frequency for the corresponding letter
        }
    }

    // Print frequencies
    printf("Frequency of each letter:\n");
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            printf("%c => %d\n", 'a' + i, frequency[i]);
        }
    }
}

int main() {
    char str[MAX_SIZE];

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    countFrequency(str);

    return 0;
}
