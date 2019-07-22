/*************************************************************************
	> File Name: 117.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月22日 星期一 11时53分47秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int reserve_a = 0;
    int remainder;
    int original_a;
    original_a = a;

    while(a != 0){
        remainder = a % 10;
        reserve_a = remainder + reserve_a * 10;
        a /= 10;
    }
    //printf("%d %d ", reserve_a, a);
    if (original_a == reserve_a){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}

