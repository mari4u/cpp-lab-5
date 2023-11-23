#include <iostream>
using namespace std;
class Planet {
public:    
    string Name, Life;
    double M, V, x, y, z;
    Planet () {
        printf("Constructor without parameters\n");
        x=y=z=M=V=0;
        Name=Life="";
    }
   //Planet(){}
    Planet (string _name,double _x,double _y,double _z,double _M,double _V, string _life){
        printf("Constructor with parameters\n");
        Name=_name;
        x=_x;
        y=_y;
        z=_z;
        M=_M;
        V=_V;
        Life=_life;
    }
    void Print(){
    cout<<"Name: "<<Name<<"  Coordinates: x="<<x<<" y="<<y<<" z="<<z<<
    "  Mass: "<<M<<"  Volume: "<<V<<"  Is it OK for life: "<<Life<<endl;
    }
    ~Planet(){
        printf("Distructor\n");
    }
    void Set (string _name,double _x,double _y,double _z,double _M,double _V, string _life){
        Name=_name;
        x=_x;
        y=_y;
        z=_z;
        M=_M;
        V=_V;
        Life=_life;
    }
    Planet(const Planet& other){
        printf("Copy constructor\n");
        this->x = other.x;
        this->y = other.y;
        this->z = other.z;
        this->M = other.M;
        this->V = other.V;
        this->Name = other.Name;
        this->Life = other.Life;
    }
    
    
};

int main() {
    Planet a("Earth",1,2,3,100100,50000,"YES");
    a.Print();
    
    Planet b;
    b.Print();
    
    Planet c;
    c.Set("Mars",3,4,5,200500,60000,"NO");
    c.Print();
    
    Planet d(a);
    d.Print();
    
    
  

    return 0;
}

