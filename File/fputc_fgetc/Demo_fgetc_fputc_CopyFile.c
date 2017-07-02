#include<stdio.h>
main(){
    FILE *sourFile,*destFile;
    char sourceFile_name[10],destFile_name[10];
    printf("Enter the source file name:\n");
    scanf("%s",sourceFile_name);
    if ((sourFile=fopen(sourceFile_name,"r"))==NULL){
        printf("Cannot open source file %s!\n",sourceFile_name);
        exit(0);
    }
    printf("Enter the destination file name:\n");
    scanf("%s",destFile_name);
    if ((destFile=fopen(destFile_name,"w"))==NULL){
        printf("Cannot open destination file %s!\n",destFile_name);
        exit(0);
    }
    while(!feof(sourFile))
        fputc(fgetc(sourFile),destFile);
    fclose(sourFile);
    fclose(destFile);
}
