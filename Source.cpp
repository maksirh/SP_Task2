#include <iostream>
#include "calculator.h"
using namespace std;

int main() {

	cout << Calculator::ElementaryOperations('+', 2, 3) << endl;
	cout << Calculator::ElementaryOperations('-', 2, 3) << endl;

	return 0;
}