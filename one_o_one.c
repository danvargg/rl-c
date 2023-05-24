// First program

#include <stdio.h>

int main() {
    int age = 30;
    int a = 8;
    char x, y, z;
    char password[] = "spatula";
    char k = 'b';

    puts("Wait, what?");
    printf("More %d %d\n", 27, age + 1);
    printf("String: %c %s", 'C', "what");
    printf("Char: %c %c %c\n", 'a', 'b', 'c');
    printf("The password is %s\n", password);

    if (a >= 10) {
        printf("%d", a);
    } else if (a < 10) {
        printf("%d\n", a);
    } else {
        printf("Wrong!");
    }

    switch(k) {
        case 'a':
            printf("A\n");
            break;
        case 'b':
            printf("B\n");
            break;
        default:
            printf("C\n");
    }

    return (0);
}