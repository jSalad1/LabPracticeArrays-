class Square;

class Square{
    //private properties go first 
    private:
    double s1;
    double s2;
    double s3;
    double s4;
    // then go your getter methods for your class
    public:
    double getSide() {return s1;}
    // Setters ignorged for now

    // constructors go now 
    Square(double s1, double s2, double s3, double s4){
        this->s1 = s1;
        this->s2 = s2;
        this->s3 = s3;
        this->s4 = s4; 

    }
    
};
