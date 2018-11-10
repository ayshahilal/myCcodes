#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int i,j,k,a;
    
    a=2*n-2;
    int mtr[20][20];
    
    for( k=0 ; k<=n ; k++){
        
        for( i=k ; i<=(a-k) ; i++){   
                             mtr[k][i]= n-k ;
                             mtr[a-k][i]= n-k ;    
        }
        
        for( j=(k+1) ; j<=(a-k-1) ; j++){
                             mtr[j][k]= n-k ;
                             mtr[j][a-k]= n-k ;
            
        }  
    }
    
    for(i=0;i<=a;i++){
        for(j=0;j<=a;j++){
            
            printf("%d ",mtr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
