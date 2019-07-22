/*************************************************************************
	> File Name: 115.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月22日 星期一 10时32分27秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d", &a, &b);
    int a_first;
    int a_second;
    int b_first;
    int b_second;
    
    a_first = a / 10;
    a_second = a % 10;
    b_first = b / 10;
    b_second = b % 10;

    if (a == b){
        printf("100");
    }else if (a_first == b_second && a_second == b_first){
        printf("20");
    }else if (a_first == b_first && a_second != b_second){
        printf("2");
    }else if (a_first != b_first && a_second == b_second){
        printf("2");
    }else if (a_first == b_second && a_second != b_first){
        printf("2");
    }else if (a_first != b_second && a_second == b_first){
        printf("2");
    }else {
        printf("0");
    }

    return 0;
}
