#include<iostream>
using namespace std ;
int main()
{
   char str1[25], str2[25];
   int i,j,l;
   cout<<"enter the string  ";
   gets(str1);
   for(i=0;str1[i]!='\0';i++)
   l=i;
   for(i=0,j=l;j>=0;j--,i++)
   {
    str2[i]=str1[j];

   }
   str2[i]='\0';
   puts(str2);
   return 0;
} 
