#include "Element.h"

Element::Element(int value, Element* pNext)
	:
	value_(value),
	pNext_(pNext)
{

}

Element::Element(const Element& source)
	:
	value_(source.value_)
{
	if (source.pNext_ != nullptr)
	{
		pNext_ = new Element(*source.pNext_);
	}
}

Element* Element::Disconnect()
{
	auto pTemp = pNext_;
	pNext_ = nullptr;
	return pTemp;
}

int Element::CountElements() const
{
	if (pNext_ != nullptr)
	{
		return pNext_->CountElements() + 1;
	}
	else
	{
		return 1;
	}
}

void Element::SetData(const int d)
{
	value_ = d;
}

int Element::Value() const
{
	return value_;
}

void Element::SetNext(Element* pElement)
{
	pNext_ = pElement;
}

Element* Element::Next() const
{
	return pNext_;
}

Element::~Element()
{
	delete pNext_;
	pNext_ = nullptr;
}
