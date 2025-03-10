#include<iostream>
using namespace std;

class Scorpio {
public:
    void rutba() {
        cout<<"Rutba Hai Hamara"<<endl;
    }
};

class Endevour{
public:
    void sound() {
        cout<<"sound like smooth"<<endl;
    }
};

class Fortuner: public Scorpio {
public:
    void black() {
        cout<<"Like Wow"<<endl;
    }
};

class Lamborgini : public Fortuner {
public:
    void costly() {
        cout<<"Dream"<<endl;
    }
};

class Rolls_Roys:public Scorpio {
public:
    void flat() {
        cout<<"Very costly car"<<endl;
    }
};

class Bolero:public Scorpio, public Endevour {
public:
    void white() {
        cout<<"Like Wow"<<endl;
    }
};

class Cars : public Scorpio, public Endevour { 
public:
    void carsActivity() {
        cout<<"\n Cars performs multiple activities"<<endl;
    }
};
int main() {
    
    cout<<"\n Single Inheritance_Scorpio:"<<endl;
    Scorpio d;
    d.rutba();  
  
  
    cout<<"\n Multilevel Inheritance_Fortuner:"<<endl;
    Fortuner p;
    p.rutba();
    p.black();  
  
    cout<<"\n Hierarchical Inheritance_Lamborgini:"<<endl;
    Lamborgini c;
    c.black();  
    c.costly();   

    cout<<"\n Multiple Inheritance_Rolls_Roys:"<<endl;
    Rolls_Roys e;
    e.rutba();  
    e.flat();    
    
    cout<<"\n Hybrid Inheritance_Bolero:"<<endl;
    Bolero f;
    f.rutba();  
    f.sound();      

    cout<<"\n Cars Inheritance_Cars:"<<endl;
    Cars h;
    h.rutba();    
    h.sound();      
 
    h.carsActivity(); 

    return 0;
}
