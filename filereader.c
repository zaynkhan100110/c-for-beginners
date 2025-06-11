#include <stdio.h>

/*i use gcc for compile , code::blocks for build and run , visual studio for writing*/

/*This code belongs for input a file from the folder then read that file and print that file with maximum words the number then print with your words statement in c*/


int main() {

int line[100001]; /*we set the maximum input line or after space bar 100001*/
FILE *hand;   /*This define a logic that a hand and there a file in the same folder*/
hand = fopen("example.txt", "r"); /*so here hand have fopen to open that file and "r" for read that file*/
while(fgets(line, 100000, hand) !=NULL);{ /*here we create a loop cuz we don't have any iostream or something like that and if there is no file it will return null or nothing*/
printf("%s\n", line); /*and you know why this is for if u take any of the code before*/


}

/*Note : you need to have the filename.extention e.g. i take example.txt otherwise this will give you null or nothing*/


}
