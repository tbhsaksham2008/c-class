#include <stdio.h>
#include <time.h>
int main(){
    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t);

    printf("Current local time and date: %s", asctime(tm_info));

    return 0;
}