/*************************************************************************
	> File Name: 119.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月22日 星期一 12时52分23秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int year,month,day;
    scanf("%d%d%d", &year, &month, &day);
    int last_year, next_year, last_month, next_month, yesterday,tomorrow;

    if (month == 1 || month == 3 ||month == 5 ||month == 7 ||month == 8 ||month == 10 ||month == 12 ){
        if (day > 1 && day < 31){
            tomorrow = day + 1;
            yesterday = day - 1;
            next_month = last_month = month;
            next_year = last_year = year;
            printf("%d %d %d\n%d %d %d", last_year, last_month, yesterday, next_year, next_month, tomorrow);
        }else if(day == 1){
            tomorrow = day + 1;
            next_month = month;
            next_year = year;
            if (month == 1){
                yesterday = 31;
                last_month = 12;
                last_year = year - 1;
                printf("%d %d %d\n%d %d %d", last_year, last_month, yesterday, next_year, next_month, tomorrow);
            }else if (month == 3){
                last_month = 2;
                last_year = year;
                if ((year % 100 == 0 && year % 400 == 0) || ((year % 100 != 0 && year  % 4 == 0))){
                    yesterday = 29;
                }else {
                    yesterday = 28;
                }
                printf("%d %d %d\n%d %d %d", last_year, last_month, yesterday, next_year, next_month, tomorrow);
            }else if (month == 8){
                last_year = year;
                last_month = month - 1;
                yesterday = 31;
                printf("%d %d %d\n%d %d %d", last_year, last_month, yesterday, next_year, next_month, tomorrow);
            }else {
                last_year = year;
                last_month = month - 1;
                yesterday = 30;
                printf("%d %d %d\n%d %d %d", last_year, last_month, yesterday, next_year, next_month, tomorrow);
            }
        }else{
            last_year = year;
            last_month = month;
            yesterday = day - 1;
            if (month == 12){
                next_year = year + 1;
                next_month = 1;
                tomorrow = 1;
                printf("%d %d %d\n%d %d %d", last_year, last_month, yesterday, next_year, next_month, tomorrow);
            }
            
            
        }
    }else if (month == 4 ||month == 6 ||month == 9 ||month == 11 ){
        if (day > 1 && day < 30){
            tomorrow = day + 1;
            yesterday = day - 1;
            next_month = last_month = month;
            next_year = last_year = year;
            printf("%d %d %d\n%d %d %d", last_year, last_month, yesterday, next_year, next_month, tomorrow);
        }else if (day == 1){
            tomorrow = day + 1;
            next_year = year;
            next_month = month;
            yesterday = 30;
            last_year = year;
            last_month = month - 1;
            printf("%d %d %d\n%d %d %d", last_year, last_month, yesterday, next_year, next_month, tomorrow);
        }else if (day == 30){
            yesterday = day - 1;
            last_year = year;
            last_month = month;
            tomorrow = 1;
            next_year = year;
            next_month = month + 1;
            printf("%d %d %d\n%d %d %d", last_year, last_month, yesterday, next_year, next_month, tomorrow);
        }
    }else {
        if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)){
            if (day > 1 && day < 29){
                tomorrow = day + 1;
                yesterday = day - 1;
                next_month = last_month = month;
                next_year = last_year = year;
                printf("%d %d %d\n%d %d %d", last_year, last_month, yesterday, next_year, next_month, tomorrow);
            }else if (day == 1){
                tomorrow = day + 1;
                next_year = year;
                next_month = month;
                last_year = year;
                last_month = month - 1;
                yesterday = 31;
                printf("%d %d %d\n%d %d %d", last_year, last_month, yesterday, next_year, next_month, tomorrow);
            }else if (day == 29){
                last_year = year;
                last_month = month;
                yesterday = 28;
                next_year = year;
                next_month = month + 1;
                tomorrow = 1;
                printf("%d %d %d\n%d %d %d", last_year, last_month, yesterday, next_year, next_month, tomorrow);
            }
        }else{
            if (day > 1 && day < 28){
                tomorrow = day + 1;
                yesterday = day - 1;
                next_month = last_month = month;
                next_year = last_year = year;
                printf("%d %d %d\n%d %d %d", last_year, last_month, yesterday, next_year, next_month, tomorrow);
            }else if (day == 1){
                tomorrow = day + 1;
                next_year = year;
                next_month = month;
                last_year = year;
                last_month = month - 1;
                yesterday = 31;
                printf("%d %d %d\n%d %d %d", last_year, last_month, yesterday, next_year, next_month, tomorrow);
            }else if (day == 28){
                last_year = year;
                last_month = month;
                yesterday = 27;
                next_year = year;
                next_month = month + 1;
                tomorrow = 1;
                printf("%d %d %d\n%d %d %d", last_year, last_month, yesterday, next_year, next_month, tomorrow);
            }
        }
    }

    return 0;
}
