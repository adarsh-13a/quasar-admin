//Write a program using function to find average of three numbers.

#include<stdio.h>

float avg(int x,int y,int z);

int main(){
    int a, b, c;
    float val;
    printf("ENTER THREE NUMBERS TO FIND THEIR AVERAGE: \n");
    printf("\n Number 1: ");
    scanf("%d",&a);

    printf("\n Number 2: ");
    scanf("%d",&b);

    printf("\n Number 3: ");
    scanf("%d",&c);

    val = avg(a,b,c);
    printf("The average of these three numbers is: %f", val);


}

float avg(int x, int y, int z){
    return (x+y+z)/3.0;
}


