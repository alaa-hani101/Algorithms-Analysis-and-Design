#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main() {
    string text_01 = "HELLOWORLD";
    string text_02 = "OHELOD";


    int length_of_text_01 = text_01.length();
    int length_of_text_02 = text_02.length();


    text_01 = " " + text_01;
    text_02 = " " + text_02;


    vector<vector<int>> table(length_of_text_02 + 1, vector<int>(length_of_text_01 + 1, 0));


    for (int i = 1; i <= length_of_text_02; i++) {
        for (int j = 1; j <= length_of_text_01; j++) {
            if (text_02[i] == text_01[j]) {
                table[i][j] = 1 + table[i - 1][j - 1];
            }
            else {
                table[i][j] = max(table[i][j - 1], table[i - 1][j]);
            }
        }
    }


    string lcs_str = "";
    int i = length_of_text_02, j = length_of_text_01;
    while (i > 0 && j > 0) {
        if (text_02[i] == text_01[j]) {
            lcs_str = text_02[i] + lcs_str;
            i--;
            j--;
        }
        else if (table[i - 1][j] >= table[i][j - 1]) {
            i--;
        }
        else {
            j--;
        }
    }

    cout << lcs_str;

    return 0;
}
