/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks.*/
//IT21107696

#Include <stdio.h>

int main() {
  int mark1 , mark2 , sum=0;
  float avg=0;

   printf("Input mark1 :");// input mark1
   scanf("%d", &mark1); //scanf to read values from keyboard

   printf("Input mark2 :");  //input mark2
   scanf("%d" , &mark2);

   sum = mark1 + mark2;

   
   avg = sum / 2 ;
   printf("the sum is %d\n", sum);
   printf("the average is  %.2f", avg); 

  
  return 0;
}

