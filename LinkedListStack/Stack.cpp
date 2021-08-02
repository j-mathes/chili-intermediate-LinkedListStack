#include "Stack.h"

Stack::Stack(const Stack& source)
{
	*this = source;
}

Stack& Stack::operator=(const Stack& source)
{
	if (!Empty())
	{
		delete pTop_;
		pTop_ = nullptr;
	}

	if (!source.Empty())
	{
		pTop_ = new Element(*source.pTop_);
	}
	return *this;
}

Stack::~Stack()
{
	delete pTop_;
	pTop_ = nullptr;
}

void Stack::Push(int value)
{
	pTop_ = new Element(value, pTop_);
}

int Stack::Pop()
{
	if (!Empty())
	{
		const int tempValue = pTop_->Value();
		auto pOldTop = pTop_;
		pTop_ = pTop_->Disconnect();
		delete pOldTop;
		return tempValue;
	}
	else
	{
		return -1;
	}
}

int Stack::Size() const
{
	if (!Empty())
	{
		return pTop_->CountElements();
	} 
	else
	{
		return 0;
	}
}

bool Stack::Empty() const
{
	return pTop_ == nullptr;
}
