 /******************************************************************************
 * hw09ec.h
 * -----------------------------------------------------------------------------
 * This is the header file for hw09ec.cpp
 ******************************************************************************/
#ifndef H_EC
#define H_EC

#include <iostream> // cout
using namespace std;

class Shape {
    public:
        // CONSTRUCTOR
        Shape(int x, int y) : x{x}, y{y} { }
        
        /***********************************************************************
         * Print()
         * ---------------------------------------------------------------------
         * This function will only print object dimensions
         * ---------------------------------------------------------------------
         * PRE-CONDITIONS
         *      none
         * 
         * POST-CONDITIONS
         *      none
        ***********************************************************************/
        void Print(const int x, const int y) {
            cout << "Width: " << x
                 << "\nHeight: " << y << endl;
        } // END void Print()

        virtual void Move();

// ... add Move virtual function (does this make sense?)
// ... add UpdateDimensions pure virtual function
    private:
        int x; // x-coordinate
        int y; // y-coordinate
}; // END class Shape

// -----------------------------------------------------------------------------

class Circle : public Shape {
    public:

        // CONSTRUCTOR
        Circle (int r) : r{r} { }

        /***********************************************************************
         * Print()
         * ---------------------------------------------------------------------
         * This function will only print object dimensions
         * ---------------------------------------------------------------------
         * PRE-CONDITIONS
         *      none
         * 
         * POST-CONDITIONS
         *      none
        ***********************************************************************/
        void Print(const int r) {
            cout << "Radius: " << r << endl;
        } // END void Print()
//... override Print // static polymorphism
//... override UpdateDimensions // dynamic polymorphism
    private:
        int r; // radius
}; // END class Circle

// -----------------------------------------------------------------------------

class Rectangle : public Shape {
    public:
        // CONSTRUCTOR
        Rectangle (int l, int w) : l{l}, w{w} { }

        /***********************************************************************
         * Print()
         * ---------------------------------------------------------------------
         * This function will only print object dimensions
         * ---------------------------------------------------------------------
         * PRE-CONDITIONS
         *      none
         * 
         * POST-CONDITIONS
         *      none
        ***********************************************************************/
        void Print(const int l, const int w) {
            cout << "Length: " << l
                 << "\nWidth: " << w << endl;
        } // END void Print()

//... override Print // static polymorphism
//... override UpdateDimensions // dynamic polymorphism
    private:
        int l; // length
        int w; // width
}; // END class Rectangle

#endif