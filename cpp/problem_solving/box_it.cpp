// #include<bits/stdc++.h>
#include<stdbool.h>
#include<iostream>
using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box
// The class should have the following functions :
class Box{
    private:
        int length;
        int breadth;
        int height;

    public:
        //constructors
        // Box();
        Box():length(0),
              breadth(0),
              height(0){}
        // Box(int,int,int);
        Box(int l, int b, int h):length(l),
                                breadth(b),
                                height(h){}
        // Box(Box);
        Box(Box& B){
          length = B.getLength();
          breadth = B.getBreadth();
          height = B.getHeight();
        }
        // Return box's length
        int getLength() const{
          return length;
        }
        // Return box's breadth
        int getBreadth() const{
          return breadth;
        }
        //Return box's height
        int getHeight() const{
          return height;
        }
        // Return the volume of the box
        long long CalculateVolume() const{
          return length*breadth*height;
        }
        //Overload operator < as specified
        //bool operator<(Box& b)
        bool operator<(const Box& b){
          if (length < b.getLength()){
            return true;
          }
          else if (length == b.getLength() && breadth < b.getBreadth()){
            return true;
          }
          else if (length == b.getLength() && breadth == b.getBreadth() && height < b.getHeight()) {
            return true;
          }
          return false;
        }

        //declare os as friend
        friend ostream& operator<<(ostream& out, const Box& B);
};

//Overload operator << as specified
ostream& operator<<(ostream& out, const Box& B){
  out<<B.getLength()<<" "<<B.getBreadth()<<" "<<B.getHeight()<<endl;
  return out;
}

int main(void){
  Box b(8, 6, 5);
  Box c(16, 6, 5);
  cout<<b;
  if (b < c){
    cout << "b is smaller" << endl;
  }
}
