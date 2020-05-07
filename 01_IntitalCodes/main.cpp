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





int main(){

    Cube c;

    c.setLength(3.48);
    double volume = c.getVolume();
    std::cout<<"Volume :"<<volume<<std::endl;

    

    return 0;
}