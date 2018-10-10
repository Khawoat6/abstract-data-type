// 5930300585 Phattaraphon Chomchaiyaphum SEC800

#include <iostream>
#include <stdio.h>

using namespace std ;

struct rec
{
    
    int data ;
    int value ;
    struct rec *next ;
    struct rec *p ;
    
} *head = NULL ;

void ShowMenu()
{
    cout << " ======================== \n"  ;
    cout << "           MENU           \n" ;
    cout << " ======================== \n"  ;
    cout << " 1) Insert \n" ;
    cout << " 2) Delete \n" ;
    cout << " 3) Find \n" ;
    cout << " 4) Print Front to Back \n" ;
    cout << " 5) Print Back to Front \n" ;
    cout << "    Please choose > " ;
}

void Insert()
{
    
    int data ;
    int num ;
    cout << "    Enter number : " ;
    cin  >> num ;
    cout << "    Insert Success! " << endl  ;
    cout << endl ;
    
    if (head == NULL)
    {
        head = new rec ;
        head -> data = num ;
        head -> next = NULL ;
    }
    
    struct rec * node ;
    node = new rec ;
    node -> data = num ;
    node -> next = NULL ;
    
    if( num < head -> data )
    {
        node -> next = head ;
        head = node ;
    }
    
    struct rec * temp ;
    temp = head ;
    
    while ( temp )
    {
        if( temp -> next == NULL && num > temp -> data )
        {
            temp -> next = node ;
        }
        else if( num > temp -> data && num < temp -> next-> data )
        {
            node -> next = temp -> next ;
            temp -> next = node ;
        }
        temp = temp -> next ;
    }
    
} //============================== END Insert

void Print()
{
    
    struct rec * temp ;
    temp = head;
    
    if( temp == NULL )
    {
        cout << "Empty list! \n" ;
    }
    while ( temp != NULL )
    {
        if( head != NULL )
        {
            cout << temp -> data << " " ;
        }
        temp = temp -> next ;
    }
    cout << endl << endl ;
    
} //============================== END Print


void PrintBTF()
{

    int i;
    int a[i];
    struct rec*temp;
    temp = head;
    while(temp!=NULL)
    {
        a[i]=temp->data;
        temp=temp->next;
        i++;
    }
    for(int l=i-1;l>=0 ; l--)
    {
        cout << a[l] << " ";
    }
    if(i==0)
    {
        cout << "Empty list!" << "\n";
    }
    cout << "\n";
    
} //============================== END Print Back to Front

void Deleted()
{
    int datain;
    cout << "Enter deleted data : ";
    cin >> datain;
    struct rec*temp;
    temp = head;
    struct rec*tempfree;
    tempfree = head;
    if (head == NULL )
    {
        cout << "Emtry list!" << "\n";
    }
    while(temp != NULL)
    {
        if (head -> data == datain)
        {
            head = temp -> next;
            delete(temp);
            cout << "Success!!" << "\n";
            break;
        }
        else if(temp -> next -> next == NULL && temp -> next -> data == datain)
        {
            tempfree = temp -> next;
            delete (tempfree);
            temp -> next = NULL;
            cout << "Success!!" << "\n";
            break;
        }
        else if(temp->next ->data == datain && temp -> next -> next != NULL)
        {
            tempfree = temp->next;
            temp->next = tempfree -> next;
            delete(tempfree);
            cout << "Success!!" << "\n";
            break;
        }
        temp = temp->next;
        if(temp->next == NULL)
        {
            cout << "Not found " << datain << "!"<< "\n";
            break;
        }
    }
} //============================== END Deleted

void Find()
{
    
    int num ;
    int count = 1 ;
    
    cout << "    Enter data to find : " ;
    cin >> num ;
    struct rec * temp ;
    temp = head ;
    
    while( temp != NULL )
    {
        if( num == temp -> data )
        {
            cout << " Found! "  << endl  << endl ;
            return ;
        }
        count++ ;
        temp = temp -> next ;
    }
    cout << " Not found!" << endl << endl ;
    
} //============================== END Find


int main()
{
    int choice ;
    
    while (true)
    {
        ShowMenu() ;
        cin >> choice ;
        
        switch(choice)
        {
            case 1: Insert() ;
                break ;
            case 2: Deleted();
                break ;
            case 3: Find() ;
                break ;
            case 4: Print() ;
                break ;
            case 5: PrintBTF() ;
                break;

        }
    }
} //============================== END main









