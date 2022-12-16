#include<stdio.h>
#define MAXLINE 1000

int getine(char s[],int max);
int strend(char *s,char *t);
int strlen(char *t);

int main(void){
    char s[MAXLINE],t[MAXLINE];
    int ans;
    getine(s,MAXLINE);
    getine(t,MAXLINE);
    ans = strend(s,t);
    printf("%d",ans);
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

int strend(char *s,char *t){
    int len;
    len=strlen(t);
    while(*s!='\0') ++s;
    --s;
    while(*t!='\0') ++t;    
    --t;
    while(len > 0){
        if(*t==*s){
            --t;
            --s;
            --len;
        }
        else return 0;
    }
    if( len == 0) return 1;
}

int strlen(char *t){
    char *p;
    p=t;
    while(*p!='\0')
        ++p;
    return p-t;
}
