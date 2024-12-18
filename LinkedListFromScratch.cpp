#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    int *link;
};

int main()
{
    vector<Node> n;

    Node n1;
    n1.data = 2;
    n1.link = NULL;

    int *curr;
    int *prev;
    int *start;

    curr, start, prev = &n1;
    return 0;
}