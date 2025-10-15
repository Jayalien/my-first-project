#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Ball{
private :
   double diameter;
   string color;
public :
    Ball(double d ,string c):diameter (d), color (c){}
     double getDiameter() const { return diameter;}
     string  getColor() const {return color;}

     void show() const{
         cout<<"直径："<<diameter <<"mm,颜色" << color <<endl;
     }
 };

 class Bullet :public Ball
{
    private:
    string size ;

    int getPrice () const {
        if (size=="大")
        return 10;
        else
        return 5;
    }

    public:
    Bullet (double d ,string color , string size):Ball (d, color), size (size){}

    void show() const
    { 
        cout<<"获得【"<<size <<"】弹丸 "<<"直径"<< getDiameter() <<"mm "<<"价格"<< getPrice() <<"金币"<< endl;
    }
};

int main () {
    Bullet big(12,"银色", "大");
    Bullet small(6,"黑色","小");
    
big.show();
small.show();
return 0;
    }
