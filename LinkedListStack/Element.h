#pragma once
class Element
{
public:
	void SetData(const int d);
	int Data() const;
	void SetNext(Element* pElement);
	Element* Next() const;

private:
	int data_{ 0 };
	Element* pNext_{ nullptr };
};

