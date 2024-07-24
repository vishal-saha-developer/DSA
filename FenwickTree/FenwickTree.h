#ifndef FENWICK_TREE
#define FENWICK_TREE

#include <stdlib.h>
#include <vector>

template <typename T>
class FenwickTree
{
private:
    const size_t fTreeSize;
    std::vector<T> fTree;

public:
    FenwickTree(int n);
    FenwickTree(std::vector<T> &arr);
    ~FenwickTree();

    T query(int qs, int qe);
    void increase(int index, T inc);
};

#endif
