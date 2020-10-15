////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for smoke-test-project for undirected graphs.
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       18.09.2020
/// \copyright  © Sergey Shershakov 2020.
///             This code is for educational purposes of the course "Algorithms
///             and Data Structures" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// When altering code, a copyright line must be preserved.
///
////////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "ugraph.hpp"
#include "lbl_ugraph.hpp"
#include "ugraph_algos.hpp"

typedef EdgeLblUGraph<int, int> IntIntGraph;
typedef EdgeLblUGraph<char, int> CharIntGraph;
typedef std::set<typename CharIntGraph::Edge> CharIntGraphEdgesSet;

void test1()
{
//    CharIntGraph g;
//    g.addLblEdge('a', 'b', 4);
//    g.addLblEdge('b', 'c', 8);
//    g.addLblEdge('b', 'h', 11);
//    g.addLblEdge('c', 'd', 7);
//    g.addLblEdge('c', 'i', 2);
//    g.addLblEdge('c', 'f', 4);
//    g.addLblEdge('d', 'e', 9);
//    g.addLblEdge('d', 'f', 14);
//    g.addLblEdge('e', 'f', 10);
//    g.addLblEdge('f', 'g', 2);
//    g.addLblEdge('g', 'h', 1);
//    g.addLblEdge('g', 'i', 6);
//    g.addLblEdge('h', 'a', 8);
//    g.addLblEdge('h', 'i', 7);
//    CharIntGraphEdgesSet mstEdges = findMSTPrim(g);
}

int main()
{
    std::cout << "Let's do some undirected graphs!\n";
    test1();
    std::cout << "\n\nBye-bye!\n\n";
    return 0;
}