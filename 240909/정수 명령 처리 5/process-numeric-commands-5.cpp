#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> v;
    int num;
    string str;
    int n;

    cin >> num;

    for (int i = 0; i < num; i++) {
        n = 0;
        cin >> str;

        if(str == "push_back") {
            cin >> n;
            v.push_back(n);
        }
        if (str == "pop_back") {
            v.pop_back();
        }
        if (str == "size") {
            cout << v.size() << endl;
        }
        if (str == "get") {
            cin >> n;
            cout << v[n-1] << endl;
        }
    }

    
    return 0;
}