#pragma once
#include <iostream>
template <class T>
class Vector
{
	T* v;
	int cnt;
	int max_count;
public:
	Vector();
	Vector(int x);
	void swap(int& a, int& b);
	void push(T x);
	T pop();
	bool remove(int);
	bool insert(int index, T element);
	void sort (bool (*fct)(T&, T&) = nullptr);
	T& get(int index) const;
	void set(int index, T element);
	int count();
	void print();
	void resize();
	int firstIndexOf(T to_find, bool (*fct)(T&, T&) = nullptr);
};

template<class T>
inline Vector<T>::Vector()
{
	cnt = 0;
	v = nullptr;
}

template<class T>
inline Vector<T>::Vector(int x)
{
	cnt = 0;
	v = new T[x];
	max_count = x;
}

template<class T>
inline void Vector<T>::swap(int& a, int& b)
{
	int aux;
	aux = a;
	a = b;
	b = aux;
}

template<class T>
inline void Vector<T>::push(T x)
{
	if (cnt < max_count)
		v[cnt++] = x;
	else
	{
		resize();
		v[cnt++] = x;
	}
}

template<class T>
inline T Vector<T>::pop()
{
	if (cnt)
		return v[cnt - 1];
}

template<class T>
inline bool Vector<T>::remove(int x)
{
	if (x > cnt)
		return false;
	for (int i = x + 1; i < cnt - 1; i++)
		v[i] = v[i + 1];
	cnt--;
	return true;
}

template<class T>
inline bool Vector<T>::insert(int index, T element)
{
	if (index > count)
		return false;
	cnt++;
	for (int i = cnt; i > index; i--)
		v[i] = v[i - 1];
	v[index] = element;
	return true;
}

template<class T>
inline void Vector<T>::sort(bool(*fct)(T&, T&))
{
	if (fct == nullptr)
	{
		for (int i = 0; i < cnt - 1; i++)
			for (int j = i + 1; j < cnt; j++)
				if (v[i] > v[j])
					swap(v[i], v[j]);

	}
	else
	{
		for (int i = 0; i < cnt - 1; i++)
			for (int j = i + 1; j < cnt; j++)
				if (fct(v[i], v[j]) == true)
					swap(v[i], v[j]);
	}
}

template<class T>
inline T& Vector<T>::get(int index) const
{
	if (index < cnt)
		return v[index - 1];
}

template<class T>
inline void Vector<T>::set(int index, T element)
{
	if (index < cnt)
		v[index - 1] = element;
}

template<class T>
inline int Vector<T>::count()
{
	return cnt;
}

template<class T>
inline void Vector<T>::print()
{
	for (int i = 0; i < cnt; i++)
		std::cout << v[i] << " ";
}

template<class T>
inline void Vector<T>::resize()
{
	max_count = max_count * 2;
	v = new T[max_count];
}

template<class T>
inline int Vector<T>::firstIndexOf(T to_find, bool(*fct)(T&, T&))
{
	if (fct == nullptr)
	{
		for (int i = 0; i < cnt; i++)
			if (v[i] == to_find)
				return i + 1;
	}
	else
	{
		for (int i = 0; i < count; i++)
			if (fct(v[i], to_find) == true)
				return i + 1;

	}
	return -1;
}