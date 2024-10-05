#include<stdio.h>
#define PI 3.1415
int main(){
    float rad,area;
    printf("\n enter the radius of circle:");
    scanf("\n %f",&rad);
    area=PI*rad*rad;
    printf("\n area of circle is:%f",area);
}