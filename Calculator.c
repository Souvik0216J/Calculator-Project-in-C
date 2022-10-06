// This Calculator Developed By Souvik Ghosh.
// Header Files.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// User input variables.
float a, b;
// Funcation Declarations.
void display();
void addition();
void subtraction();
void multiplication();
void division();
void square();
void root();
// Main Funcation.
int main()
{
	// This Variable's work to switch case statemets.
	int sw;
	// Infinite Loop
	while(1) 
	{
		display();
	
		printf("Enter Your Choose: ");
		scanf("%d",&sw);
	
		switch(sw)
		{
			case 0:
				exit(0);
				break;

			case 1:
				addition();
				break;

			case 2:
				subtraction();
			break;
			
			case 3:
				multiplication();
				break;

			case 4:
				division();
				break;

			case 5:
				square();	
				break;

			case 6:
				root();
				break;
			
			default:
				printf("Something is Wrong! Please Enter a Number (1 to 5).\n");
		    	printf("---------------------------------------------------------------\n");
				break;
		}
	}
	return 0;
}
// Print Welcome Screen Funcation Defination.
void display()
{
	system("cls");
	printf("This Calculator Developed By Souvik Ghosh in 03-02-2022.\n");
    printf("Choose Your Operation Which U Want To Calculate In This Calculator.\n");
    printf("-------------------------------------------------------------------\n\n");
    printf("1.Addition(+)\t\t2.Subtraction(-)\t\t3.Multiplication(x)\n");
	printf("4.Division(/)\t\t5.Square(^)\t\t\t6.Square Root(v)");
	printf("\n\t\t\t0.Exit\n");	
}
// Addition Funcation Defination.
void addition()
{
	system("cls");
	printf("*******You Choose Addition*******\n");
	printf("\nEnter Your First Number = ");
	scanf("%f",&a);
	printf("\nEnter Your Second Number = ");
	scanf("%f",&b);
	printf("\nYour Result Is = %g\n",a+b);	
	printf("-------------------------------------\n\n");
	system("pause");
}
// Substraction Funcation Defination.
void subtraction()
{
	system("cls");
	printf("*******You Choose Subtraction*******\n");
	printf("\nEnter Your First Number = ");
	scanf("%f",&a);
	printf("\nEnter Your Second Number = ");
	scanf("%f",&b);
	printf("\nYour Result Is = %g\n",a-b);
	printf("-------------------------------------\n\n");
	system("pause");
}
// Multiplication Funcation Defination.
void multiplication()
{
	system("cls");
	printf("*******You Choose Multiplication*******\n");
	printf("\nEnter Your First Number = ");
	scanf("%f",&a);
	printf("\nEnter Your Second Number = ");
	scanf("%f",&b);
	printf("\nYour Result Is = %g\n",a*b);
	printf("-------------------------------------\n\n");
	system("pause");
}
// Division Funcation Defination.
void division()
{
	system("cls");
	printf("*******You Choose Division*******\n");
	printf("\nEnter Your First Number = ");
	scanf("%f",&a);
	printf("\nEnter Your Second Number = ");
	scanf("%f",&b);
	if(b==0)
	{
		printf("\nSomething is Wrong! Math Eror.\n");
		printf("-------------------------------------\n\n");
	}   
	else
	{
		printf("\nYour Result Is = %g\n",a/b);
		printf("-------------------------------------\n\n");
	}
	system("pause");
}
// Square Funcation Defination.
void square()
{
	system("cls");
	printf("*******You Choose Square*******\n");
	printf("\nEnter Your Base Value = ");
	scanf("%f",&a);
	printf("\nEnter Your Power Value = ");
	scanf("%f",&b);
	printf("\nYour Result Is = %g\n",pow(a, b));  // x to the power y = pow(x, y)
	printf("-------------------------------------\n\n");
	system("pause");
			
}
// Root Funcation Defination.
void root()
{
	system("cls");
	printf("*******You Choose Root*******\n");
	printf("\nEnter Your Number Which U Want To Root = ");
	scanf("%f",&a);
	printf("\nYour Result Is = %g\n",sqrt(a));    
	printf("-------------------------------------\n\n");
	system("pause");
}
