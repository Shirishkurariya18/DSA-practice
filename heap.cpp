#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Heap
{
    vector<int> vec;

public:
    void push(int val)
    { // 0(logn)
        // step 1
        vec.push_back(val);

        // fix heap
        int x = vec.size() - 1;
        int parI = (x - 1) / 2;

        while (parI >= 0 && vec[x] > vec[parI])
        {
            swap(vec[x], vec[parI]);
            x = parI;
            parI = (x - 1) / 2;
        }
    }

    void heapify(int i)
    {
        if (i >= vec.size())
        {
            return;
        }

        int l = 2 * i + 1;
        int r = 2 * i + 2;

        int maxIdx = i;
        if (l < vec.size() && vec[l] > vec[maxIdx])
        {
            maxIdx = l;
        }
        if (r < vec.size() && vec[r] > vec[maxIdx])
        {
            maxIdx = r;
        }
        swap(i, maxIdx);
        if (maxIdx != i)
        {
            heapify(maxIdx);
        }
    }
    void pop()
    {
        // step 1
        swap(vec[0], vec[vec.size() - 1]);

        // step 2
        vec.pop_back();

        // step 3
        heapify(0);
    }
    int top()
    {                  // 0(1)
        return vec[0]; // highes priority element
    }
    bool empty()
    {
        return vec.size() == 0;
    }
};

int main()
{

    Heap heap;
    heap.push(50);
    heap.push(10);
    heap.push(30);

    while (!heap.empty())
    {
        cout << "top = " << heap.top() << endl;
        heap.pop();
    }
    return 0;
}