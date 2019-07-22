/*************************************************************************
	> File Name: 108.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月22日 星期一 09时02分24秒
 ************************************************************************/

#include<stdio.h>
int main(){
    char firstline;
    double m,n;

    scanf("%c\n%lf%lf", &firstline, &m, &n);
    if (firstline == 'r'){
        printf("%.2lf", m * n);
    }else{
        printf("%.2lf", m * n / 2);
    }

    return 0;
}

