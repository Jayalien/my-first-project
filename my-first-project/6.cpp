#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int addByValue(int x,int y){
    return x+y;
}
void addByReference(int &x, int &y ,int &result){
    result =x+y ;
}
int main()
{
    int a;
    srand(time(0));
    a=rand()%2;
    cout<<a;

    int current_state=-1, prev_state1=-1, prev_state2=-1;
    int day =1;
    int E_prev1 =1, E_prev2 =1;
    int total_experience =0;

    while (total_experience <100){
        current_state =a;
        
        cout << "第" << day << "天" ;
    if (current_state=0){
       
        int current_E= addByValue (E_prev1, E_prev2);
        total_experience += current_E ;
        
        cout<< "获得经验："<<current_E << "|累积经验" <<total_experience <<endl; 

        E_prev1=E_prev2;
        E_prev1=current_E;
    }
        else{
            cout<<"打瓦高手";

        int penalty ;
        int half=2;
        addByReference(E_prev2, half, penalty);
        cout<<"扣除经验："<<penalty << "|累积经验" <<total_experience <<endl; 
        }
        prev_state2= prev_state1;
        current_state=prev_state1;
        day++;
    }
    cout<<"YOU ARE WELCOMED TO JOIN PIONEER!"<<endl;



    return 0;
}