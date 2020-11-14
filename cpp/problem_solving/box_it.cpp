#include<bits/stdc++.h>

using namespace std;

class Box {
public:
	Box():length(0),
				breadth(0),
				height(0){}
	Box(int l, int b, int h):length(l),
													breadth(b),
													height(h){}
	Box(Box& B){
		length = B.getLength();
		breadth = B.getBreadth();
		height = B.getHeight();
	}

	long getLength();
	long getBreadth();
	long getHeight();
	long CalculateVolume();

	bool operator<(const Box& b2) const;
	friend ostream& operator<<(ostream& os, Box& b);

private:
	long length;
	long breadth;
	long height;
};

long Box::getLength() {
	return length;
}
long Box::getBreadth() {
	return breadth;
}
long Box::getHeight() {
	return height;
}
unsigned long long int Box::CalculateVolume() {
	return length*breadth*height;
}
bool Box::operator<(const Box& b2) const {
	if (length < b2.length) {
		return true;
	} else if (length == b2.length && breadth < b2.breadth){
		return true;
	} else if (length == b2.length && breadth == b2.breadth && height < b2.height){
		return true;
	} else {
		return false;
	}
}
ostream& operator<<(ostream& os, Box& b) {
	os << b.getLength() << " " << b.getBreadth() << " " << b.getHeight();
	return os;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
