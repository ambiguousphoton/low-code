#include <iostream>
using namespace std;
#define MAX 5
int array[MAX];
int top = -1;

void push(int n)
{
    top += 1;
    if (top < MAX)
    { array[top] = n;}
    
    else
    {   top -= 1;
        array[top] = n;
    }
}
int pop()
{   if (top == -1)
    {   cout << "stack underflow!";
        exit(1);
    }
    else
    {   int temp = array[top];
        top -= 1;
        return temp;
    }
}

int main()
{
    int num, n2, n3, n4, n5;
    cin >> num >> n2 >> n3 >> n4 >> n5;
    push(num);
    push(n2);
    push(n3);
    push(n4);
    push(n5);

    for (int i = 0; i <= top; i++)
    {cout << array[i] << " ";}

    pop();
    pop();
    pop();
    
    cout<<"\n";
    for (int i = 0; i <= top; i++)
    {cout << array[i] << " ";}
}