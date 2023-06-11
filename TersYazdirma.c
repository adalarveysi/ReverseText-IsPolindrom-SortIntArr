#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void ReverseText(char* text) {
    int length = strlen(text);
    int i, k;
    char temp;
    
    for (i = 0, k= length - 1; i < k; i++, k--) {
        temp = text[i];
        text[i] = text[k];
        text[k] = temp;
    }
}

int main() {
    char text[100];
    
    printf("Metni girin: ");
    fgets(text, sizeof(text), stdin);
    
    // fgets, metni sonlandýran bir '\n' karakteri alýr,
    // bu nedenle '\n' karakterini kaldýrmamýz gerekiyor.
    text[strcspn(text, "\n")] = '\0';
    
    ReverseText(text);
    
    printf("Tersine çevrilen metin: %s\n", text);
    
    return 0;
}
