#include <iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
  double length,width,heigh;
  for(int i=0;i<3;i++)
  {
    cin>>length>>width>>heigh;
    Rectangle rectangle1(length,width,heigh);
    cout<<"The volume of length "<<rectangle1.length<<" width "<<rectangle1.width<<" heigh"<<rectangle1.heigh<<"is "<<rectangle1.getVolume();
  }
}
