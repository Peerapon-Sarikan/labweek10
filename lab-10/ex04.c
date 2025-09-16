#include <stdio.h>
#include <ctype.h>  
int countVowels(const char str[]);
int main() {
char str[100];
    printf("Input: ");
    fgets(str, sizeof(str), stdin); 
    int vowelCount = countVowels(str);
    printf("Output: Number of vowels: %d\n", vowelCount);
return 0;
}
int countVowels(const char str[]) 
{
    int count = 0;
    char ch;

    for (int i = 0; str[i] != '\0'; i++) {
        ch = tolower(str[i]);  
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
        {
            count++;
        }
    }
return count;
}

