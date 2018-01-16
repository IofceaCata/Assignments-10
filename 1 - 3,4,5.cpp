#include <stdio.h>

int main()
{
 FILE *fp;
 char filename[100];
 char ch;
 int linecount, wordcount, charcount;


 linecount = 0;
 wordcount = 0;
 charcount = 0;


  printf("Numele fisierului :");
  gets(filename);


   fp = fopen(filename,"r");

   if ( fp )
   {
	   while ((ch=getc(fp)) != EOF) {
            if (ch != ' ' && ch != '\n') { ++charcount; }

            if (ch == ' ' || ch == '\n') { ++wordcount; }

            if (ch == '\n') { ++linecount; }



	   }

	   if (charcount > 0) {
		++linecount;
		++wordcount;
	   }
    }
   else
      {
         printf("Nu s a deschis\n");
        }

    printf("Linii : %d \n", linecount);
    printf("Cuvinte : %d \n", wordcount);
    printf("Caractere : %d \n", charcount);

getchar();
return(0);
}
