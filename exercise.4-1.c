#include<stdio.h>
#include<ctype.h>
#define MAXLINE 1000

int strind(char s[],char t[]);
int getine(char s[],int);

int main(){
    char s[MAXLINE];
    char match[] = "ill";
    int res;
    while(getine(s,MAXLINE)>0){
        res=strind(s,match);
        printf("%d",res);
    }
    return 0;
}

int getine(char s[], int max){
    int i=0;
    char c;
    while(--max>0&&(c=getchar())!=EOF&&c!='\n')
    s[i++]=c;
    if(c=='\n')
    s[i++]='\n';
    s[i]='\0';
    return i;
}

int strind(char s[],char t[]){
    int i;
    int res=-1;
    for(i=0;s[i]!='\0';i++){
        int j,k;
        for(j=i,k=0;t[k]==s[i]&&t[k]!='\0';k++,j++){
            res=j;
        }
    }
    return res;
}
