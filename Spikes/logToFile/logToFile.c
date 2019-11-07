#include <stdio.h>

int main () {
   FILE * fp;
   int i;
   
   fp = fopen ("filelog.txt","a");
 
   /* write 10 lines of text into the file stream*/
   for(i = 0; i < 10;i++){
       fprintf (fp, "This is line %d\n",i + 1);
   }
 
   /* close the file*/  
   fclose (fp);
   return 0;
}