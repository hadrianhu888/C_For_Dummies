#include <stdio.h>
#define SPACE printf("\n\n");
#define MAX 300

int main(int argc, char ** argv); // function prototype

int main(int argc, char ** argv)
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        SPACE;
        printf("Hello World");
    }
    return 0;
}
