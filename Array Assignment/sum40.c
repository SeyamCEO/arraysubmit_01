#include <stdio.h>
int main(){
    int mark [40] ;
    int i, sum = 0 ;
    
    printf("Enter the marks:\n");
    
    
    for( i=0 ; i<40 ; i++ ) { 
        scanf("%d", &mark[i]);
    }

    for( i=0 ; i<40 ; i++ ) { 
        sum = sum + mark[i];
    }
    printf( "The sum of 40 is : %d" , sum );
    
    

return 0;
}