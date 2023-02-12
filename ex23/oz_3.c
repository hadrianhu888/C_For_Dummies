/**
 * @file oz_3.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>

struct oz_database {
    char name[128];
    char role[128];
    char city[128];
    char age[128];
};

int main(int argc, char *argv[]); // function prototype

int main(int argc, char *argv[]) {
    struct oz_database oz;
    /**
        * @brief Enter the actors and roles of the Wizard of Oz in the structure definition below
        * 
        */
    struct oz_database oz1[6] = {"Dorothy" "protagonist","Kansas", "16", "Toto", "dog", "Kansas", "1", "Scarecrow", "friend", "Kansas", "35", "Cowardly Lion", "friend", "Kansas", "53", "Wicked Witch of the West", "antagonist", "Kansas", "26", "Wizard of Oz", "antagonist", "Kansas", "35"}; // create an array of 6 structures


    strcpy_s(oz.name, 128, "Dorothy");
    strcpy_s(oz.role, 128, "protagonist");
    strcpy_s(oz.city, 128, "Kansas");
    strcpy_s(oz.age, 128, "16");
    printf("The main character of the Wizard of Oz is %s, who is %s years old and lives in %s. %s is the %s in the story.\n", oz.name, oz.age, oz.city, oz.name, oz.role);
    strcpy_s(oz.name, 128, "Toto");
    strcpy_s(oz.role, 128, "dog");
    strcpy_s(oz.city, 128, "Kansas");
    strcpy_s(oz.age, 128, "1");
    printf("The main character of the Wizard of Oz is %s, who is %s years old and lives in %s. %s is the %s in the story.\n", oz.name, oz.age, oz.city, oz.name, oz.role);
    strcpy_s(oz.name, 128, "Scarecrow");
    strcpy_s(oz.role, 128, "friend");
    strcpy_s(oz.city, 128, "Kansas");
    strcpy_s(oz.age, 128, "1");
    printf("The main character of the Wizard of Oz is %s, who is %s years old and lives in %s. %s is the %s in the story.\n", oz.name, oz.age, oz.city, oz.name, oz.role);
    strcpy_s(oz.name, 128, "Cowardly Lion");
    strcpy_s(oz.role, 128, "friend");
    strcpy_s(oz.city, 128, "Kansas");
    strcpy_s(oz.age, 128, "1");
    printf("The main character of the Wizard of Oz is %s, who is %s years old and lives in %s. %s is the %s in the story.\n", oz.name, oz.age, oz.city, oz.name, oz.role);
    strcpy_s(oz.name, 128, "Tin Man");
    strcpy_s(oz.role, 128, "friend");
    strcpy_s(oz.city, 128, "Kansas");
    strcpy_s(oz.age, 128, "1");
    printf("The main character of the Wizard of Oz is %s, who is %s years old and lives in %s. %s is the %s in the story.\n", oz.name, oz.age, oz.city, oz.name, oz.role);
    strcpy_s(oz.name, 128, "Wicked Witch of the West");
    strcpy_s(oz.role, 128, "villain");
    strcpy_s(oz.city, 128, "Kansas");
    strcpy_s(oz.age, 128, "35");
    printf("The main character of the Wizard of Oz is %s, who is %s years old and lives in %s. %s is the %s in the story.\n", oz.name, oz.age, oz.city, oz.name, oz.role);
    /**
     * @brief Display the array structure of the database 
     * 
     */
    for (int i = 0; i < 6; i++)
    {
        printf("The main character of the Wizard of Oz is %s, who is %s years old and lives in %s. %s is the %s in the story.\n", oz1[i].name, oz1[i].age, oz1[i].city, oz1[i].name, oz1[i].role);
    }
    /**
     * @brief Sort the array of structures by name 
     * 
     */
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (strcmp(oz1[i].name, oz1[j].name) > 0)
            {
                struct oz_database temp = oz1[i];
                oz1[i] = oz1[j];
                oz1[j] = temp;
            }
        }
    }
    /**
     * @brief Display the sorted array of structures
     * 
     */
    for (int i = 0; i < 6; i++)
    {
        printf("The main character of the Wizard of Oz is %s, who is %s years old and lives in %s. %s is the %s in the story.\n", oz1[i].name, oz1[i].age, oz1[i].city, oz1[i].name, oz1[i].role);
    }
    return 0;
}
