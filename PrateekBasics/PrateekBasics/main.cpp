#include <iostream>
#include <vector>
using namespace std;

void basics() {
    int arr[10] = { 1, 2, 3 };
    string fruits[3] = { "apple", "mango", "guava" };
    for (auto&& i : fruits) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> vNos = { 1, 2, 3, 4, 5 };
    vNos.push_back(6);
    cout << vNos.size() << endl;    // 6
    cout << vNos.capacity() << endl;    // 10
    vNos.pop_back();            // remove last ele 6
    for (int i = 0; i < vNos.size(); ++i) {
        cout << vNos[i] << " ";
    }
    cout << endl;

    vector<int> vNos2(10, 7);   // fill ctor
    vector<int>::iterator vNos2Iter = vNos2.begin();
    while (vNos2Iter != vNos2.end()) {
        cout << *vNos2Iter << " "; // print 7 no 10 times
        ++vNos2Iter;
    }
    cout << endl;
}

int main()
{
    basics();
}