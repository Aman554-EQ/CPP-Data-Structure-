#include "stacktype.h"
#include<iostream>
template<class itemtype>
stacktype<itemtype> :: stacktype()
{

  top =-1;

}
template<class itemtype>
bool stacktype<itemtype> :: isFull()
{

    return top == sizee-1;
}
template<class itemtype>
bool stacktype<itemtype> :: isEmpty()
{

    return top == -1;
}
template<class itemtype>
void stacktype<itemtype> :: push(itemtype newitem)
{
    if(isFull())
    {
        throw FullStack();
    }

        top++;
        items[top] = newitem;


}
template<class itemtype>
void stacktype<itemtype> :: pop()
{
    if(isEmpty())
    {
        throw EmptyStack();
    }

        top--;

}
template<class itemtype>
itemtype stacktype<itemtype> :: Top()
{
    if(isEmpty())
    {
       throw EmptyStack();
    }


        return items[top];


}
