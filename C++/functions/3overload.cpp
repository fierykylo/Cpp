#include <bits/stdc++.h>
using namespace std;

int add(int x , int y)
{
    return x + y;
}
int add(int x , int y , int z)
{
    return x + y + z;
}
float add(float x , float y)
{
    return x + y;
}
int main(void)
{
   cout <<  add(3.4f,3.2f) << endl <<  add(3,2) << endl <<  add(34,43);

}