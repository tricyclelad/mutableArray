#include "mutableArray.h"
#include <iostream>
#include <assert.h>


//public member functions
mutableArray::mutableArray(int n)
{
	vSize = 0;
	vCapacity = n;
	vArray = new int[n];

}


mutableArray::~mutableArray()
{
}



bool mutableArray::is_empty()
{
	if (vSize == 0)
		return true;
	else
		return false;
}

void mutableArray::push_back(int item)
{
	if (vSize == vCapacity)
		{
		if (vCapacity == 0)
			resize(1, false);			//set capacity to 1 and do not copy to new array
		else
			resize(2 * vCapacity, true);	
										//double the capacity and copy
		}
	// add item to the list, and update the size
	vArray[vSize] = item;
	vSize++;
}

void mutableArray::insert()
{

}

/*void mutableArray::at(int index)
{
	**no longer needed**
}
*/

void mutableArray::prepend(int element)
{

}

void mutableArray::pop()
{

}

void mutableArray::deleteAt(int index)
{

}

void mutableArray::remove(int item)
{

}

int mutableArray::find(int item)
{
	return 0;
}

int & mutableArray::operator[](unsigned int i)
{
	return vArray[i];
}
//private member functions
void mutableArray::resize(int new_capacity, bool copy)
{
	int *newArray;

	//Create a new dynamic array with new_capacity

	newArray = new int[new_capacity];
	if (newArray == 0)
		std::cout << "Memory allocation error" << std::endl;
	
	//if copy is true, copy elements from the old list to the new list
	if (copy)
		for (int i = 0; i < vSize; i++)
			newArray[i] = vArray[i];

	//delete old array unless it is NULL and empty
	if (vArray != nullptr)
		delete [] vArray;

	//set vArray to the value newArray and update the capacity
	vArray = newArray;
	vCapacity = new_capacity;
}

