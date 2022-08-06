// #include <stdio.h>
#include <iostream>
// #include <thread>
using namespace std;
int temp = 1;
int count = 0;

int recursion(int x, int check)
{
    int factorial = x;
    if (check == 0)
    {
        printf("total loops done :: %d ", count);

        return factorial;
    }
    count++;
    int y = check - 1;
    check--;
    if (y != 0)
    {
        x = x * y;
    }
    cout << y << " ";
    recursion(x, check);
}

int main()
{
    // using namespace std::this_thread;
    // using namespace std::chrono;
    int x;
    cout << "input :: ";
    cin >> x;
    int check = x;
    int factorial = recursion(x, check);
    cout << "factorial of " << x << " :: " << factorial;
    _sleep(5000);
    // sleep_for(nanoseconds(5000000000));
    return 0;
}