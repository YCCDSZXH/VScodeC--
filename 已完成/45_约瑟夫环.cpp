#include<iostream>
using namespace std;
int main()
{
    struct Jose
    {
        int code;
        Jose* next;
    };
    int children, n, now = 1;
    cin >> children >> n;
    int rest = children;
    Jose* jose = new Jose[children];
    Jose* temp1 = &jose[0];
    Jose* temp2 = &jose[children - 1];
    for (int i = 0; i < children; i++)
    {
        jose[i].code = i + 1;
        jose[i].next = (i == children - 1) ? &jose[0] : &jose[i + 1];
    }
    while (rest > 1)
    {
        if (now == n)
        {
            now = 1;
            (*temp2).next = (*temp1).next;
            rest--;
        }
        else
        {
            now++;
            temp2 = (*temp2).next;
        }
        temp1 = (*temp1).next;
    }
    cout << (*temp1).code;
    return 0;
}