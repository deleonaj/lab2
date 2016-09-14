#include <iostream>
using namespace std;
int main()
{
int a, b, c, d;
a = 12;
b = 3;
c = 17;
d = 2;
cout << "a == 7 --> " << (a == 7) << endl;
cout << "c * d == a * a --> " << ((c * d) == (a * a)) << endl;
cout << "d % b * c > 31 || c % b* d < 8 --> " << ((d % b * c > 31) || (c % b* d < 8)) << endl;
system ("pause");
return 0;
}
