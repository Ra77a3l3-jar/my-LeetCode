#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    char* prefix = strs[0];

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        // Compare the current string with the prefix character by character
        // Stop if we reach the end of either string or find a mismatch
        while (prefix[j] != '\0' && strs[i][j] != '\0' && prefix[j] == strs[i][j]) {
            j++; // Go to next character if they match
        }

        /* At this point, `j` is the length of the common prefix between
           the current string and the prefix. Truncate the prefix here.
           If later strings have a shorter common prefix, this will shift left. */
        prefix[j] = '\0';
    }

    return prefix;
}

int main(void) {
    char* strs[] = {"flower", "flow", "flight"};
    int strsSize = sizeof(strs) / sizeof(strs[0]);

    char* result = longestCommonPrefix(strs, strsSize);
    printf("Longest Common Prefix: %s\n", result);

    return 0;
    
}
