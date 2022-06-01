#pragma once
#include <iostream>
using namespace std;
template <class T>
class Vector
{
private:
	T* v;
	int c;
	int max_count;
public:
	Vector();
	Vector(int max_elem); //sets max_count to max_elem
	void swap(int& a, int& b);
	void push(T x);
	T pop();
	bool remove(int index);
	bool insert(int index, T elem);
	void sort(bool (*fct)(T&, T&) = nullptr);
	T& get(int index);
	void set(int index, T elem);
	int count();
	void print();
	void resize();
	int firstIndexOf(T to_find, bool(*fct)(T&, T&) = nullptr);

};

template<class T>
inline Vector<T>::Vector()
{
	c = 0;
	v = nullptr;
}

template<class T>
inline Vector<T>::Vector(int max_elem)
{
	c = 0;
	max_count = max_elem;
	v = new T[max_elem];
}

template<class T>
inline void Vector<T>::swap(int& a, int& b)
{
	int val;
	val = a;
	a = b;
	b = val;
}

template<class T>
inline void Vector<T>::push(T x)
{
	if (c < max_count)
		v[c++] = x;
	else
	{
		resize();
		v[c++] = x;
	}
}

template<class T>
inline T Vector<T>::pop()
{
	if (c != 0)
		return v[c - 1];
}

template<class T>
inline bool Vector<T>::remove(int index)
{
	if (index > c)
		return false;
	for (int i = index + 1; i < c - 1; i++)
			v[i] = v[i++];
	c--;
	return true;
}

template<class T>
inline bool Vector<T>::insert(int index, T elem)
{
	if (index > c)
		return false;
	c++;
	for (int i = c; i > index; i--)
		v[i] = v[i - 1];
	v[index] = elem;
	return true;
}

template<class T>
inline void Vector<T>::sort(bool(*fct)(T&, T&))
{
	if (fct == nullptr)
	{
		for (int i = 0; i < c - 1; i++)
			for (int j = i + 1; j < c; j++)
				if (v[i] > v[j])
					swap(v[i], v[j]);
	}
	else
	{
		for (int i = 0; i < c - 1; i++)
			for (int j = i + 1; j < c; j++)
				if (fct(v[i], v[j]) == true)
					swap(v[i], v[j]);
	}
}

template<class T>
inline T& Vector<T>::get(int index)
{
	if (index < c)
		return v[index - 1];
}

template<class T>
inline void Vector<T>::set(int index, T elem)
{
	if (index < c)
		v[index - 1] = elem;
}

template<class T>
inline int Vector<T>::count()
{
	return c;
}

template<class T>
inline void Vector<T>::print()
{
	for (int i = 0; i < c; i++)
		cout << v[i] << " ";
}

template<class T>
inline void Vector<T>::resize()
{
	max_count *= 2;
	v = new T[max_count];
}

template<class T>
inline int Vector<T>::firstIndexOf(T to_find, bool(*fct)(T&, T&))
{
	if (fct == nullptr)
	{
		for (int i = 0; i < c; i++)
			if (v[i] == to_find)
				return i + 1;
	}
	else
		for (int i = 0; i < c; i++)
			if (fct(v[i], to_find) == true)
				return i + 1;
	return -1;
}
