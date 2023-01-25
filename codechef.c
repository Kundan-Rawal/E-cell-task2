#include <stdio.h>


int main(){
 int T,A,B,C;
 printf("enter T");
 scanf("%d",&T);
 
 for(int t=1;t<=T;t++){
    printf("enter the number A");
 scanf("%d",&A);
 printf("enter the number B");
 scanf("%d",&B);
 printf("enter the number C");
 scanf("%d",&C);

 
    if(A>B){
        if(B>C){printf("%d",B);}
        else {if(A>C){printf("%d",C);}
            else {printf("%d",A);}}
    }
    else{
        if(A>C){printf("%d",A);}
        else {if(B>C){printf("%d",C);}
              else{printf("%d",B);}}

	
 return 0;
}}}

