#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int lenght = strlen(s);

    if(lenght % 2 != 0) {
        return false;
    }

    char stack[256];
    int topStack = -1;
    int i = 0;
    
    while(s[i] != '\n') {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            topStack += 1;
            stack[topStack] = s[i];
            // If the found a opening bracket, it added to the top of the stack
        } else {
            if(topStack == -1) {
                return false;
            }

            // Checks if the matching gave a negative result
            if ((s[i] == ')' && stack[topStack] != '(') ||
                (s[i] == ']' && stack[topStack] != '[') ||
                (s[i] == '}' && stack[topStack] != '{')) {
                return false;
            }
            topStack -= 1; // Popping the top char in case of a match
        }
    }
    return topStack == -1; // Since if top stack is != -1 means there are still unmatched pairs
}

int main(void) {

    char parentheses[6] = "({[]})";
    bool result = isValid(parentheses);

    if(result) {
        printf("The parentheses are valid.\n");
    } else {
        printf("The parentheses are not valid.\n");
    }

    return 0;
}
 
