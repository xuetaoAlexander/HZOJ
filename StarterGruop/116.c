/*************************************************************************
	> File Name: 116.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月22日 星期一 10时53分47秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    int a, b ,c;
    scanf("%d%d%d", &a, &b, &c);
    int x[3] = {a,b,c};
    //printf("%d %d %d", x[0],x[1],x[2]);
    for (int i = 0; i < 3; i++){
        if(i + 1 < 3 && x[i] > x[i + 1]){
            int temp;
            temp = x[i + 1];
            x[i + 1] = x[i];
            x[i] = temp;
        }
    }

    //printf("%d %d %d",x[0],x[1],x[2]);
    if (x[0] + x[1] <= x[2]){
        printf("illegal triangle");
    }else if (pow(x[0], 2) + pow(x[1], 2) < pow(x[2], 2)){
        printf("obtuse triangle");
    }else if (pow(x[0], 2) + pow(x[1], 2) == pow(x[2], 2)){
        printf("right triangle");
    }else {
        printf("acute triangle");
    }

    return 0;
}
