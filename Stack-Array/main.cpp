#include <iostream>
#include "stacktype.cpp"
using namespace std;

void checkfull(bool b)
{
    if (b)
    {
        cout<< "Stack Full"<<endl;
    }
    else
        cout<< "Stack not Full"<<endl;

}
void checkempty(bool b)
{
    if (b)
    {
        cout<< "Stack Empty"<<endl;
    }
    else
        cout<< "Stack not Empty"<<endl;

}


// print function
void print(stacktype<int> st)                    // Helper function to print the list
{
    stacktype<int> temp;

    while (!st.isEmpty())
    {
        temp.push(st.Top());
        st.pop();
    }

    while (!temp.isEmpty())
    {
        st.push(temp.Top());
        cout << temp.Top() << " ";
        temp.pop();
    }
    cout << endl;
}
int main()
{
    // First Task
    stacktype<int> st;
    checkempty(st.isEmpty());
    st.push(1);
    st.push(2);
    st.push(3);
    print (st);
    st.pop();
    print(st);
    st.push(42);
    print(st);
    checkempty(st.isEmpty());
    st.push(11);
    st.push(13);
    print(st);
    checkfull(st.isFull());

    // Second Task


    stacktype<char> bracket;
    cout<<"Enter bracket : ";
    string str;
    cin>>str;
    for(int i =0; i<str[i]!=NULL; i++)
    {
        char arr = str[i];
        if (arr == '('|| arr  == '{' || arr =='[')
        {
            bracket.push(arr);
        }
        else if(arr == ')' && bracket.isEmpty()||arr == '}' && bracket.isEmpty()||arr == ']' && bracket.isEmpty())
        {
            cout << "not balanced" << endl;
            return 0;
        }
        else
        {
            bracket.pop();
        }
    }
    if(bracket.isEmpty())
    {
        cout<<" balanced :)";
    }
    else
    {
        cout<<"not balanced :(";
    }
    return 0;
}
