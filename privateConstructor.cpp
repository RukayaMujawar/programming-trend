/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class demoConstructor
{
    private:
        demoConstructor()
        {
            cout<<"Inside private constructor"<<endl;
        }
        
        friend class B;
};

class B{
    public:
    B()
    {
        demoConstructor d1;
        cout<<"Inside B"<<endl;
    }
        
};
int main()
{
    cout<<"Hello World"<<endl;
   // demoConstructor d1;
    B b1;
    
    return 0;
}
