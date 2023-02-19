/**
 * @file enoch.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */

typedef enum days 
{
    Sunday = 100, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
} day;

int main(int argc, char **argv); // Function prototype

int main(int argc, char **argv)
{
    day today; 
    today = Saturday;
    printf("Today is %d\n", today);
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}

