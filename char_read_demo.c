/* This code is provided for use by students in CMPT 201 at MacEwan University.
 * Do not distribute or share this code outside the course.
 *
 * char_read_demo.c
 * Purpose: Reading characters using scanf() and getchar().
 * scanf() skips leading whitespace for most conversions, but not for %c.
 *
 * Created by Philip Mees
 */

#include <stdio.h>

int main(void) {
    int i;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &i);
    // Reading an int with scanf() skips leading whitespace and consumes characters that form an integer,
    // leaving the first character that cannot be part of the integer, and everything after it, in the input stream.

    // Version 1: scanf(), leading whitespace in the format string skips leading whitespace.
    // This consumes any consecutive whitespace characters, including the newline left by the previous input,
    // before reading the character.
    printf("Version 1 - Enter a character: ");
    scanf(" %c", &ch);
    printf("Version 1 - You entered %c (ASCII %d)\n", ch, ch);

    // Version 2: scanf(), no leading whitespace in the format string, consumes exactly one character.
    // Discard the newline left by the previous input, then read a character.
    printf("Version 2 - Enter a character: ");
    getchar();
    scanf("%c", &ch);
    printf("Version 2 - You entered %c (ASCII %d)\n", ch, ch);

    // Version 3: scanf(), no leading whitespace in the format string, consumes exactly one character.
    // Discard the remainder of the previous input, including the newline.
    printf("Version 3 - Enter a character: ");
    while ((i = getchar()) != '\n') // King, page 140. getchar() returns an int
        ;
    scanf("%c", &ch);
    printf("Version 3 - You entered %c (ASCII %d)\n", ch, ch);

    // Version 4: getchar() consumes exactly one character.
    // Discard the newline left by the previous input.
    printf("Version 4 - Enter a character: ");
    getchar();
    i = getchar();
    printf("Version 4 - You entered %c (ASCII %d)\n", i, i);

    // Version 5: getchar() consumes exactly one character.
    // Discard the remainder of the previous input, including the newline.
    printf("Version 5 - Enter a character: ");
    while ((i = getchar()) != '\n') { // Alternative to the Version 3 loop
    }
    i = getchar();
    printf("Version 5 - You entered %c (ASCII %d)\n", i, i);
}
