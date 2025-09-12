#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int lenght = strlen(s);

    if(lenght % 2 != 0) {
        return false;
    }

    
    return true;
}

int main(void) {

    char parentheses[6] = "({[]})";
    isValid(parentheses);

    return 0;
}
 
