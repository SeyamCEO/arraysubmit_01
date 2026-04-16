// Calculate the total number of students who are present and absent


#include <stdio.h>

int main(){
    
    int attendence [30];  // array to store attendence 
    int i, n ;
    int present = 0, absent = 0;

    printf("enter number of students: ");
    scanf("%d", &n); // total students

    printf("Enter attendence (1= present , 0= absent): \n") ;

    // input loop
    for ( i=0 ; i<n ; i++){
        scanf("%d" , &attendence[i]);     // take 0 or 1 input
    }

    // counting loop

    for (i=0 ; i<n ; i++ ){
        if ( attendence[i]==1 ){
            present ++ ;          // count present 
        }
        else if ( attendence [i] == 0 ){
            absent ++ ;           // count absent
        }
    }
    //output
    printf("Total Present:%d", present );
    printf("Total Absent:%d", absent );

    return 0 ;
}