#include <stdio.h>
main(){
    FILE *fp,*fp1;
    int data;
    float ch;
    int n=0;
    int outputCNT;
    if((fp=fopen("data.txt","r")==NULL)){
        printf("\n Open file error!");
        exit(0);
    }
    printf("\n The count of output data is: ");
    scanf("%d",&outputCNT);
    getchar();
    printf("\n Output data list:\n");
    while(n<outputCNT){
        fscanf(fp,"%f",&ch);
        fp1=fopen("testdata.dat","a");
        fprintf(fp1,"%f",ch);
        n++;
        printf("%f\n",ch);
        if(n%8==0) printf("\n");
    }
    fclose(fp);
}
