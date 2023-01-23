# include <iostream>

using namespace std;

int k = 0;
class Point {
    private:
        int id;
        int x;
        int y;
    public:
        Point (int a, int b) {
            x = a;
            y = b;
            k++;
            id = k;
            cout << "Constructor called with (" << x << ", " << y << ") (ID = " << id << ")" << endl;
        }
        Point () {}
        ~ Point () {
            cout << "Destructor called (ID = " << id << ")\n";
        }
        friend ostream & operator << (ostream &os, Point &p);
};

class Rectangle{
    private:
        int id;
        Point *upLeft;
        Point *lowRight;
    public:
        Rectangle (Point &a, Point b) {
            upLeft = &a;
            lowRight = &b;
            k++;
            id = k;
            cout << "Constructor called with " << *upLeft << ", " << *lowRight << " (ID = " << id << ")" << endl;;
        }
        Rectangle (Rectangle & other){
            upLeft = other.upLeft;
            lowRight = other.lowRight;
            k++;
            id = k;
            cout << "Copy Constructor called with " << *upLeft << ", " << *lowRight;
            cout << "(ID = " << id << ")" << endl;
        }
        Rectangle () {}
        ~ Rectangle () {
            cout << "Destructor called (ID = " << id << ")\n";
        }
        friend ostream & operator << (ostream &os, Rectangle &p);

};

ostream & operator << (ostream &os, Rectangle &r){
    return os << "Rectangle " << *r.upLeft << ", " << *r.lowRight << "(ID = " << r.id << ")" << endl;
}

ostream & operator << (ostream &os, Point &p){
    return os << "(" << p.x << ", " << p.y << ")";
}

int main() {
    Point pt1(10,20);
    Rectangle a(pt1, Point (30,40));
    Rectangle b (a);
    cout << a;
    cout << b;
}