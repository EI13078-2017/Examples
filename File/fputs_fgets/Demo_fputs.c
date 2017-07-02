#include<stdio.h>
main(){
    FILE *fp;
    char *str[]={"Brazil\n","Mexico\n","Croatia\n","Cameroon\n"};
    int i;
    if((fp=fopen("Group A.txt","w"))==NULL){
        printf("Cannot open file!\n");
        exit(0);
    }
    for(i=0;i<=3;i++)
        fputs(str[i],fp);
    fclose(fp);
}
