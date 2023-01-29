#include <stdio.h>
int main(int argc, char ** argv);// function prototype for main 

int main (int argc, char ** argv) {
    int a = 5;
    int b = 10;
    int c = a + b;
    float distance = 300.00;
    int age = 71;
    float crem_distance = 19.2; 
    float myWeight = 50; 
    float newWeight = myWeight - 20;
    float duration; 
    float new_distance; 
    float speed; 
    float float_val = 10.024567;
    new_distance = 378921.46;
    speed = 140; 
    duration = new_distance / speed;
    float hours_in_day = 24;
    printf("Here is your integer value, %d\n", 123456789);
    printf("The sum of %d and %d is %d\n", a, b, c);
    printf("Shakespeare lived %d years ago\n", 400);
    printf("Shakespeare lived from %d to %d, which is a difference of %d years\n", 1564, 1616, 1616 - 1564);
    printf("Sigmund Grockmeister lived for 75 years from %d to %d\n", 1952, 1952+75);     
    printf("Here is your float value, %f\n", float_val);
    printf("Here is your float value, %.2f\n", float_val);
    printf("Two trips to the crematorium cost $%.2f\n", 2 * 19.99);
    printf("I am halfway to the crematorium, which is $%.2f away\n", 19.99 / 2);
    printf("The distance to the new crematorium from the old crematorium is %.2f km\n", crem_distance);
    printf("The distance between Toronto and Montreal is %.2f km\n", distance);
    printf("The alien is %.2f km away\n", distance + 100);
    printf("The age of the alien is %d years\n", age);
    printf("Your age is %d years\n", age + 1);
    printf("Your weight is %.2f kg\n", myWeight);
    printf("Your new weight is %.2f kg\n", newWeight);
    //display the difference in weight humorously 
    printf("You lost %.2f kg, which is %.2f times your weight\n", myWeight - newWeight, (myWeight - newWeight) / myWeight);	
    printf("The duration of the trip from Earth to the Moon is %.2f hours\n", duration);	
    printf("The duration of the trip from Earth to the Moon is %.2f days\n", duration / hours_in_day);	
    return 0;
}


