#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    //Examples 1
    std::cout << "____________Example 1 Auto ForLoop _____________ " << "\n";

    std::cout << "Hello Dooshima know Auto to figure out the type itself\n";
    cout << "   " << "\n";

    //use auto figure out the type it self
    int scores[]{ 100,90,97 };

    for (auto score : scores) {

        std::cout << "Score : " << score << "\n";
    }


    //Example 2
    cout << "   " << "\n";

    std::cout << "____________Example 2 Vector _____________ " << "\n";

    vector<double> temps{ 87.2, 77.1, 80.0, 72.5 };

    double average_temp {};
    double running_sum {};

    for (auto temp : temps) {
        running_sum += temp;

        cout <<"Running Sum : " << running_sum << "\n";
        cout << "   " << "\n";

    }
    average_temp = running_sum / temps.size();
    cout << fixed << setprecision(1);
    cout << " Average temp : " << average_temp << "\n";

    //Example 3
    cout << "   " << "\n";

    std::cout << "____________Example 3 Iterate with string _____________ " << "\n";
    for (auto c : "FRANK") {
        cout << c << endl;
    }


    //Example 4
    cout <<"   " << "\n";

    std::cout << "____________Example 4 _____________ " << "\n";

    int Scores2[]{ 10,20,30,40 };
    for (auto score2 : Scores2) {
        cout<<"Another Score: " << score2 << "\n";

    }


}
