/*  9.Write a program in C to find the net salary of an employee where the basic salary will be
accepted as input through keyboard. For calculation of net salary you are to consider the
following:
Gross Salary = Basic Salary + HRA + DA, where
HRA = 30 % of Basic Salary, DA = 119 % of Basic Salary,
Deductions are as follows:
PF = 12 % of Basic Salary, PTAX = 200.
Net Salary = Gross Salary – Deductions .*/
#include<stdio.h>
int main()
{
    float basic_sal,gross_sal=0,hra,da,pf,ptax,net_sal=0,deducn=0;
    printf("\n please input the basic salary : ");
    scanf("%f",&basic_sal);
    //gross salary
    hra=0.3*basic_sal;
    da=1.19*basic_sal;
    gross_sal+=basic_sal+hra+da;
    //deductions
    pf=0.12*basic_sal;
    ptax=200;
    deducn=pf+ptax;
    //net salary
    net_sal=gross_sal-deducn;
    printf("\n the in hand salary/net salary is= %0.2f",net_sal);
    return 0;
} 