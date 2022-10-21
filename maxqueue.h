/**
 * @file maxqueue.h
 * @brief  Archivo de especificación del TDA MaxStack
 * @author
 */

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

/*
struct element {
    int value; // Current value to store
    int maximum; // Current max value in the structure
}^*/

class MaxQueue{
private:
    stack<int> first; //hacemos de int y no de element primero para ir paso a paso
    stack<int> second;

public:

    int front();
    bool empty() const;
    void push(int num);
    void pop();
    int size() const;

};