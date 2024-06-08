// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"

std::vector<char> getPerm(const Tree& tree, int n) {
    std::vector<char> temp;
    if (n <= tree.GetPermCount()) {
        tree.perm(n, &temp);
    }
    return temp;
}
