//1.注意函数前也要加模板标志
//2.类中用了模板，就需要Node<T>::Node
//3.主函数调用时，在函数名后也需要加具体类型 Compare<int> intp(3,5);
#include<iostream>
using namespace std;

template <typename T>
class Node
{
public:
	Node(T x);
	~Node();
	T GetData();
	void SetData(T x);
private:
	T data;
	Node *next;
};

template <typename T>
Node<T>::Node(T x)
{
	data=x;
	next=0;
}

template <typename T>
Node<T>::~Node()
{

}

template <typename T>
T Node<T>::GetData()
{
	return data;
}

template <typename T>
void Node<T>::SetData(T x)
{
	data=x;
}

int main()
{
	Node<double> s(3.14);
	Node<int> t(5);
	cout<<s.GetData()<<endl;
	t.SetData(10);
	cout<<t.GetData()<<endl;
	return 0;
}
