#include<bits/stdc++.h>
using namespace std;

class ComplexPair{
    private:
    int real;
    int Imaginary;
    public:
    ComplexPair(int real, int Imaginary){
        this->real=real;
        this->Imaginary=Imaginary;
    }
    void print(){
        cout<<real<<""<<"+"<<""<<"i"<<Imaginary<<endl;
    }
    void sum(ComplexPair c2){
        this->real=real+c2.real;
        Imaginary=Imaginary+c2.Imaginary;
    }
    void multiphy(ComplexPair const &c2){
        int x=(real*c2.Imaginary)-(Imaginary*c2.Imaginary);
        int y=(real*c2.Imaginary)+(Imaginary*c2.real);
        real=x;
        Imaginary=y;
    }

};
int main(){
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexPair c1(real1, imaginary1);
    ComplexPair c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.sum(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiphy(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}