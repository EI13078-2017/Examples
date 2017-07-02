#include<stdio.h>
main(){
    FILE *fp;
    char a='A',b='B',c='C';
    if ((fp=fopen("file1.txt","w"))==NULL){
        printf("Cannot open file!\n");
        exit(0);
    }
    fputc(a,fp);
    fputc(b,fp);
    fputc(c,fp);
    fputc(0xff,fp);
    fclose(fp);
}
