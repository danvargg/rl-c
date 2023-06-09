// First program

#include <stdio.h>
#include <ctype.h>

int main() {
    int age = 30;
    int a = 0;
    char x, y, z;
    char password[] = "spatula";
    char k = 'b';

    while (a < 20) {
        printf("%d\n", a);
        a++;
    }

    for (a = 0; a < 10; a++) {
        printf("%d\n", a);
        for (int b = 0; b < 10; b++) {
            printf("%d\n", b);
        }
    }

    puts("Wait, what?");
    printf("More %d %d\n", 27, age + 1);
    printf("String: %c %s", 'C', "what");
    printf("Char: %c %c %c\n", toupper('a'), 'b', 'c');
    printf("The password is %s\n", password);

    if (a >= 10) {
        printf("%d", a);
    } else if (a < 10) {
        printf("%d\n", a);
    } else {
        printf("Wrong!");
    }

    switch (k) {
        case 'a':
            printf("A\n");
            break;
        case 'b':
            printf("B\n");
            break;
        default:
            printf("C\n");
    }

    return 0;
}