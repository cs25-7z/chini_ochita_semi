#include <stdio.h>

void main(){
    int i;    
    char deadline=7;
    for(i=deadline;i>=0;i--){
        if(i==0){
            printf(".\n.\n.\nThe End\n");
        }else{
            printf("remaining - %d Days\n",i);
            getchar();
        }
    }
    getchar();
}
