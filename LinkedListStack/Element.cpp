#include "Element.h"

void Element::SetData(const int d)
{
	data_ = d;
}

int Element::Data() const
{
	return data_;
}

void Element::SetNext(Element* pElement)
{
	pNext_ = pElement;
}

Element* Element::Next() const
{
	return pNext_;
}
