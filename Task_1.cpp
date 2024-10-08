#include <iostream>
using namespace std;

struct Point{
    int x;
    int y;
};

void getInput(Point &p){
    cout << "Enter X:";
    cin >> p.x;
    cout << "Enter Y:";
    cin >> p.y; 
}

Point addPoints(Point p1, Point p2){
    Point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;
    return result;
}

int main(){
    Point p1, p2, result;

    cout << "Enter first point:" << endl;
    getInput(p1);

    cout << "Enter second point:" << endl;
    getInput(p2);

    result = addPoints(p1, p2);

    cout << "The sum of points:" << result.x<< "," << result.y << endl;

return 0;
}

