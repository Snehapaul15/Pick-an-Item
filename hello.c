#include<stdio.h>
main()
{
printf("Pick an item:   \n1.Pizza, Rs 239\n2.Burger,Rs129\n3.Pasta,Rs129\n4.French Fries,Rs 99\n5.Sandwich,Rs 149");
int choice=0;
scanf("%d",&choice);
switch(choice)
{
case 1: 
printf("Food Item- Pizza \nRs239");
break;
case 2:
printf("Food Item- Burger \nRs129");
break;
case 3:
printf("Food Item- Pasta\nRs129");
break;
case 4:
printf("Food Item- French Fries \nRs99");
break;
case 5:
printf("Food Item- Sandwich \nRs149");
break;
default: ptintf("Invalid choice");
}
}
