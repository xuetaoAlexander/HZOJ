/*************************************************************************
	> File Name: 111.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月22日 星期一 09时44分02秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if (n <= 3){
        printf("%d", 13 + 1);
    }else{
        printf("%.1lf", 13 + 1.0 + (n - 3) * 2.3);
    }

    return 0;
}
