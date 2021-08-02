#pragma once
class Element
{
public:
	Element() = default;
	Element(int value, Element* pNext);
	Element(const Element& source);
	Element* Disconnect();
	int CountElements() const;
	void SetData(const int d);
	int Value() const;
	void SetNext(Element* pElement);
	Element* Next() const;
	~Element();

private:
	int value_{ 0 };
	Element* pNext_{ nullptr };
};

