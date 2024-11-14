#include <iostream>
#include <cstdlib>
using namespace std;

int random(int from, int to) {
    int randNum = rand() % (from - to + 1) + from;
    return randNum;
}

int main()
{
    srand((unsigned)time(NULL));
    cout << "\nRandom number from the range [10 - 20] : " << random(10, 20) << endl;
    return 0;
}
