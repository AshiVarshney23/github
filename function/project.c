#include<stdio.h>
int countvowels(char name[])

{
    int i;
    int count=0;
    for(i=0;i<100;i++)
 char = a[i];

 if( ch=='a' || ch=='e'|| ch=='i'||ch=='o'|| ch=='u'|| ch=='A' || ch=='E' || ch=='I'|| ch=='O'||ch=='U')
    count ++;
    return count;
}

int main ()
{
    int vowel,total;
  char name[100] ,i;
  int count=0;
  printf("ENTER YOUR NAME ");
  scanf("%[^\n]",&name);
  total=countvowels(name);
  
  printf("Total vowels in your name is : \n");

return 0;
}