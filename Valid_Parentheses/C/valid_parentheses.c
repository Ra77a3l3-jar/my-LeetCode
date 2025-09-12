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
    
    while(s[i] != '\0') {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            topStack += 1;
            stack[topStack] = s[i];
            printf("Im adding to the stack [topStack]: %d and [i]: %d\n", topStack, i);
            // If the found is a opening bracket, it added to the top of the stack
        } else {
            printf("Topstack is: %d\n", topStack);
            if(topStack == -1) {
                printf("Stack is clean\n");
                return false;
            }

            // Checks if the matching gave a negative result
            if ((s[i] == ')' && stack[topStack] != '(') ||
                (s[i] == ']' && stack[topStack] != '[') ||
                (s[i] == '}' && stack[topStack] != '{')) {
                return false;
                printf("The bracket is %c at [%d] and the topStack is %c\n", s[i], i, stack[topStack]);
            }
            topStack -= 1; // Popping the top char in case of a match
            printf("Found a match popping stack[%d].\n", topStack);
        }
        i++;
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
 
