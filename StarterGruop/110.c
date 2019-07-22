/*************************************************************************
	> File Name: 110.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月22日 星期一 09时36分40秒
 ************************************************************************/

#include<stdio.h>
int main(){
    double x;
    scanf("%lf", &x);

    if (x <= 15){
        printf("%.2lf", x * 6);
    }else{
        printf("%.2lf", (x - 15) * 9 + 15 * 6);
    }

    return 0;
}
