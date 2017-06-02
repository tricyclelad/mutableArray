#pragma once

/*Requirements for the mutable array or Vector to be valid.
-------------------------------------------------------------
Operation			Speed
=========================
vector				O(1)
vector(n, x)		O(n)
size()				O(1)
v[i]				O(1)
push_back(x)		O(1)
pop_back			O(1)
insert				O(n)
erase				O(n)
front, back			O(1)
=========================
-------------------------------------------------------------*/
class mutableArray
{
public:
	mutableArray();
	~mutableArray();
	int size(); //returns the current number of elements of the mutable array
	int capacity(); //returns the maximum number of elements of the mutable array
	bool is_empty(); //returns true if array is empty, false if not.
	void push_back(); //adds an element to the end of the vector.
	void insert(); //insert an element at the index, shifts that index's value and trailing elements.
	void at(int index); //returns item at given index, error checks for index out of bounds
	void prepend(int element); //insert item at 0 and shift trailing indexes
	void pop(); //remove from end, return value
	void deleteAt(int index); //delete item at index, shifting all trailing elements left
	void remove(int item); //looks for a value and removes that index holding. Allows multiple removals.
	int find(int item); //looks for a value and returns the first index with that value, returns -1 if not found
private:
	void resize(int new_capacity); //When capacity is reached, double the capacity of the array.
								   //When popping an item, if size is 1/4 capacity, halve the capacity of the array.


};

