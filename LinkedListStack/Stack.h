#pragma once
#include "Element.h"

class Stack
{
public:
	Stack() = default;
	Stack(const Stack& source);
	~Stack();
	void Push(int value);
	int Pop();
	int Size() const;
	bool Empty() const;
	Stack& operator=(const Stack& source);
private:
	Element* pTop_ = nullptr;
};