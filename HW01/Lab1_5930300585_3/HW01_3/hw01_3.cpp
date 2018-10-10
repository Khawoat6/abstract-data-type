// 5930300585 Phattaraphon Chomchaiyaphum SEC800

#include<iostream>
#include<stdio.h>

using namespace std;

struct rec
{
    int data;
    struct rec*next;
}*head = NULL;


void menu()
{
    cout<< "======================="<< "\n";
    cout<< "         MENU           "<< "\n" ;
    cout<< "======================="<< "\n";
    cout<< "1) Insert"<< "\n" ;
    cout<< "2) Print"<< "\n" ;
    cout<< "3) Exit"<< "\n" ;
    cout<< "Please choose : " ;
}

void Insert()
{
    int data;
    int num;
    cout << "Input your data : ";
    cin >> num;
    if(head == NULL)
    {
        head = new rec;
        head -> data =num;
        head -> next = NULL;
    }
    struct rec*node;
    node = new rec;
    node -> data = num;
    node -> next =NULL;
    if(num<head->data)
    {
        node -> next = head;
        head = node;
    }
}

void Print()
{
    struct rec*temp;
    temp =head;
    if(temp == NULL)
    {
        cout <<"Empty \n" ;
    }
    while (temp != NULL)
    {
        if(head != NULL)
        {
            cout << temp -> data << " " ;
        }
        temp = temp -> next;
    }
    cout << "\n" ;
}

int main()
{
    int choice;
    while(true)
    {
        menu();
        cin>>choice;
        
        switch(choice)
        {
            case 1: Insert();
                break ;
            case 2: Print();
                break ;
            case 3:
                exit(0);
                break;
        }
    }
}
