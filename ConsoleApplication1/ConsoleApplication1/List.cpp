#include "List.h"
template<class T>
List<T>::List(T* data, int n) {
    this->data = data;
    this->n = n;
}
template<class T>
List<T>::List(int Length) : n(Length) {
    assert(this->n >= 0);
    if (Length > 0) this->data = new T[this->n];
    else this->data = nullptr;
}
template<class T>
List<T>::List(const List& list) {
    this->data = list.data;
    this->n = list.n;
}
template<class T>
List<T>::~List() {
    if (this->data != nullptr) delete[] this->data;
}
template<class T>
void List<T>::Erase() {
    if (this->data != nullptr) delete[] this->data;
    this->data = nullptr;
    this->n = 0;
}
template<class T>
T& List<T>::operator[](const int& index) {
    assert(index >= 0 && index < this->n);
    return this->data[index];
}
template<class T>
int List<T>::Length() const {
    return this->n;
}
template<class T>
wostream& operator<<(wostream& o, const List<T>& v) {
    for (int i = 0; i < v.n; i++) {
        o << v.data[i];
    }
    return o;
}
template<class T>
wofstream& operator<<(wofstream& o, const List<T>& v) {
    for (int i = 0; i < v.n; i++) {
        o << v.data[i];
    }
    return o;
}
template<class T>
void List<T>::Reallocate(int newLength) {
    Erase();
    if (newLength <= 0)return;
    this->data = new T[newLength];
    this->n = newLength;
}
template<class T>
void List<T>::Resize(int newLength) {
    if (newLength == this->n) return;
    if (newLength <= 0) {
        Erase(); return;
    }
    T* data2 = new T[newLength];
    int lencopy = (newLength > n) ? n : newLength;
    for (int i = 0; i < lencopy; i++) {
        data2[i] = this->data[i];
    }
    delete[] this->data;
    this->data = data2;
    this->n = newLength;
}
template<class T>
void List<T>::Insert(const T& v, int index) {
    assert(index >= 0 && index <= this->n);
    T* data2 = new T[this->n + 1];
    for (int i = 0; i < index; i++) {
        data2[i] = this->data[i];
    }
    data2[index] = v;
    for (int i = index; i < this->n; i++) data2[i + 1] = this->data[i];
    delete[] this->data;
    this->data = data2;
    this->n++;
}
template<class T>
void List<T>::InsertFirst(const T& v) {
    Insert(v, 0);
}
template<class T>
void List<T>::Add(const T& v) {
    Insert(v, this->n);
}
template<class T>
void List<T>::Remove(int index) {
    assert(index >= 0 && index < this->n);
    if (this->n == 1) {
        Erase();
        return;
    }
    T* data2 = new T[this->n - 1];
    for (int i = 0; i < index; i++) data2[i] = this->data[i];
    for (int i = index; i < this->n - 1; i++) data2[i] = this->data[i + 1];
    delete[] this->data;
    this->data = data2;
    this->n--;
}
template<class T>
void List<T>::Remove(int* mang, int soLuong) {
    if (this->n <= soLuong) {
        Erase();
        return;
    }
    T* data2 = new T[n - soLuong]; int dem = 1;
    for (int i = 0; i < mang[0]; i++) data2[i] = this->data[i];
    for (int i = 0; i < soLuong - 1; i++) {
        for (int j = mang[i] + 1; j < mang[i + 1]; j++) {
            data2[j - dem] = this->data[j];
        }
        dem++;
    }
    for (int i = mang[soLuong - 1] + 1; i < this->n; i++) data2[i - dem] = this->data[i];
    delete[] this->data; this->data = data2; this->n = n - soLuong;
}

