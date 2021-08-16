

#include <iostream>

using namespace std;

class A 
{
    private :
           int id = 2507 ;
           string name = " HASNAT JANI RAFIN";
    public :
        friend class B ;
};
class B 
{
    public :
         void display (A obj)
         {
             cout <<"Class A - student ID : " <<obj.id <<endl ;
             cout << "         student name : " <<obj.name <<endl;
         }
    
};

int main()
{
    A obj1;
    B obj2 ;
    
    obj2.display(obj1);
    
}
