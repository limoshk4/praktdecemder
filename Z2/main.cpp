#include <iostream>
using namespace std;

template <typename Klukva>
class ArrayHandler {
private:
    Klukva* array;
    int size;

public:
    ArrayHandler(int sz) : size(sz) {
        array = new Klukva[size];
    }

    ~ArrayHandler() {
        delete[] array;
    }

    void writeArray(const Klukva  data[]) {
        for (int i = 0; i < size; ++i) {
            array[i] = data[i];
        }
    }

    void readReverseArray() const {
        for (int i = size - 1; i >= 0; --i) {
           cout << array[i] << " ";
        }
     cout << endl;
    }



};

int main() {

    const int size = 5;
    int data[size] = { 19, 222, 3, 0, 589 };

    ArrayHandler<int> handler(size);
    handler.writeArray(data);
    handler.readReverseArray();

    return 0;
}


