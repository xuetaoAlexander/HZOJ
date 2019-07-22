/*************************************************************************
	> File Name: 109.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月22日 星期一 09时13分38秒
 ************************************************************************/

#include<stdio.h>
int main(){
    unsigned int n;
    scanf("%u", &n);
    int i;
    int flag;
    flag = 0;
    
    for (i = 1; i <= 4; i++){
        if ((n % 10) % 2 == 0){
            flag = 1;
        }
        n /= 10;
    }
    if (flag == 1){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}
