
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std ;

class student 
{
    public : 
            int id ;
            double gpa ;
    void setvalue (int x , double y)
    {
        id = x;
        gpa = y;

    } 

    void display ()
    {

        cout <<id << "   " <<gpa <<endl ;
    }   


};



int main()
{
    student rafin , nazifa ;

    rafin.setvalue(101,4.9);
    rafin.display();


    nazifa.setvalue(102,4.7);
    nazifa.display();

}
