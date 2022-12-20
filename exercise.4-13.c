#include<stdio.h>
#include<string.h>
#define MAXLINE 100

int getine(char line[],int maxline);
void reverse(char s[]);

int main(void)
{
    char s[MAXLINE];
    getine(s,MAXLINE);
    reverse(s);
    printf("%s",s);
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

void reverse(char s[]){
    char t[MAXLINE];
    int ind=0;
    for(int i= strlen(s)-1;i>=0;i--){
        t[ind]= s[i];
        ind++;
    }
    for(int i=0;s[i]!='\0';i++){
        s[i]=t[i];
    }
}
