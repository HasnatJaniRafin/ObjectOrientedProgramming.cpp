#include<iostream>
using namespace std ;

template<class mytem >
  mytem add  (mytem a,mytem b)
  {
      return a+b ;
  }

int main ()
{
    cout<< add(10,30) <<endl;
    cout<< add(20.20,30.30) <<endl ;
}
