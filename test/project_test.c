#include "project.h"
#include "ctest.h"
#include <iostream>
#include <stdio.h>


CTEST(wonQ,Xcount)
{   
    
	const int result = wonQ('X');
	const int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(wonQ,2count)
{     
    
	const int result = wonQ('2');
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(wonQ,xcount)
{     
    
	const int result = wonQ('x');
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(wonQ,5count)
{     
    
	const int result = wonQ('5');
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(wonQ,1count)
{      
    
	const int result = wonQ('1');
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(wonQ,0count)
{     
    
	const int result = wonQ('0');
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(wonQ,Wcount)
{    

	const int result = wonQ('W');
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}
