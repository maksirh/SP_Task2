#include "calculator.h"

double Calculator::ElementaryOperations(char Op,double frst, double scnd)
{
	double resAct;
	if (Op == '*') {
		resAct = frst * scnd;
	}

	else if (Op == '/') {
		resAct = frst / scnd;
	}

	else if (Op == '+') {
		resAct = frst + scnd;
	}

	else if (Op == '-') {
		resAct = frst - scnd;
	}

	return resAct;
}
