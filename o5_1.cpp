#include<iostream>
using namespace std;
class Time             // 定义Time类
{
    private:            // 数据成员为公用的
    int hour;
    int minute;
    int sec ;
    public:
    void input(){
      cout<<"Enter hour: ";
      cin>>hour;
      cout<<"Enter minute: ";
      cin>>minute;
      cout<<"Enter sec: ";
      cin>>sec;
      }
      void show(){
           cout<<"Hour: "<<hour<<endl;
           cout<<"Minute: "<<minute<<endl;
           cout<<"Sec: "<<sec<<endl;
      }
};
int main()
{
   Time t;
   t.input();
   t.show();
   return 0;
}
