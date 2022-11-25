/*
Programlama dillerinde bir fonksiyon veya programin bir par�asinin farkli degisken tipleri i�in kulllanilmasini saglarlar.

template<typename T>
template<class T>

Yukaridaki ilk satirda bir tip ile sablon (template) tanimliyken ikinci satirda bir sinif(class) ile sablon tanimlanmistir.

Yani kullanilacak olan sablona T ismi verilmis ve bu sablonun tipi bir ilkel veri tipi (primitive data type) (int,char, float gibi)
ile tanimlanmis veya bir sinif (class) kullanilarak tanimlanmistir.

Nesne y�nelimli programlama dillerinde kullanilan sablonlar, ikiye ayirmak m�mk�nd�r.

Fonksiyon sablonlari (Function Templates)
Sinif sablonlari (Class Templates)

template <class degisken> fonksiyontanimi;
template <typename degisken> fonksiyontanimi;

C++ dilinde  sinif sablonlari i�in asagidaki �rnegi inceleylim.
*/

#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack 
{
public:
    Stack();
    void push(T i);
    T pop();
private:
    int top;
T st[100];
};

template <class T>
Stack<T>::Stack()
{
    top = -1;
}

template <class T>
void Stack<T>::push(T i)
{
    st[++top] = i;
}

template <class T>
T Stack<T>::pop()
{
    return st[top--];
}

int main () 
{
    Stack<int> int_stack;
    Stack<string> str_stack;
    int_stack.push(10);
    str_stack.push("Merhaba");
    str_stack.push("Dunya");
    cout << int_stack.pop() << endl;
    cout << str_stack.pop() << endl;
    cout << str_stack.pop() << endl;
    return 0;
}
