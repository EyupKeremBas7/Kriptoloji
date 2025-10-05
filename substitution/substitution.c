#include <stdio.h>

#define LEN 256  

int main(void) {
    char text[LEN];
    char cipher[LEN];

    // Normal ve substitution alfabe
    char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char subs[]   = "QWERTYUIOPASDFGHJKLZXCVBNM";  // kendi anahtarın

    printf("Sifrelemek istediginiz metni giriniz: ");
    fgets(text, LEN, stdin);

    // '\n' temizle
    int i = 0;
    while (text[i] != '\0') {
        if (text[i] == '\n') {
            text[i] = '\0';
            break;
        }
        i++;
    }

    // Substitution ile şifreleme
    i = 0;
    while (text[i] != '\0') {
        char ch = text[i];
        if (ch >= 'A' && ch <= 'Z') {
            // büyük harf
            int index = ch - 'A';
            cipher[i] = subs[index];
        } else if (ch >= 'a' && ch <= 'z') {
            // küçük harf
            int index = ch - 'a';
            char subsLower = subs[index] + 32; // küçük hale çevir
            cipher[i] = subsLower;
        } else {
            // harf değilse aynı bırak
            cipher[i] = ch;
        }
        i++;
    }
    cipher[i] = '\0';

    printf("Sifrelenmis metin: %s\n", cipher);

    return 0;
}
