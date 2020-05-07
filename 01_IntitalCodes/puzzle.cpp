#include <iostream>

class Cube{
    public:
        double getVolume(){
            return length_*length_*length_;
            
        }
        double getSurfaceArea(){
            return 6*length_*length_;
        }
        void setLength(double length){
            length_ = length;
        }

    private:
        double length_;
};

using namespace std;

Cube *createUnitCube(){
    Cube cube;
    cube.setLength(100);
    return &cube;
}

int main(){

    Cube *c = createUnitCube();
    double v = c->getVolume();
    double a = c->getSurfaceArea();
    cout<<"Volume :"<<v<<endl;
    cout<<"Area: "<<a<<endl;

    return 0;
}