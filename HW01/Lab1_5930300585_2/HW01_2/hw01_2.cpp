// 5930300585 Phattaraphon Chomchaiyaphum SEC800

#include <stdio.h>
#include <iostream>

using namespace std;

struct rec
{
    int value;
    struct rec *next;
};

int main()
{
    struct rec *tmp1 ;
    tmp1 = new struct rec;
    cout << "Enter : ";
    cin >> tmp1 -> value;
    tmp1 -> next = NULL;
    
    struct rec *tmp2 ;
    tmp2 = new struct rec;
    cout << "Enter : ";
    cin >> tmp2 -> value;
    tmp2 -> next = tmp1;
    
    cout << tmp2 -> value << " " << tmp2 -> next -> value << endl;
    

}
