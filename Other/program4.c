#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RectArea
//  Description :   Used to calculate area of a rectangle
//  Input :         float, float
//  Output :        double
//
//////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;

}

//////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept width and height of reactangle from user
// And calculate its area (Area = width * height)
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f",&fValue1);

    printf("Enter height : ");
    scanf("%f",&fValue2);
    
    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %lf\n",dRet);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////
//
// Input  : 5.3   9.78
// Output : 51.834
//
//////////////////////////////////////////////////////////////////////////////////////