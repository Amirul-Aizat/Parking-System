#include <stdio.h>

int main() {
    
    int hours, x, y;
    float rate;
    
  
    printf("Enter the number of hours: ");
    scanf("%d",&hours);
    
    if(hours>8){
        
        rate= 15;
        printf("Your parking rate is RM %.2f",rate);
        
    } else if (hours>1){
        
        x= hours-4;
        y= hours-(x+1);
        rate= 1 + (2.5*y)+ (3.00*x);
        printf("Your parking rate is RM %.2f",rate);
        
    }else if(hours<=0){
        
       printf("Number of hours should be greater than 0");
        
    }else{
        
        rate=1;
        printf("Your parking rate is RM %.2f",rate);
        
    }
    
    
    return 0;
}
