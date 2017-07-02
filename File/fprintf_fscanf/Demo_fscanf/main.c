#include<stdio.h>
FILE*stream;
int main(void){
    long l;
    float fp;
    char s[81];
    char c;
    stream=fopen("fscanf.out","w+");
    if(stream==NULL)
        printf("The file fscanf.out was not opened\n");
    else
        {
        fprintf(stream,"%s%ld%f%c","a-string",65000,3.14159,'x');
        /*Set pointer to beginning of file:*/
        fseek(stream,0L,SEEK_SET);
        /*Read data back from file:*/
        fscanf(stream,"%s",s);
        fscanf(stream,"%ld",&l);
        fscanf(stream,"%f",&fp);
        fscanf(stream,"%c",&c);
        /*Output data read:*/
        printf("%s\n",s);
        printf("%ld\n",l);
        printf("%f\n",fp);
        printf("%c\n",c);
        fclose(stream);
        }
}
