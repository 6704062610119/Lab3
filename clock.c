#include <stdio.h>

int main() {
    int hour,minute,second,nextm,new_minute,changeh,changem,new_hour;
    scanf("%d:%d:%d",&hour,&minute,&second);
    printf("hour:%d\nminute:%d\nsecond:%d\n",hour,minute,second);
    printf("Next minutes: ");
    scanf("%d",&nextm);
    
    if(nextm>=0 && nextm<=120){
        new_minute = minute+nextm;
        if(new_minute >= 60){//change hour
            if(new_minute % 60 == 0){ //1,2,3 
                changeh = new_minute/60;
                minute = 0;
                new_hour = changeh+hour;
                if(new_hour > 23){
                    hour = new_hour%24;
                }else if(new_hour >= 0 && new_hour <= 23){
                    hour = new_hour;
                }
            }else{ //1.5,2.5
                changeh = new_minute/60;
                changem = new_minute%60;
                minute = changem;
                new_hour = changeh+hour;
                if(new_hour > 23){
                    hour = new_hour%24;
                }else if(new_hour >= 0 && new_hour <= 23){
                    hour = new_hour;
                }
            }
        }else if(new_minute >= 0 && new_minute <= 59){ //change minute
            minute = new_minute;
        }
    }else{
        printf("Invalid");
    }
    
    printf("hour:%d\nminute:%d\nsecond:%d\n",hour,minute,second);

    return 0;
}
