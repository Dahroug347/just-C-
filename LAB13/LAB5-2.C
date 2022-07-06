#include <stdio.h>
#include <conio.h>

int Rpower (int base, int n);
int fact (int n);
int Rfact (int n);
int Rfibonacci (int n);
int fibonacci (int n);
int power (int operand1, int  operand2);

int main (void)

{

	int xBase;
	int xPower;
	int xFact;
	int xFibo;

	clrscr();

	printf("___________________ power - factorial - fibonacci lab __________________");
	
	printf("\n\n power function in recursive and normal function");
	printf("\n please insert base: ");
	scanf ("%d", &xBase);
	printf("\n please insert power: ");
	scanf ("%d", &xPower);
	printf("\n function power result = %d", power (xBase, xPower));
	printf("\n recursive function power result = %d", Rpower (xBase, xPower));

	printf("\n___________________________________________________");

	printf("\n factorial function in recursive and normal function");
	printf("\n please insert number: ");
	scanf ("%d", &xFact);
	printf("\n function factorial result = %d", fact(xFact) );
	printf("\n recursive function factorial result = %d", Rfact (xFact));

	printf("\n___________________________________________________");

	printf("\n fibonacci function in recursive and normal function");
	printf("\n please insert number: ");
	scanf ("%d",&xFibo);
	printf("\n function fibonacci result = %d", fibonacci(xFibo) );
	printf("\n recursive function fibonacci result = %d", Rfibonacci(xFibo));

	getch();

	return 0;
}

int power(int operand1, int operand2)
{

  int base = operand1;
  if (operand2 == 0)
  {
	  return 1;
  }
	
  while (operand2 != 1)
  {
      operand1 = operand1*base;
      --operand2;
  }
  return operand1;
}


int Rpower (int base, int n)
{

 if (n==1)
 return base;

 else
 return base*(Rpower(base,(n-1)));

}


int fact (int n)
{
  int i;

  for (i = (n-1); i>0; i--)
  {
	n*= i;
  }

  return n;

}

int Rfact (int n)

{
  if (n == 1)
  return n;

  else
  return n*Rfact(n-1);
}

int Rfibonacci (int n )

{

	if (n == 0 || n == 1)
	{
	   return  0;
	}
	else if (n == 2)
	{
	   return  1;
	}

    return ( Rfibonacci (n-1) + Rfibonacci (n-2));

}

int fibonacci (int n)
{
    int counter;
    int iteration, term_1 = 0;
    int term_2 = 1;
    if (n == 2)
    {
        counter = 1;
    }
    else
    {
        counter = n - 2;
    }
    n = 0;
    for (iteration=0; iteration < counter; iteration++)
    {
       n = term_1 + term_2;
       term_1 =  term_2;
       term_2 = n;
    }
    return n;
}

