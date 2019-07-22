/*************************************************************************
	> File Name: 114.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月22日 星期一 10时23分00秒
 ************************************************************************/

#include<stdio.h>
int main(){
    char x;
    scanf("%c", &x);
    if (x == 'h'){
        printf("He");
    }else if (x == 'l'){
        printf("Li");
    }else if (x == 'c'){
        printf("Cao");
    }else if (x == 'd'){
        printf("Duan");
    }else if (x == 'w'){
        printf("Wang");
    }else {
        printf("Not Here");
    }

    return 0;
}
