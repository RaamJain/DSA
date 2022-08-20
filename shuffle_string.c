
#include<string.h>
int main()
{
    char s1[100],s2[100],s3[100];
    gets(s1);
    gets(s2);
    gets(s3);
    // puts(s1);
    // puts(s2);
    // puts(s3);
    // printf("%d",strlen(s1));
    if((strlen(s1)+strlen(s2)) != strlen(s3))
    {
        printf("The string are not valid shuffle \n");
    }
    else 
    {
        printf("x");
      strcat(s1,s2);
      puts(s1);
      int x = strcmp(s1,s3);
      if(x==0)
      {
        printf("The two strings are similar ");
      }
      else 
      printf("The string are not  similar");
        
    return 0;
}
}