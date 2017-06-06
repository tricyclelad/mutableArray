#include <iostream>
#include "mutableArray.h"

using namespace std;

int main(int argc, char* argv[]) {

	mutableArray A;

	for (int i = 0; i < A.capacity(); i++)
		A.push_back(i);
	
	for (int i = 0; i < A.size(); i++)
		cout << A[i] << endl;


	return 0;
}