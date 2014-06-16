#include "Exception.h"
#include "stdio.h"
#include "CException.h"

int divide(int x, int y)
{
	if(y == 0)
		//Throw(5);
		Throw(ERR_DIVIDE_BY_ZERO);
		
	return x/y;
}

int doSomethingWhichGeneratesException(int value)
{
	if(value == 25)
		Throw(ERR_DONT_LIKE_THAT_VALUE);
	printf("Ok. Value %d look just fine.\n", value);
}

int doSomethingWhichGeneratesNoException(int value)
{
	doSomethingWhichGeneratesException(value);
	printf("Hehehe... got through!\n");
}

int a()
{
	printf("entering a().\n");
	Throw(ERR_I_TRY_2_B_NASTY);
	printf("existing a().\n");
}

int z()
{
	CEXCEPTION_T err;
	int isErr = 0;
	
	printf("entering z().\n");
	Try
	{
		a();
	}Catch(err)
	{
		isErr = 1;
	}
	
	printf("existing z().\n");
	if(isErr)
		Throw(err);
}

int y()
{
	printf("entering y().\n");
	z();
	printf("existing y().\n");
}