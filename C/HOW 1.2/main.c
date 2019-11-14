#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *from,*to;
    char ch;

    //see if correct number of command line arguments
    if(argc!=3){
        printf("Usage: copy <source> <destination>\n");
        exit(1);
    }
    //open source file
    if((from=fopen(argv[1],"rb"))==NULL){
        printf("cannot open source file.\n");
        exit(1);
    }
    //open destination file
    if((to=fopen(argv[2],"wb"))==NULL){
       printf("cannot open file destination.\n");
       exit(1);
              }
    //copy the filebuf
    while(!feof(from)){
        ch=getc(from);
        if(ferror(from)){
            printf("Error reading source file.\n");
            exit(1);
        }
        if(!feof(from)) fputc(ch,to);
        if(ferror(to)){
            printf("Error writing destination file.\n");
            exit(1);
        }
    }
    if(fclose(from)==EOF){
        printf("Error closing source file.\n");
        exit(1);
    }
    if(fclose(to)==EOF){
        printf("Error closing destination file.\n");
        exit(1);
    }
    return 0;
}
