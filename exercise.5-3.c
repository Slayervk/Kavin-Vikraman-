#include<stdio.h>
#define MAXLINE 1000
int getine(char line[],int maxline);
void mystrcat(char *,char *);
int main()
{
    char s[MAXLINE],t[MAXLINE];
    getine(s,MAXLINE);
    getine(t,MAXLINE);
    mystrcat(s,t);
    printf("result: %s",s);
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

void mystrcat(char *s,char *t)
{
    while(*s!='\0') s++;
    s--;            
    while((*s=*t)!='\0'){   
        s++;
        t++;
    }
}
