#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
const int sizee = 5;
class FullStack{};
class EmptyStack{};

template <class itemtype>
class stacktype {
public :
    stacktype();
    bool isFull();
    bool isEmpty();
    void push(itemtype);
    void pop();
    itemtype Top();

private :
    int top;
    itemtype items[sizee];


};


#endif // STACKTYPE_H_INCLUDED
