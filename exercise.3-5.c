#include<stdio.h>
#include<string.h>
void itob(int n,char* s,int b){
    int k=n;
    int temp;
    int ind=0;
    int sign;
    if(n<0) sign=n,k=-k;
    while(k>0){
        temp=k%b;
        k=k/b;
        s[ind++]= (temp<10)? '0'+temp:'A'+temp-10;
    }
    if(sign<0)
    s[ind++] ="-";
    s[ind]='\0';
}

int main(){
    int b=16;
    int n=234; //Hex value is "EA" in string
    char s[100]; 
    itob(n,s,b);
    strrev(s);
    printf("%s",s);
    return 0;
}
