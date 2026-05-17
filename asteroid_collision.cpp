#include<iostream>
#include<vector>
using namespace std;
vector<int> asteroidCollision(vector<int>& asteroids) {
    vector<int> stack;
    for (int asteroid : asteroids) {
        bool destroyed = false;
        while (!stack.empty() && asteroid < 0 && stack.back() > 0) {
            if (stack.back() < -asteroid) {
                stack.pop_back();
            } else if (stack.back() == -asteroid) {
                stack.pop_back();
                destroyed = true;
                break;
            } else {
                destroyed = true;
                break;
            }
        }
        if (!destroyed) {
            stack.push_back(asteroid);
        }
    }
    return stack;
}

int main() {
    vector<int> asteroids = {5, 10, -5};
    vector<int> result = asteroidCollision(asteroids);
    cout << "Remaining asteroids: ";
    for (int asteroid : result) {
        cout << asteroid << " ";
    }
    cout << endl;
    return 0;
}