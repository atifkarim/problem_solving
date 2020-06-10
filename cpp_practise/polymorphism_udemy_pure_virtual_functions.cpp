/*
This code helps to learn about Pure Virtual Function and Abstract Class
*/

#include <iostream>
#include <vector>
using namespace std;

class Shape{ // Abstract Base Class
    private:

    public:
        virtual void draw() = 0; // pure virtual function
        virtual void rotate() = 0; // pure virtual function
        virtual ~ Shape(){cout<<"Abstract Base Class Shape's destructor is called\n";};

};

class Open_Shape:public Shape{ // Abstract Class
    public:
        virtual ~Open_Shape(){cout<<"Open_Shape destructor is called"<<endl;}
};

class Closed_Shape:public Shape{ // Abstract Class
    public:
        virtual ~Closed_Shape(){cout<<"Closed_Shape destructor is called"<<endl;}
};

class Line:public Open_Shape{
    public:
        virtual void draw() override{
            cout<<"\nDrawing a line\n";
        }

        virtual void rotate() override{
            cout<<"\nRotating a line\n";
        }

        virtual ~Line(){cout<<"Line destructor is called"<<endl;}
};

class Circle:public Closed_Shape{
    public:
        virtual void draw() override{
            cout<<"Drawing a Circle\n";
        }

        virtual void rotate() override{
            cout<<"Rotating a Circle\n";
        }

        virtual ~Circle(){cout<<"Circle destructor is called"<<endl;}
};

class Square:public Closed_Shape{
    public:
        virtual void draw() override{
            cout<<"Drawing a Square\n";
        }

        virtual void rotate() override{
            cout<<"Rotating a Square\n";
        }

        virtual ~Square(){cout<<"Square destructor is called"<<endl;}
};


void screen_refresh(const std::vector<Shape*> &shapes){
    cout<<"Refreshing going on\n";
    for (auto q:shapes)
        q->draw();
}

int main(){
    // Shape s; // Error
    // Shape *ptr = new Shape(); // Error
    
    // Circle c;
    // c.draw();

    cout<<"\ndynamically handling all\n"<<endl;
    /*
    Shape *ptr = new Circle();
    ptr->draw();
    ptr->rotate();

    delete ptr;
   */

    Shape *s1 = new Line();
    Shape *s2 = new Circle();
    Shape *s3 = new Square();

    std::vector<Shape *> shapes {s1, s2, s3};
    // for (auto p:shapes)
    //     p->draw();
    cout<<"\nCalling screen refresh function\n";
    screen_refresh(shapes);



    delete s1;
    delete s2;
    delete s3;

    return 0;
}