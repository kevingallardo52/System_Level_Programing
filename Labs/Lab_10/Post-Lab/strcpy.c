#include<stdio.h>

// Name: strcpy.c
// purpose: function about string copy, the strcpy prototype "char* strcpy (char* strDest, const  char* strSrc);". Here strDest is destination string, strSrc is source string. 
// Author: Kevin Gallardo

char* strcpy(char*, const char*);

int main()
{
  char source[] = "A String"; // source string
  char destination[100]; // destination string

  printf("Source string: %s\n",source);

  printf("After copying the source string to the destination\nDestination string is: %s\n",strcpy(destination,source));

  return 0;
}

char* strcpy(char* strDest, const char* strSrc)
{
   unsigned i;

   for (i=0; strSrc[i] != '\0'; ++i)
        strDest[i] = strSrc[i];

    strDest[i]='\0'; //appending null to end

     return strDest;
}