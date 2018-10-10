// 5930300585 Phattaraphon Chomchaiyaphum SEC800

#include <stdio.h>
#include <iostream>

using namespace std;
int arr[10];
int source = 0;

void showmenu()
{
    cout << "=== MENU ===" << endl;
    cout << "1) Insert \n";
    cout << "2) Delete \n";
    cout << "3) Print \n";
    cout << "4) Exit \n ";
    cout << "  Please choose > ";
}

void insert(int input)
{
    
    int x, y;
    if (source == 0)
    {
        arr[0] = input;
        source++;
    }
    else if (source == 10)
    {
        cout << endl;
        cout << "Full, can not insert!!!" << endl;
    }
    else if (source > 0)
    {
        for (y = 0; y < source; y++)
        {
            if (input > arr[y] && arr[y + 1] == NULL)
            {
                arr[y + 1] = input;
            }
            if (input <= arr[y])
            {
                for (x = source; x > y; x--)
                {
                    arr[x] = arr[x - 1];
                    arr[x - 1] = input;
                }
                break;
            }
        }
        source++;
    }
}

void del(int input)
{
    for (int y = 0; y < source; y++)
    {
        if (input == arr[y])
        {
            for (int x = y; x < source; x++)
                
                arr[x] = arr[x + 1];
        }
    }
    source--;
}

void print()
{
    for (int y = 0; y < source; y++)
    {
        cout << arr[y] << " ";
    }
    cout << endl;
}

int main()
{
    int choose, input;
    while (1)
    {
        showmenu();
        cin >> choose;
        switch (choose)
        {
            case 1:
                cout << "Enter Number : ";
                cin >> input;
                insert(input);
                cout << endl;
                cout << "Insert Success! \n"
                << endl;
                break;
            case 2:
                cout << "Delete Number : ";
                cin >> input;
                del(input);
                cout << endl;
                cout << "Delete Success!! \n"
                << endl;
                break;
            case 3:
                print();
                cout << endl;
                break;
            case 4:
                exit(0);
                break;
        }
    }
}
