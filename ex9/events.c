/**
 * @file events.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void check_keyboard();
void check_mouse();
void check_network();
void check_disk();

void check_keyboard() {
  // check the keyboard
}

void check_mouse() {
  // check the mouse
}

void check_network() {
  // check the network
}

void check_disk() {
  // check the disk
}

int main (int argc, char ** argv);  // function prototype

int main (int argc, char ** argv) {
    for (;;) {
        check_keyboard();
        check_mouse();
        check_network();
        check_disk();
    }
    return 0;
}

