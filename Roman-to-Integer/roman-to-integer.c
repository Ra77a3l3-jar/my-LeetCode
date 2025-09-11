#include <stdio.h>
#include <string.h>

int getValue(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int Roman_to_int(char *s) {
    int repete = 0;
    int tot = 0;

    int len = strlen(s);
    
    for(int i = 0; i < len; i++) {
        if(s[i] == s[i + 1]) {
            repete += 1;
        } else {
            repete = 0;
        }
        if(repete >= 4) {
            printf("The number is incorrect, a number can repete max 3 times.\n");
            return 0;
        }
        if((s[i] == 'L') && (s[i + 1] == 'L') ||
            (s[i] == 'D') && (s[i + 1] == 'D') ||
            (s[i] == 'V') && (s[i + 1] == 'V')) {
            printf("The 'L' 'D' and 'V' cannnot repete.\n");
            return 0;
        }
        if(getValue(s[i]) < getValue(s[i + 1])) {
            tot += getValue(s[i + 1]) - getValue(s[i]);
            i += 2;
        } else {
            tot += getValue(s[i]);
            i += 1;
        }
    }
    return tot;
}

int main(void) {
    char *roman = "CDIV";
    int arabic = Roman_to_int(roman);
    printf("The number %s in arabic numbers is %d.\n", roman, arabic);
    return 0;
}
