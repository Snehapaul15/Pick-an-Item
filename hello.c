#include<stdio.h>
main()
{
printf("Pick an item:   \n1.Pizza, Rs 239\n2.Burger,Rs129\n3.Pasta,Rs129\n4.French Fries,Rs 99\n5.Sandwich,Rs 149");
int choice=0;
scanf("%d",&choice);
switch(choice)
{
case 1: 
printf("You picked Pizza");
break;
case 2:
printf("You picked Burger");
break;
case 3:
printf("You picked Pasta");
break;
case 4:
printf("You picked French Fries");
break;
case 5:
printf("You picked Sandwich");
break;
default: ptintf("Invalid choice");
}
}
