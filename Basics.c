// Printing something in C 
#include<stdio.h>

int main(){
    printf("hello world");

    return 0; 
}
 /*
 Basic types : 
 1. int : an integer 
 2. float : floating point number 
 3. char : a character 
 4. char * : array of characters or string -> char *name = "munro"; 
 */

 /*
 format specifiers 
 1. %d - digit - int
 2. %f - float
 3. %c - char 
 4. %s - string (char *)
 */

 // newline character -> \n at the end of the line 
 /* Ques : 
 given one variable with some value, change its value 
 char *club = "arsenal"; 
 club = "chelsea"; i dont have to define its tyoe again here 
 */

 /*const key word : means the value for the variable cannot be changed once declared 
 const int x = 15; 
 x = 10; -> error 
 */ 

 /* increment operators 
 postfix x++; +=1
 the value of x is used first in the expression and then it is incremented 
 int a = 5;
 int b = a++; -> b is assigned value 5, a becomes 6 
 - - - - - - - - - - - - - - - 
 prefix ++x; -=1
 the value of x is incremented first and then the new value is used in the expression 
 int a = 5;
 int b = --a; -> value of a becomes 4 and value of b is also 4 now 
 */
/*
if statement : 
if(base >= 12){
        printf("fine");
    }
    else if (base < 12){
        printf("brokie");
    }
    else{
        printf("UPSC Prep starts"); 
    }
*/

/* Ternary operators 
a > b ? a : b // if condition is true, we output a , if condition is false,we output b 
*/


/* Basic C types and sizes : 1 byte = 8 bits 
1. Int : 32 bit system -> 4 bytes 
         64 bit system -> 8 bytes 
2. Char : Always 1 byte 
3. float : 4 bytes 
4. double : 8 bytes 
5. bool : 1 byte 
*/

/* sizeof operator 
printf("sizeof(bool) = %zu" , sizeof(bool)) ; 
output : sizeof(bool) = 1 
*/

/* for loop : 
 for (int i = 0 ; i <= 10 ; i++){
 printf( "%d" \n , i); 
 }
*/

/* while loop : 
int i = 5;
 while (i <=10){
 printf ("%d" \n, i ); 
 i++; } 
*/

/* do-while loop : executes atleast once 
int i =0; 
do{
printf("%d" \n , i);
i++; 
} while (i < 5); 
*/

/* pragma once : 
it tells the compiler to use that particular header file only once even if its referenced multiple times in the code 
to avoid redefinition erros 
my header_h. 

#pragma once 

struct Point {
int x;
int y; 
}; 
*/


