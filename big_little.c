#include<stdio.h>

typedef struct format
{
        unsigned int var;

}st;
void big_endian(st);
void little_endian(st);
int main()
{
        st x;
        char ch;
        printf("Enter the number\n");
        scanf("%x",&x.var);
back:  printf("Please enter the choice :\n1.Little Endian\n2.Big Endian\n");
        scanf(" %c",&ch);
        switch(ch)
        {
                case 'l': little_endian(x);
                        break;
                case 'b': big_endian(x);
                        break;
                default:printf("Invalid Choice\n");
                        goto back;
        }
}
void little_endian(st litt)
{
        int i;
        char *q=(char*)&litt.var;
        printf("Little Endian format\n");
        for(i=0;i<4;i++)
                printf("%x",*q++);
        printf("\n");

}
void big_endian(st big)
{
        int i,j;
        char *p=(char *)&big.var;
        p=p+3;
        printf("Big Endian format \n");
        for(i=0;i<4;i++)
                printf("%x",*p--);
        printf("\n");

}
