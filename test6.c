#include <stdio.h>
int xx(int a){
    int i;
    int m=1;
    for(i=1;i<=a;i++){
        m=m*i;

    }
    return m;

}
int main(){
    int xx(int a);
    int a=4;
    int b=5;
    int c=8;
    int d=xx(a)+xx(b)+xx(c);
    printf("%d",d);
    printf("你好");
    
}