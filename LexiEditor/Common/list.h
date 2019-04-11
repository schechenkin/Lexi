/*
#ifndef LIST_H
#define LIST_H

template <class Item>
class List
{
private:
	static const long DEFAULT_LIST_CAPACITY = 100;
public:
	List(long size = DEFAULT_LIST_CAPACITY);
	List(List&);
	~List();
	List& operator=(const List&);

	long Count() const;
	Item& Get(long index) const;
	Item& First() const;
	Item& Last() const;
	bool Includes(const Item&) const;

	void Append(const Item&);
	void Prepend(const Item&);

	void Remove(const Item&);
	void RemoveLast();
	void RemoveFirst();
	void RemoveAll();

	Item& Top() const;
	void Push(const Item&);
	Item& Pop();
};

#endif // LIST_H
*/