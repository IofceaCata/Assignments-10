#include<stdio.h>
#include<ctype.h>
#include<iostream>
#include<conio.h>
int main()
{
    FILE *p,*q;
    char s[10],d[10],ch;
    printf("Fisierul sursa : ");
    gets(s);
    printf("Fisierul target : ");
    gets(d);
    p=fopen(s,"r");
    if(p==NULL)
    {
        printf("Fisierul nu a fost gasit");
        exit(1);
    }
    q=fopen(d,"w");
    if(q==NULL)
    {
        printf("Fisierul nu a fost creat");
        exit(1);
    }
    while( (ch=getc(p))!=EOF)
    {

        if(islower(ch))
            putc(toupper(ch),q);
        else
            if(isdigit(ch))
                putc(ch,q);
            else
                putc(ch,q);
        }
    printf("Conversia a reusit \n");
    fclose(p);
    fclose(q);

    printf("Continutul fisierului ",s);
    p=fopen(s,"r");

    while( (ch=getc(p))!=EOF)
        printf("%c",ch);
    fclose(p);
    printf("Continutul fisierului ",d);
    q=fopen(d,"r");
    while( (ch=getc(q))!=EOF)
        printf("%c",ch);
        fclose(q);
        getch();
    }
