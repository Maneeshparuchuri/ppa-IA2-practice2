#include <stdio.h>
void input(float base, float height);
{ 
  printf("enter the base,height values: ");
  scanf("%f%f", height,base);
}
void find_area(float base,float height,float*area);
{
  *area=(base*height)/2;
}
void output(float base,float height,float*area);
{
  printf("area of %f*%f is %f\n",base,height,*area);
}
int main()
{
  float base,height,*area;
    printf("enter the base,height values\n");
    scanf("%f%f",&base,&height);
    *area = ((base+height)/2);
    printf("the area of trinagle =%f",*area);
    return 0;
}