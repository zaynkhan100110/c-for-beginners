#include <stdio.h>

/*i use gcc for compile , code::blocks for build and run , visual studio for writing*/

/*This code belongs for big input print statement in c*/

int main() {

int line[10001]; /*we set the maximum input line or after space bar 10001*/

printf("Enter your big data\n\n"); /*this is for input system*/
scanf("%10000[^\n]d", line); /*here we define the line of 10000 and give that value to the line*/
printf("Thank You for giving us your this words : %s \n", line); /*final result print the big data input with your given words frist*/

/*Note : Don't give any space between %10000[^\n]d otherwise code will compile but fail in result*/
/*Note : If you input words less than 10001 e.g then this will print that amount of words e.g. 9999 but if you enter more that 10000 then this print 10000 cuz you maximum scan to 10000 so if you want to scan and print more then change the amount from int line and scanf section*/

}
