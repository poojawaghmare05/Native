//input 6
//output a  b  c  d  e  f   (using while)   Recurssion

#include<stdio.h>

void Display(int iNo)
{
   static int i = 0;
   static char ch = 'a';

   if(i != iNo)
   {
        printf("%c\t" , ch);
        ch++;
        i++;
        Display(iNo);
   }
}

int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d" ,  &iValue);

    Display(iValue);

}