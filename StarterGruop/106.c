/*************************************************************************
	> File Name: 106.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月21日 星期日 20时39分24秒
 ************************************************************************/

#include<stdio.h>
int main(){
    double n;
    scanf("%lf", &n);
    if (n < 0){
        printf("%f", -n);
    }else{
        printf("%f", n);
    }

    return 0;
}
