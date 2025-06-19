#include <stdio.h>
    int counting=0;
    int count(int a[],int n){
        for (int i = 0; i < n; i++)
        {
            if (a[i]>0)
            {
                counting++;
            }
        }
            return counting ;
        
    }
int main(){
    int a[]={-3,-2,-1,0,1,2,3};
    
    printf("The number of +ve integer in array is %d",count(a,7));
    
    return 0;
}