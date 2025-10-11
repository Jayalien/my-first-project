# include <iostream>
using namespace std;
int main(){
int score;
cout << "输入分数：";
cin >> score;

switch(score >= 60){
case true:
    cout << "合格";
    break;
case false:
    cout << "不合格";
    break;
}
return 0;

}
