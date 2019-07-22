/*************************************************************************
	> File Name: 107.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月22日 星期一 08时52分34秒
 ************************************************************************/

#include<stdio.h>
int main(){
    unsigned int n;

    scanf("%u", &n);
    if (n % 7 == 0 && n % 2 != 0){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;

}
