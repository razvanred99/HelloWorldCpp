#include <iostream>

using namespace std;

namespace generic{
    template<class T>
    inline T sum(const T a, const T b) {
        return a + b;
    }

    namespace hello{
        template<class T>
        inline T divide(const T a, const T b) {
            return a / b;
        }
    }
}

void tryingGoto();

inline string concat(string a, string b);

int main() {

    using namespace generic;
    using namespace generic::hello;

    //tryingGoto();
    cout << concat("hello ", "world") << endl;
    cout << hello::divide<int>(5, 5) << endl;

    return 0;
}

inline string concat(const string a, const string b) {
    return a + b;
}

void tryingGoto() {
    int count = 0;

    helloWorld:
    cout << "Hello, World! " << count << std::endl;
    count++;

    if (count < 10) goto helloWorld;

    cout << "finished" << endl;
}

