#include <bits/stdc++.h>
using namespace std;

void RotateAnticlockwise(string &s) {
    char c = s[0];
    int index = 1;
    while (index < s.size()) {
        s[index - 1] = s[index];
        index++;
    }
    s[s.size() - 1] = c;
}

void RotateClockwise(string &s) {
    char c = s[s.size() - 1];
    int index = s.size() - 2;
    while (index >= 0) {
        s[index + 1] = s[index];
        index--;
    }
    s[0] = c;
}

bool IsRotated(string &s1, string &s2) {
    if (s1.size() != s2.size()) {
        return false;
    }

    string clockwise = s1;
    RotateClockwise(clockwise);
    RotateClockwise(clockwise);

    if (clockwise == s2) {
        return true;
    }

    string anticlockwise = s1;
    RotateAnticlockwise(anticlockwise);
    RotateAnticlockwise(anticlockwise);

    return anticlockwise == s2;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (IsRotated(s1, s2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
