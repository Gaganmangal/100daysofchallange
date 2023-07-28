#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vector1;
    vector<int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "vetor1" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "size of vector 1" << vector1.size() << endl;
    cout << "vector 2" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "size of vector 1" << vector2.size() << endl;
    // ------------------------------------------------------------------
    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    vector1.at(0) = 1000;
    cout << "vector_2d" << endl;
    cout << vector_2d.at(0).at(0) << "\t" << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << "\t" << vector_2d.at(1).at(1) << endl;
    cout << "vetor1" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    return 0;
}