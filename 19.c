//Pogram to display 1 to  5 o screen
//Output 1 2 3 4 5

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    
    for(iCnt =1;iCnt<=iNo;iCnt++);
        {
            printf("%d\n",iCnt);
    
    }
    
}

int main()
{
    int iValue =0;
    printf("ENter the numbeer\n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}