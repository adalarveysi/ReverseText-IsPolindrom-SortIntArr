#include <iostream>
#include <stdio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int IsPalindrome(const char* word) {
    int length = strlen(word);
    int i;

    for (i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            return 0;  // Palindrom deðil
        }
    }

    return 1;  // Palindrom
}

int main() {
    char word[100];

    printf("Kelimeyi girin: ");
    scanf("%s", word);

    if (IsPalindrome(word)) {
        printf("%s, bir palindromdur.\n", word);
    } else {
        printf("%s, bir palindrom degildir.\n", word);
    }

    return 0;
}
