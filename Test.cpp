#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
using namespace std;

#include "BinaryTree.hpp"
using namespace ariel;

TEST_CASE("Binary Tree of ints")
{
    BinaryTree<int> intree;
    CHECK_THROWS (intree.add_left(2,3));
    CHECK_NOTHROW(intree.add_root(0));
    CHECK_NOTHROW(intree.add_left(0, 1));
    CHECK_NOTHROW(intree.add_right(0, 2));
    CHECK_NOTHROW(intree.add_left(1, 3));
    CHECK_NOTHROW(intree.add_right(1, 4));
    CHECK_NOTHROW(intree.add_left(2, 5));
    CHECK_NOTHROW(intree.add_left(2, 6));
}
TEST_CASE("Binary Tree of string")
{
    BinaryTree<string> stringtree;
    CHECK_THROWS(stringtree.add_left("shay","talya"));
    CHECK_NOTHROW(stringtree.add_root("shay"));
    CHECK_NOTHROW(stringtree.add_left("shay", "talya"));
    CHECK_NOTHROW(stringtree.add_right("shay", "tair"));
    CHECK_NOTHROW(stringtree.add_left("talya", "mayan"));
    CHECK_NOTHROW(stringtree.add_right("talya", "noam"));
    CHECK_NOTHROW(stringtree.add_left("tair", "yael"));
    CHECK_NOTHROW(stringtree.add_left("tair", "tamar"));

    
}


TEST_CASE("Binary Tree of char")
{
    BinaryTree<int> chartree;
    CHECK_THROWS(chartree.add_left('a','b'));
    CHECK_NOTHROW(chartree.add_root('a'));
    CHECK_NOTHROW(chartree.add_left('a', 'b'));
    CHECK_NOTHROW(chartree.add_right('a', 'c'));
    CHECK_NOTHROW(chartree.add_left('b', 'd'));
    CHECK_NOTHROW(chartree.add_right('b', 'e'));
    CHECK_NOTHROW(chartree.add_left('c', 'f'));
    CHECK_NOTHROW(chartree.add_left('c', 'g'));

}