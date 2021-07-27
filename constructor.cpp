#include<iostream>
using namespace std ;


class student 
{

    public :
            int id ;
            double gpa ;


    student (int x , double y )
    {
        id=x;
        gpa=y ;

    }        

    void display ()
    {
        cout <<id <<"   " <<gpa <<endl  ;

    }         
};



int main ()
{

    student rafin(2507,4.88);
    rafin.display();

    student nazifa(2508,4.77);
    nazifa.display();

}
