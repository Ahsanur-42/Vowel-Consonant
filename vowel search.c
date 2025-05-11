#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len,count = 0;

    printf("Enter sentence without space & other special character: ");
    gets(str);

    len = strlen(str);
    for(i=0;i<len;i++)
    {

        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||  str[i]=='o'  || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' ||  str[i]=='O'  || str[i]=='O')
        count++;
    }
    printf("Total Vowels = %d\n", count);
    printf("Total Consonants = %d\n", len - count);
    return 0;
}
