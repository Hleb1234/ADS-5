#include <cassert>
 
template<typename T>
class TPQueue
{
	{
T data;
ITEM* next;

};
public:
TPQueue() :head(nullptr), tail(nullptr) {}
~TPQueue();
void push(const T&);
T pop();
void print() const;
private:
TPQueue::ITEM* create(const T&);
ITEM* head;
ITEM* tail;
};

template<typename T>
typename TPQueue<T>::ITEM* TPQueue<T>::create(const T& data)
{
ITEM* item = new ITEM;
item->data = data;
item->next = nullptr;

return item;
}
template<typename T>
TPQueue<T>::~TPQueue()
{
while (head)
pop();
}
template<typename T>
void TPQueue<T>::push(const T& data)
{

if (tail && head)
{
ITEM* begin = head;
ITEM* newItem = create(data);
if ((head->data).prior < data.prior) {
newItem->next = head;
head = newItem;
}
else {
while (begin->next != nullptr && (begin->next->data.prior < data.prior)) {
begin = begin->next;
}
newItem->next = begin->next;
begin->next = newItem;
}

}

else
{
head = create(data);
head->next = tail;
tail = head;
}

}
template<typename T>
T TPQueue<T>::pop()
{
if (head)
{
ITEM* temp = head->next;
T data = head->data;
delete head;
head = temp;
return data;
}
else
{
T data; data.ch = '0'; data.prior = '0';
return data;
}
}
template<typename T>
void TPQueue<T>::print() const
{
ITEM* temp = head;
while (temp)
{
std::cout « temp->data « " ";
temp = temp->next;
}
std::cout « std::endl;
  // Сюда помещается описание структуры "Очередь с приоритетами"
};


struct SYM
{
	char ch;
	int  prior;
};
