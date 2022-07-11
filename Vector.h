#pragma once

class Vector
{
public:
	Vector(); 
	Vector(unsigned int capacity); 
	Vector(const Vector& old); 
	virtual ~Vector(); 

	void reserve(unsigned int capacity); 

	
	unsigned int capacity() const;
	unsigned int size() const;
	bool empty() const;

	void insert(int value, unsigned int index); 
	void remove(unsigned int index); 
	void clear(); 
	void push_back(const int& value); 


	int& operator[](unsigned int position); 
	Vector& operator=(const Vector& other); 

	
	void copyTo(Vector& other, unsigned int index); 
	void remove(unsigned int from, unsigned int to); 
	void pop_back(); 
	void bubbleSort(); 

private:
	unsigned int _size;
	unsigned int _capacity;
	int* _data;
};


