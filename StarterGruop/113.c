/*************************************************************************
	> File Name: 113.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月22日 星期一 09时57分44秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int y;
    int m;
    scanf("%d%d", &y, &m);
    if (m == 1 || m == 3 ||m == 5 ||m == 7 ||m == 8 ||m == 10 ||m == 12){
        printf("31");
    }else if ( m == 4 |m == 6 |m == 9 |m == 11){
        printf("30");
    }else if((y % 100 == 0 && y % 400 == 0) || (y % 100 != 0 && y % 4 == 0)){
        if (m == 2){
          printf("29");
        }  
    }else{
        printf("28");
    }

    return 0;
}
