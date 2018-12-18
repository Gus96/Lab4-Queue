#pragma once
template <class T>
class TQueue
{
private:
	int Size, MaxSize, first, last;
	T* mas;
public:
	TQueue(int MS = 10);
	TQueue(const TQueue <T> &queue);
	~TQueue();
	bool IsFull() const;
	bool IsEmpty() const;
	void Push(const T elem);
	T Pop();
	T FirstElem() const;
	T LastElem()const;
	void Clear();
	int GetMaxSize();
	int GetSize();
	int GetFirst();

};

template <class T>
TQueue <T>::TQueue(int MS)
{
	if (MS <= 0)///////
		throw MS;
	MaxSize = MS;
	mas = new T[MS];
	Size = 0;
	first = 0;
	last = -1;
}
template <class T>
TQueue <T> ::TQueue(const TQueue <T> & queue)
{
	MaxSize = queue.MaxSize;
	Size = queue.Size;
	first = queue.first;
	last = queue.last;
	mas = new T[MaxSize];
	for (int i = first; i <= last; i++)
		mas[i] = queue.mas[i];
}
template <class T>
TQueue<T> ::~TQueue()
{
	delete[] mas;
}
template <class T>
bool  TQueue <T>::IsEmpty() const
{
	if (Size == 0)
		return true;
	else
		return false;
}
template <class T>
bool TQueue <T> ::IsFull() const
{
	if (Size == MaxSize)
		return true;
	else
		return false;
}
template <class T>
void TQueue <T>::Push(const T elem)
{
	if (this->IsFull())
		throw "Queue is full";
	if (last == MaxSize - 1)
		last = 0;
	else
		last++;
	mas[last] = elem;
	Size++;
}
template <class T>
T TQueue <T> ::Pop()
{
	if (this->IsEmpty())
		throw "Queue is empty";
	int tmp = first;
	first++;
	first = first % MaxSize;
	Size--;
	return mas[tmp];
}
template <class T>
T TQueue <T>::FirstElem() const
{
	if (IsEmpty())
		throw "Queue is empty";
	return mas[first];
}
template <class T>
T TQueue <T>::LastElem() const
{
	return mas[last];
}
template <class T>
void TQueue<T>::Clear()
{
	delete[] mas;
	mas = new T[MaxSize];//////
	first = 0;
	last = -1;
	Size = 0;

}
template <class T>
int TQueue<T>::GetMaxSize()
{
	return MaxSize;
}
template <class T>
int TQueue<T>::GetSize()
{
	return Size;
}
template <class T>
int TQueue<T>::GetFirst()
{
	return first;
}