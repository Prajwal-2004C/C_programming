#include<stdio.h>

float Sum(float a, float b)
{
    float Output = 0;
    Output = a + b;
    return Output;
}

float Sub(float a, float b)
{
    float Output = 0;
    Output = a - b;
    return Output;
}

float Mult(float a, float b)
{
    float Output = 0;
    Output = a * b;
    return Output;
}

float Div(float a, float b)
{
    float Output = 0;
    Output = a / b;
    return Output;
}

int main()
{
    float No1 = 0;
    float No2 = 0;
    int No4 = 0;

    printf("Enter first number\n");
    scanf("%f",&No1);
    printf("Enter the second number\n");
    scanf("%f",&No2);

    char Ops[15] = {'0'};
    printf("Which operation do you want to perform?\n");
    scanf("%s",&Ops);

    //printf("%s\n",Ops);

    if(strcmp(Ops, "Addition") == 0)
    {
        float No3 = Sum(No1, No2);
        printf("Addition is %f\n",No3);
    }

    else if(strcmp(Ops, "Multiplication") == 0)
    {
        float No3 = Mult(No1, No2);
        printf("Multiplication  is %f\n",No3);
    }

    else if(strcmp(Ops, "Division") == 0)
    {
        float No3 = Div(No1, No2);
        printf("Division is %f\n",No3);
    }

    else if(strcmp(Ops, "Subtraction") == 0)
    {
        float No3 = Sub(No1, No2);
        printf("Subtraction is %f\n",No3);
    }

    else
    {
        printf("Please enter valid operation or check the spelling\n");
    }

    printf("For repeat operation, press 1\nTo exit, press 0\n");
    scanf("%d",&No4);
    
    if(No4 == 1)
    {
        main();
    }
    else
    {
        return 0;
    }

}