#include <stdio.h>

/*i use gcc for compile , code::blocks for build and run , visual studio for writing*/

/*This code belongs for input funtions and claculate the number then print with your words statement in c*/

int main() {

int bill; 
          /*you can also do this 
          int bill, cut
          yeah you can put 2 in once*/
int cut;
printf("Enter your amount of purchase \n \n \n  \n"); /*function for input system don't include %d or %s here and \n for next line like <br> in html*/
scanf("%d", &bill); /*this will scan the input for number and set that to the bill*/
cut = bill + 0; /*this is for calculation of amount you can add more count insted of 0 if you want another calculation*/
 printf("Thank you for your purchase of %d\n \n \n", cut); /*this is for print some words what you give with amount of calculation*/

}
