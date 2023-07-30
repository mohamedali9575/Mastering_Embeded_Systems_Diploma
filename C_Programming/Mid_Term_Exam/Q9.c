#include <stdio.h>
#include <string.h>

void word_reverser(char arr[], int len) {
    static int i = 0;
    int end, begin = i;

    if (i < len) {
        do {
            i++;
        } while (arr[i] != ' ' && arr[i] != '\0'); // Handle case when string ends with space

        end = i;

        word_reverser(arr, len);
    }

    // Print the reversed word
    for (; begin < end; begin++) {
        printf("%c", arr[begin]);
    }
    printf(" ");
}

int main() {
    char full_name[200];
    gets(full_name);

    printf("String after reverse is: ");
    word_reverser(full_name, strlen(full_name));

    return 0;
}
