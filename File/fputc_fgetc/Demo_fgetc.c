#include<stdio.h>
main(){
    FILE *fp;
    char a;
    int i;
    if ((fp=fopen("file1.txt","r"))==NULL){
        printf("Cannot open file!\n");
        exit(0);
    }
    while((a=fgetc(fp))!=EOF) putchar(a);
    fclose(fp);
}
