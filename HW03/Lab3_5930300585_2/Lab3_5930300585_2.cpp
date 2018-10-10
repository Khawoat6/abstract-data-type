// 5930300585 Phattaraphon Chomchaiyaphum SEC800

#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

struct rec
{
    int value;
    struct rec *Next;
};

typedef struct rec *Stack ;
Stack temp = new struct rec ;
Stack S = NULL;
Stack first;


/*======================= PUSH ===========================*/
void Push()
{
    int data;
    cout << "   Enter : ";
    cin >> data;
    S = new struct rec;
    S->value = data;
    S->Next = temp->Next;
    temp->Next = S;
    cout << "   " << data << " Success!\n" ;
}

/*======================= TOP ===========================*/
void Top()
{
    if (S==NULL)
    {
        cout << "   Stack is empty \n" ;
    }
    else
    {
        cout << "   Top = " << S->value << endl;
    }
}

/*======================= POP ===========================*/
void Pop()
{
    if (temp == NULL)
    {
        cout << "   Stack is empty \n";
    }
    else
    {
        first = temp;
        S->Next = temp->Next->Next;
        S->value = temp->Next->Next->value;
        delete (first);
        cout << "   Pop Success!\n";
    }
}

/*======================= POPALL ===========================*/
void PopAll()
{
    if (temp == NULL)
    {
        cout << "   Stack is empty \n" ;
    }
    else
    {
        cout << S->value << " ";
        cout << S->Next->Next->value << endl;
    }
}

/*========================================================*/
/*======================= MAIN ===========================*/
/*========================================================*/
int main()
{
    int choice;
    
    while (1)
    {
        cout << "------------------------\n";
        cout << "           MENU     \n";
        cout << "------------------------\n";
        cout << "1. Push \n" ;
        cout << "2. Pop \n" ;
        cout << "3. Top \n" ;
        cout << "4. Pop all data in stack \n" ;
        cout << "   Please choose > ";
        
        cin >> choice;
        
        switch (choice)
        {
            case 1: Push();
                break;
            case 2: Pop();
                break;
            case 3: Top();
                break;
            case 4: PopAll();
                break;
        }
    }
    
}
