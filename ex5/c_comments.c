/**The compiler will ignore this**/
//single line comment 
#include <stdio.h>
int main(int argc, char ** argv); // function prototype

int main(int argc, char **argv) {
    /**
     * @brief This is a multi-line comment
     * 
     */
    //Comment on printf statement for line 1
    printf("Sorry, I can't talk right now. I'm busy.\n");
    //Comment on printf statement for line 2
    /*printf("I'm busy\n");*/
    //Comment on return statement
    return 0;
    /*Avoid nested comments*/
}