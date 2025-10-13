#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {

    int startIndx = -1;

    int lenHayst = strlen(haystack);
    int lenNeed = strlen(needle);

    // Edge case: empty needle
    if (lenNeed == 0) return 0;

    // Only need to check up to lenHayst - lenNeed
    for (int i = 0; i <= lenHayst - lenNeed; i++) {
        int j;
        for (j = 0; j < lenNeed; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == lenNeed) {
            return i; // Found match
        }
    }
    return -1; // No match found
}

int main(void) {

    char haystack[256] = "aleetcode";
    char needle[20] = "lee";
    
    int index = strStr(haystack, needle);
    if(index == -1) {
        printf("The needle is not present in the haystack\n");
    } else if(index > -1) {
        printf("The needle is present and starts at index %d\n", index);
    }

    return 0;
}
