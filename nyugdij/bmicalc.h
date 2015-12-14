#ifndef BMICALC_H
#define BMICALC_H


class BMICalc {
    
    private:
        
        
        
        
    public:
    
        const int MIN_TOMEG = 20;
        const int MAX_TOMEG = 200;
        const int MIN_MAGASSAG = 120;
        const int MAX_MAGASSAG = 300;
    
        void start();
        void menu();
        string getNev();
        double getMagassag();
        double getTomeg();
        

   
};


#endif