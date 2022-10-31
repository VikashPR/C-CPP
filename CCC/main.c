#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct Date{
    int d,m,y;
};
int main() {
    int t,i,j;
    scanf("%d",&t);
    struct Date date[t];
    for(i=0;i<t;i++){
        scanf("%d%d%d",&date[i].d,&date[i].m,&date[i].y);
    }
    for(i=0;i<t-1;i++){
        for(j=i+1;j<t;j++){
            if(date[i].y > date[j].y){
                struct Date temp = date[i];
                date[i] = date[j];
                date[j] = temp;
            }
            if(date[i].y == date[j].y){
                if(date[i].m>date[j].m){
                    struct Date temp = date[i];
                    date[i] = date[j];
                    date[j] = temp;
                }
            }
            if(date[i].y == date[j].y && date[i].m == date[j].m){
                if(date[i].d>date[j].d){
                    struct Date temp = date[i];
                    date[i] = date[j];
                    date[j] = temp;
                }
            }
        }
    }
    for(i=0;i<t;i++){
        printf("%d %d %d\n",date[i].d,date[i].m,date[i].y);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}