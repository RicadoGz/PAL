#include <stdio.h>

int main() {
    double num = 5.75;
    int intNum;

    // Casting double to int (explicit casting)
    intNum = (int)num;

    printf("Original double: %f\n", num);
    printf("After casting to int: %d\n", intNum);

    return 0;
}