#include <iostream>
using std::cin;
using std::cout;

void shapex()
{

for (int row = 1; row <=4; row++)
{
    
    if (row <=4)
    {
        
        for (int hashNum = 1; hashNum<= abs((row*-2) + 16-16); hashNum++)
        { 
        
            cout << "#";
        }
        

    }
    else if (row >= 5)
    {
        for (int hashNum = 1; hashNum <= (row*-2 + 18); hashNum++) 
        {
             cout << "#";
        }

    }
    else if (row >= 6)
    {
        for (int hashNum = 1; hashNum >= abs((row*2)-2-16); hashNum++)
        {
          cout << "#";
        }
    }

    cout << '\n';
}
}

void diagonal () {
    for (int row = 1; row <=3; row++){
        for (int hashnum = 1; hashnum <=3; hashnum++){
                if (row == 1 && hashnum == 1){
                    cout << '#';
                }
                else if (row == 2 && hashnum == 2){
                    cout << '#';
                }
                else if (row == 3 && hashnum == 3){
                    cout << '#';
                }
                else {
                    cout << '-';
                }
        }
                
         cout << '\n';

    }
        
        
}
    
    


int main () {
    //shapex();
    diagonal();
    return 0;
}


