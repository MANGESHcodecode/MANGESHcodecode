#include <iostream>
using namespace std;

int main()
{
    int a=10;        
    int *ptr=&a;      //*ptr=address(a);
    cout<<*ptr<<endl;   //printing 10 because now a=10;
    *ptr=20;  // updating the value of a to 20; 
    cout<<*ptr<<endl;  //printing again the a or *ptr;
    return 0;

    
}

//  Here  
 