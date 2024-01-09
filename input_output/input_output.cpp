//https://github.com/gdbq/lessons/tree/main/input_output
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {

    stringstream ss;
    double lat, lon;
    ifstream file("./coordinates.txt", ios::in);
    ss << file.rdbuf();
    while (!ss.eof()) {
        ss.ignore(1);
        ss >> lat;
        ss.ignore(2);
        ss >> lon;
        ss.ignore(2);
        if (50 <= lat && lat <= 80 && 20 <= lon && lon <= 45) {
            cout << lat << ", " << lon << endl;
        }

    }

    file.close();

    return 0;
}