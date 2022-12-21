#include <iostream>
#include <assert.h>
using namespace std;
template<class T>
class List {
	T* data;
	int n;
public:
	List(T* = nullptr, int = 0);
	List(int);
	List(const List&);
	~List();
	void Erase();
	T& operator[](const int&);
	int Length() const;
	void Reallocate(int);
	void Resize(int);
	void Insert(const T&, int);
	void Remove(int);
	void Remove(int*, int);
	void InsertFirst(const T&);
	void Add(const T&);
	template<class T> friend wostream& operator<<(wostream&, const List<T>&);
	template<class T> friend wofstream& operator<<(wofstream&, const List<T>&);
};

