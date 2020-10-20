#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
public:
  string name;
  int age;

  virtual void getdata(){
    cin >> name;
    cin >> age;
  }
  virtual void putdata(){
    cout << name <<  " " << age;
  }
};

class Professor:public Person{
private:
  int publications;
  int id_prof;
  static int id;

public:
  Professor(){
    //increment every time data is fed.
    id_prof = ++id;
  }
  void getdata(){
    cin >> name;
    cin >> age;
    cin >> publications;
  }
  void putdata(){
    cout << name <<  " " << age <<  " " << publications <<  " " << id_prof <<  " " << endl;
  }
};

class Student:public Person{
private:
  int marks[6];
  int id_stud;
  static int id;
public:
  Student(){
    //increment every time data is fed.
    id_stud = ++id;
  }
  int calculateSum(){
    int sum = 0;
    for (int i = 0; i < 6; i++){
      sum += marks[i];
    }
    return sum;
  }
  void getdata(){
    cin >> name;
    cin >> age;
    for (int i = 0; i < 6; i++){
      cin >> marks[i];
    }
  }
  void putdata(){
    cout << name << " " << age <<  " " << calculateSum() <<  " " << id_stud <<  " " << endl;
  }
};

int Professor::id = 0;
int Student::id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){
        cin>>val;
        if(val == 1){
          // If val is 1 current object is of type Professor
          per[i] = new Professor;
        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
