#include <stdio.h>
#include <conio.h>


typedef struct Emp

{

	 float salary;
	 float deduction;
	 float bonus;
	 float netSalary;


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
	Emp employees[5];
	int i;
	int row = 2, col =2;


	 clrscr();
	 printf ("---------------- array of structs lab ----------------");
	  for (i = 0; i<5; i++)
	 {
	 gotoxy(row,col);
	 printf("employee %d name: ", (i+1));

	 gotoxy(row,col+2);
	 printf("employee %d ", (i+1));
	 printf ("age: ");


	 gotoxy(row,col+4);
	 printf("employee %d ", (i+1));
	 printf ("ID: ");



	 gotoxy(row+40,col);
	 printf("employee %d ", (i+1));
	 printf ("salary: ");


	 gotoxy(row+40,col+2);
	 printf("employee %d ", (i+1));
	 printf ("deduction: ");


	 gotoxy(row+40,col+4);
	 printf("employee %d ", (i+1));
	 printf ("bonus: ");


	 gotoxy(row+17,col);
	 flushall();

	 gets(employees[i].aName);

	 gotoxy(row+17,col+2);

	 flushall();
	 scanf("%d",&employees[i].age);

	 gotoxy(row+17,col+4);
	 flushall();
	 scanf("%u",&employees[i].id);


	 gotoxy(row+62,col);
	 flushall();
	 scanf("%f",&employees[i].salary);

	 gotoxy(row+62,col+2);
	 flushall();
	 scanf("%f",&employees[i].deduction);

	 gotoxy(row+62,col+4);;
	 flushall();
	 scanf("%f",&employees[i].bonus);

	 clrscr();
	 }




	  row = 5;
	  col = 1;

	for (i = 0; i<5; i++)
	{

		if (i == 4)
		{
		col = 1;
		row = 50;
		gotoxy (row,col);
		printf("employee %d",(i+1));
		gotoxy(row,col+1);
		printf("name: %s", employees[i].aName);



		 gotoxy(row,col+2);
		 printf ("age: %d", employees[i].age);


		 gotoxy(row,col+3);
		 printf ("ID: %u", employees[i].id);


		 employees[i].netSalary = employees[i].salary - employees[i].deduction + employees[i].bonus;

		 gotoxy(row,col+4);
		 printf ("net salary: %f",employees[i].netSalary);
		}

		else
		{

		gotoxy (row, col);
		printf("employee %d",(i+1));
		gotoxy(row,col+1);
		printf("name: %s", employees[i].aName);



		 gotoxy(row,col+2);
		 printf ("age: %d", employees[i].age);


		 gotoxy(row,col+3);
		 printf ("ID: %u", employees[i].id);


		 employees[i].netSalary = employees[i].salary - employees[i].deduction + employees[i].bonus;

		 gotoxy(row+15,col+2);
		 printf ("net salary: %f",employees[i].netSalary);


		 col+=5;
		 }
	}



	 getch();


}

