#include<stdio.h>
#include<stdlib.h>
main(){
    FILE *fp;
    int dataIndex;
    float ndata;
    char ch[80];
    float x, sum=0;
    printf("Input the number of data: ");
    scanf("%f",&ndata);
    getchar();
    if (ndata==0){
        printf("No Data!");
        exit(0);
    }
    if ((fp=fopen("file.txt","w"))==NULL){
        printf("Can not open file!");
        exit(0);
    }

    for(dataIndex=1;dataIndex<=ndata;dataIndex++){
        printf("Data %d is:",dataIndex);
        gets(ch);
        x=atof(ch);
        fprintf(fp,"%6.2f ",x);
        sum+=x;
    }
    fprintf(fp,"\nThe sum is %6.2f.\n",sum);
    fprintf(fp,"The averaged is %6.2f.\n",sum/ndata);
    fclose(fp);
    system("Type file.txt");
}
