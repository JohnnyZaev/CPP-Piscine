//
// Created by Johnny Zaev on 14.07.2022.
//

#ifndef CPP_PISCINE_ARRAY_HPP
#define CPP_PISCINE_ARRAY_HPP

#include <iostream>

//*** NORMAL ARRAY ***
//template<typename T, size_t S>
//class Array
//{
//private:
//	T m_Data[S];
//public:
//	size_t Size() const { return S; }
//	T &operator[](size_t index) { return m_Data[index]; }
//	const T &operator[](size_t index) const { return m_Data[index]; }
//	T *Data() { return m_Data; }
//	const T *Data() const { return m_Data; }
//};

//*** SUBJECT ARRAY ***
template<typename T>
class Array
{
public:
	Array<T>(): m_Size(0), m_Data(NULL) {}

	Array<T>(unsigned int size): m_Size(size) { m_Data = new T[m_Size]; }

	~Array<T>()
	{
		if (Size() > 0)
			delete[] m_Data;
	}

	Array<T>( const Array<T> &other ) { *this = other; }

	Array<T>	&operator=( const Array<T> &other )
	{
		if (this == &other)
			return *this;
		if (this->m_Size > 0)
			delete [] m_Data;
		this->m_Size = other.Size();
		this->m_Data = new T[m_Size];
		for (unsigned int i = 0; i < Size(); i++)
			m_Data[i] = other[i];
		return *this;
	}

	unsigned int Size() const { return m_Size; }

	T &operator[](unsigned int index)
	{
		if (index >= Size() || index < 0)
			throw std::out_of_range("Index is out of range");
		return m_Data[index];
	}

	const T &operator[](unsigned int index) const
	{
		if (index >= Size() || index < 0)
			throw std::out_of_range("Index is out of range");
		return m_Data[index];
	}

	T *Data() { return m_Data; }

	const T *Data() const { return m_Data; }
private:
	unsigned int m_Size;
	T *m_Data;
};
#endif //CPP_PISCINE_ARRAY_HPP
