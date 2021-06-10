#include <stdio.h>
 
struct time{
    int hour, minute, second;
};
 
int main(){
    struct time t1, t2, t3,t4;
    int seconds1, seconds2, addSeconds, subtractionSeconds;
    printf("Enter first time in HH:MM:SS : ");
    scanf("%d",&t1.hour);
    scanf("%d",&t1.minute);
    scanf("%d",&t1.second);
 
    printf("Enter second time in HH:MM:SS: ");
    scanf("%d:%d:%d",&t2.hour);
    scanf("%d",&t2.minute);
    scanf("%d",&t2.second);
 
    //calculate sum & difference
    //get time in total seconds
    seconds1 = t1.hour*60*60 + t1.minute*60 + t1.second;
    seconds2 = t2.hour*60*60 + t2.minute*60 + t2.second;
    addSeconds = seconds1+seconds2;
    subtractionSeconds = seconds1-seconds2;
 
 //extract time in Hours, Minutes and Seconds
    t3.minute = addSeconds/60;
    t3.hour = t3.minute/60;
    t3.minute = t3.minute%60;
    t3.second = addSeconds%60;
 
    t4.minute = subtractionSeconds/60;
    t4.hour = t4.minute/60;
    t4.minute = t4.minute%60;
    t4.second = subtractionSeconds%60;
    
    printf("Time addition is: %02d:%02d:%02d\n", t3.hour, t3.minute, t3.second);
    printf("Time difference is: %02d:%02d:%02d\n", t4.hour, t4.minute, t4.second);}

