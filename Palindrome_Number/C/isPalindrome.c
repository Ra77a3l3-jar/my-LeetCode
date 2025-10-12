#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;

    int temp = x;
    long long reverse = 0; // will contain the reversed number

    while(temp > 0) {
        int digit = temp % 10; // extracts the last digit from temp
        reverse = reverse * 10 + digit; // adds digit to reverse shifting the old ones to the left
        temp /= 10; // removes last digit from temp
    }
    return reverse == x;
}

int main(void) {

    bool result = isPalindrome(121);
    if(result) {
        printf("True.\n");
    } else {
        printf("False.\n");
    }

    return 0;
}
