#include<stdio.h>
main(){
    FILE *fp;
    int nchar;
    printf("Input the number of characters you want to display: ");
    scanf("%d",&nchar);
    char str[nchar+1];
    if ((fp=fopen("file.txt","r"))==NULL){
        printf("Can not open file!");
        exit(0);
    }
    fgets(str,nchar+1,fp);
    printf("%s",str);
    fclose(fp);
}
