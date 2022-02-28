#include <iostream>
using namespace std;
class Polygon{
public:
Polygon(){
  cout<<"Creating an object of class Polygon"<<endl;
}
~Polygon(){
  cout<<"Deleting object of class Polygon"<<endl;
}
};
class Rectangle:public Polygon{
public:
Rectangle(){
  cout<<"Creating an object of class Rectangle"<<endl;

}
~Rectangle(){
  cout<<"Deleting object of class Rectangle"<<endl;
}

};
int main() {
  Rectangle obj;
  
}