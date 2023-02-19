/**
 * @file mystuff.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

typedef struct stuff 
{
    char letter; 
    int number; 
} junk; 

void showstuff(junk this); // Function prototype
int main(int argc, char **argv); // Function prototype

void showstuff(junk this)
{
    printf("You entered %c and %d", this.letter, this.number);
}

int main(int argc, char **argv)
{
    junk this; 
    printf("Enter a character: ");
    scanf("%c", &this.letter);
    printf("Enter a number: ");
    scanf("%d", &this.number);
    showstuff(this);
    return 0;
}


