/*************************************************************************
	> File Name: 118.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月22日 星期一 12时14分50秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int year;
    scanf("%d", &year);
    int remainder;    
    remainder = (year - 1900) % 12;
    if (remainder == 0){
        printf("rat");
    }else if(remainder == 1 || remainder == -11){
        printf("ox");
    }else if(remainder == 2 || remainder == -10){
        printf("tiger");
    }else if(remainder == 3 || remainder == -9){
        printf("rabbit");
    }else if(remainder == 4 || remainder == -8){
        printf("dragon");
    }else if(remainder == 5 || remainder == -7){
        printf("snake");
    }else if(remainder == 6 || remainder == -6){
        printf("horse");
    }else if(remainder == 7 || remainder == -5){
        printf("sheep");
    }else if(remainder == 8 || remainder == -4){
        printf("monkey");
    }else if(remainder == 9 || remainder == -3){
        printf("rooster");
    }else if(remainder == 10 || remainder == -2){
        printf("dog");
    }else if(remainder == 11 || remainder == -1){
        printf("pig");
    }

    return 0;
}
