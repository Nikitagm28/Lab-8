1 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    cout << x / 1024;
}
2 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << (a-b) / b;
}
3 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int X = (a - b) % b;
    cout << X;
}
4 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x;
    int first, second;
    cin >> x;
    first = x / 10;
    second = x % 10;
    cout << second << first;
}
5 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x;
    int first, second, third;
    cin >> x;
    first = x / 100;
    //cout << first;
    second = x / 10;
    second %= 10;
    //cout << second;
    third = x % 10;
    //cout << third;
    cout << second << third << first;
}
