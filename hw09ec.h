 /******************************************************************************
 * hw09ec.h
 * -----------------------------------------------------------------------------
 * This is the header file for hw09ec.cpp
 ******************************************************************************/
#ifndef H_EC
#define H_EC

#include <iostream> // cout
using namespace std;

/*******************************************************************************
 * 
 ******************************************************************************/
void DrawShape() {

}

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

        /***********************************************************************
         * Move()
         * ---------------------------------------------------------------------
         * This function will change the object dimensions but not save it
         *      mx  - how much to move x
         *      my  - how much to move y
         * ---------------------------------------------------------------------
         * PRE-CONDITIONS
         *      none
         * 
         * POST-CONDITIONS
         *      none
        ***********************************************************************/
        virtual void Move(const int mx, const int my) {
            cout << "Moving object: " << mx << " horizontally"
                                      << my << " vertically." << endl;
                                      
            x + mx;
            y + my;
        } // END Move()

        /***********************************************************************
         * UpdateDimensions()
         * ---------------------------------------------------------------------
         * This function will update an object's dimension(s)
         * Function definition will be defined in derived classes
         * ---------------------------------------------------------------------
         * PRE-CONDITIONS
         *      none
         * 
         * POST-CONDITIONS
         *      shape dimensions changed
        ***********************************************************************/
       virtual void UpdateDimensions(int mx, int my) {}

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
         * Overrides Shape. This function will only print object dimensions
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

        /***********************************************************************
         * Move()
         * ---------------------------------------------------------------------
         * Redefines Shape class. This function will change the object
         * dimensions but not save it
         *      mr  - how much to move radius
         * ---------------------------------------------------------------------
         * PRE-CONDITIONS
         *      none
         * 
         * POST-CONDITIONS
         *      none
        ***********************************************************************/
        void Move(const int mr) const {
            cout << "Moving circle: " << mr << endl;
            r + mr;
        } // END Move()

        /***********************************************************************
         * UpdateDimensions()
         * ---------------------------------------------------------------------
         * This function will update an object's dimension(s)
         * Function definition will be defined in derived classes
         * ---------------------------------------------------------------------
         * PRE-CONDITIONS
         *      none
         * 
         * POST-CONDITIONS
         *      r - changed by mr
        ***********************************************************************/
        void UpdateDimensions(const int mr) {
            r =+ mr;
        } // END UpdateDimensions()

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
         * Overrides Shape. This function will only print object dimensions
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

        /***********************************************************************
         * UpdateDimensions()
         * ---------------------------------------------------------------------
         * This function will update an object's dimension(s)
         * Function definition will be defined in derived classes
         * ---------------------------------------------------------------------
         * PRE-CONDITIONS
         *      none
         * 
         * POST-CONDITIONS
         *      l - changed by ml
         *      w - changed by mw
        ***********************************************************************/
        void UpdateDimensions(const int ml, const int mw) override {
            l =+ ml;
            w =+ mw;
        } // END UpdateDimensions()

    private:
        int l; // length
        int w; // width
}; // END class Rectangle

#endif