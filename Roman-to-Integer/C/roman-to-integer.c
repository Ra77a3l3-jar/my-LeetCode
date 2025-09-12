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

int romanToInt(char *s) {
    int tot = 0;

    int lenght = (int)strlen(s);
    if(lenght < 0 || lenght > 15) {
        return 0;
    }
    
    for(int i = 0; i < lenght; i++) {
        int curr = getValue(s[i]);
        int next = (i + 1 < lenght) ? getValue(s[i + 1]) : 0;
        if(curr < next) {
            tot += next - curr;
            i += 1;
        } else {
            tot += curr;
        }
    }
    return tot;
}

int main(void) {
    char *roman = "MCMXCIV";
    int arabic = romanToInt(roman);

    char *roman0 = "CDIV";
    int arabic0 = romanToInt(roman0);

    char *roman1 = "III";
    int arabic1 = romanToInt(roman1);
    return 0;
}
