#include <stdio.h>
#include"cs50.h"
 float avg (int number ,float average);
int main(void){
 int number = get_int("Enter numbers of University subjects :");
 float average ;
 for ( int i=0; i < number; i++){
   float mark = get_float("Enter mark of University subjects :");
   average = average + mark ;
 }
 float x =  avg ( number , average);
 printf("The average of your University subjects = %f\n",x);
 if ( x>60 & x<70){
   printf("Good");
 }
 else if ( x>70 & x<80){
   printf(" Very Good");
 }
   else if ( x>80 & x<90){
   printf("Excellence");
 }
  if ( x>90 & x<100){
   printf("Very Excellence");
 }
}
float avg (int number ,float average){
   return average/number;
 }