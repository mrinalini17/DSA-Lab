#include<stdio.h>

struct distance{
    int d1;
    int d2;
}s;
int pass(struct distance s){
    printf("Total distance = %d km",s.d1+s.d2);
}
int main(){
    printf("Enter distance 1 in Km: ");
    scanf("%d",&s.d1);
    printf("Enter distance 2 in Km: ");
    scanf("%d",&s.d2);
    pass(s);
}