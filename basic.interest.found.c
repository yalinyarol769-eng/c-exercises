#include <stdio.h>

double f1(double m, int i);
double f2(double m, int i);
double f3(double m, int i);



int main()
{
    double money, fa;
    int interest, month;
    
    printf("please enter your main money and monthly interest rate how many month will you stay (1 or 2 or 3): ");
    scanf("%lf%d%d",&money,&interest,&month);
    
    if(month == 1){
        fa = f1(money, interest);
    }
    else{
        if(month == 2){
            fa = f2(money, interest);
        }
        else{
            fa = f3(money, interest);
        }
    }
    
    printf("%d monthly earning interest: %.2f\n",month, fa);
    
    
    return 0;
}

double f1(double m, int i){
    double ta = (m * (i/100.0));
    return ta;
}

double f2(double m, int i){
    double ta1, ta2;
    ta1 = f1(m,i);
    ta2 = ta1 + f1(m + ta1,i);
    return ta2;
}

double f3(double m, int i){
    double ta1, ta2,ta3;
    ta1 = f1(m,i);
    ta2 = ta1 + f1(m + ta1,i);
    ta3 = ta2 + f1(m + ta2,i);
    return ta3;
}


