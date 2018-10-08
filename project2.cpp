#include <iostream>
#include <fstream>

using namespace std;


template<class T>
class LinearList
{
private:
    int length;
    int MaxSize;
    T *element;
public:
    LinearList(int MaxLinearSize=11);
    ~LinearList(){delete[]element;}
    int isEmpty()const{return length==0;}
    int Length()const{return length;}
    int Find(int k,T&x)const;
    int Search(const T&x)const;
    void Delete(int k,T&x);
    void Insert(int k,const T&x);
    void Output()const;
};
template<class T>
LinearList<T>::LinearList(int MaxListSize)
{
    MaxSize=MaxListSize;
    element=new T[MaxSize];
    length=0;
}
template<class T>
int LinearList<T>::Find(int k,T&x)const
{
    if(k<1||k>length)
        return 0;
    x=element[k-1];
    return 1;
}
template<class T>
int LinearList<T>::Search(const T&x)const
{
    for(int i=0;i<length;i++)
        if(element[i]==x)
            return ++i;
    return 0;
}
template<class T>
void LinearList<T>::Delete(int k,T&x)
{
    if(Find(k,x))
    {
        for(int i=k;i<length;i++)
            element[i-1]=element[i];
        length--;
    }
    else
        cout<<"out of bounds\n";
}
template<class T>
void LinearList<T>::Insert(int k,const T&x)
{
    if(k<0||k>length)
        cout<<"out of bounds\n";
    if(length==MaxSize)
        cout<<"no memory\n";
    for(int i=length-1;i>=k;i--)
        element[i+1]=element[i];
    element[k]=x;
    length++;
}
template<class T>
void LinearList<T>::Output()const
{
    ofstream file;
    if(isEmpty())
        file<<"list is empty\n";
    else
    {
        
        file.open("Juhak.Lee.alist.txt");
        for(int i=0;i<length;i++)
            file<<element[i]<<"\t";
    }
}
void menu()
{
    cout<<"\n MENU\n" ;
    cout<<"-----------\n";
    cout<<"1.Length\n";
    cout<<"2.Find\n";
    cout<<"3.Search\n";
    cout<<"4.Delete\n";
    cout<<"5.Insert\n";
    cout<<"6.Output\n";
    cout<<"-------------\n";
}
int main()
{
    int ch;
    int k,x,len,p;
    LinearList <int> obj;
    
    obj.Insert(0,11);
    obj.Insert(1,10);
    obj.Insert(2,9);
    obj.Insert(3,8);
    obj.Insert(4,7);
    obj.Insert(5,6);
    obj.Insert(6,5);
    obj.Insert(7,4);
    obj.Insert(8,3);
    obj.Insert(9,2);
    obj.Insert(10,1);
    int temp1;
    obj.Delete(6, temp1);
    obj.Insert(8,100);
    
    
    obj.Output();
    cout<<endl;
    
    
    
    
    
    return 0;
    
}
/*1. Create a list of the following elements [11,10,9,8,7,6,5,4,3,2,1] using obj.Insert
 
 2. Delete element #5 (counting from 0) using obj.Delete
 
 3. Insert element 100 at position 8 (counting from 0) using obj.Insert
 
 4. Modify the Output function to save the list to a file. The name of the file is provided as an argument.
 
 - obj.Output('test.txt');
 
 5. Using new  obj.Output save the resulted list to a file with the following name. FirstName.LastName.aList.txt. For example. Serghei.Mangul.aList.txt
 
 5. Create a new class for the linked list. The new class should have the following functions:
 
 - Delete, Insert and Output
 
 6. Using object from the linked list repeat steps 1-5. For step 5 the name of the file should be FirstName.LastName.lList.txt
 
 
 
 Note:
 
 Please test your code. The resulted lits from aList and lList should be the same. i.e. files FirstName.LastName.lList.txt and FirstName.LastName.aList.txt should be identical!
 
 
 
 Good luck!
 
 Serghei */

