#include <iostream>
#include "WGraphMST.h"

using namespace std;

int main() {
    WGraphMST g;

    g.load("graph.txt");

    cout << "입력 그래프: graph.txt" << endl;
    g.display();

    cout << "MST By Kruskal's Algorithm" << endl;
    g.Kruskal();

    return 0;
}