#include <stdio.h>
#include <conio.h>


typedef struct Emp

{

	 float salary;
	 float deduction;
	 float bonus;
	 double netSalary;


	 int age;
	 unsigned int id;
	 char aName[10];

}Emp;

static void forcefloat (float *p)
{
	float f = *p;
	forcefloat (&f);
}


void main (void)

{
	int row = 2, col =2;


	 Emp dahroug;
	 clrscr();
	 printf ("---------------- struct lab ----------------");

	 gotoxy(row,col);
	 printf("name: ");

	 flushall();

	 gets(dahroug.aName);

	 gotoxy(row,col+2);
	 printf ("age: ");
	 flushall();
	 scanf("%d",&dahroug.age);

	 gotoxy(row,col+4);
	 printf ("ID: ");
	 flushall();
	 scanf("%u",&dahroug.id);


	 gotoxy(row+20,col);
	 printf ("salary: ");
	 flushall();
	 scanf("%f",&dahroug.salary);

	 gotoxy(row+20,col+2);
	 printf ("deduction: ");
	 flushall();
	 scanf("%f",&dahroug.deduction);

	 gotoxy(row+20,col+4);
	 printf ("bonus: ");
	 flushall();
	 scanf("%f",&dahroug.bonus);

	  col += 10;

	 gotoxy(row,col);
	 printf("name: %s", dahroug.aName);



	 gotoxy(row,col+2);
	 printf ("age: %d", dahroug.age);


	 gotoxy(row,col+4);
	 printf ("ID: %d", dahroug.id);


	 dahroug.netSalary = dahroug.salary - dahroug.deduction + dahroug.bonus;

	 gotoxy(row+20,col+2);
	 printf ("net salary: %lf",dahroug.netSalary);


	 getch();


}