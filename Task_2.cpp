#include <iostream>
using namespace std;

struct Point{
    int x;
    int y;
};

struct Rectangle{
    Point Top_left;
    Point Bottom_right;
};

int computeArea(Rectangle rect){
    int length = rect.Bottom_right.x - rect.Top_left.x;
    int width = rect.Top_left.y - rect.Bottom_right.y;
    return (length * width);
}

int main(){
    Rectangle rect;

    cout << "Enter top left point (x,y):";

    cin >> rect.Top_left.x; 
    cin >> rect.Top_left.y;

    cout << "Enter bottom right point (x, y):";

    cin >> rect.Bottom_right.x;
    cin >> rect.Bottom_right.y;

    int area = computeArea(rect);
    cout << "The area is:" << area << endl;

    return 0;
}