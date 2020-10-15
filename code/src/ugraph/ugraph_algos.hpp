////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Contains implementations of some algorithms for undirected graph.
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       21.09.2020
/// \copyright  © Sergey Shershakov 2020.
///             This code is for educational purposes of the course "Algorithms
///             and Data Structures" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// When altering code, a copyright line must be preserved.
///
////////////////////////////////////////////////////////////////////////////////


#ifndef UGRAPH_ALGOS_HPP
#define UGRAPH_ALGOS_HPP

#include <set>
#include <vector>
#include "ugraph.hpp"
#include "lbl_ugraph.hpp"
#include <map>


/// Finds a MST for the given graph \a g using Prim's algorithm.
template<typename Vertex, typename EdgeLbl>
struct priorityQueue{
    std::set< std::pair<int, Vertex> > Vertices_by_Weight;
    std::map< Vertex, Vertex > _edges;

    void insert(Vertex ver, EdgeLbl value, Vertex prevVer){
        Vertices_by_Weight.insert(std::make_pair(value,ver));
        _edges.insert(std::make_pair(ver,prevVer));
    }
    void set(Vertex CurrentVertex, EdgeLbl value, Vertex prevVer){
        bool flag = true;
        for(auto v : Vertices_by_Weight)
            if(v.second == CurrentVertex){
                flag = false;
                if(value < v.first){
                    v.first = value;
                    _edges[CurrentVertex] = prevVer;
                }
                break;
            }
        if(flag){
            Vertices_by_Weight.insert(std::make_pair(value,CurrentVertex));
            _edges.insert(std::make_pair(CurrentVertex, prevVer));
        }
    }
    std::pair<Vertex,Vertex> getMin(){
        Vertex d = Vertices_by_Weight.begin() -> second;
        std::pair<Vertex,Vertex> h = std::make_pair(_edges[d], Vertices_by_Weight.begin() -> second);
        return h;
    }
    void remove(Vertex CurrentVertex){
        for(auto v : Vertices_by_Weight){
            if(v.second == CurrentVertex){
                _edges.erase(v.second);
                Vertices_by_Weight.erase(v);
            }
        }
    }
    EdgeLbl getCost(Vertex CurrentVertex){
        for(auto v : Vertices_by_Weight){
            if(v.second == CurrentVertex)
            {
                return v.first;
            }
        }
    }
    bool isEmpty(){
        return Vertices_by_Weight.empty();
    }

};
template<typename Vertex, typename EdgeLbl>
std::set<typename EdgeLblUGraph<Vertex, EdgeLbl>::Edge>
    findMSTPrim(const EdgeLblUGraph<Vertex, EdgeLbl>& g)
{
    typedef std::multimap<Vertex, Vertex> AdjList;
    typedef typename AdjList::iterator AdjListIter;
    typedef typename AdjList::const_iterator AdjListCIter;
    typedef std::pair<AdjListCIter, AdjListCIter> AdjListCIterPair;
    typedef std::pair<Vertex, Vertex> Edge;
    /// Set of vertices.
    typedef std::set<Vertex> VerticesSet;
    /// Iterator type for vertices.
    typedef typename VerticesSet::iterator VertexIter;
    /// Pair of vertex iterators.
    typedef std::pair<VertexIter, VertexIter> VertexIterPair;
    typedef std::multimap<Vertex, Vertex> AdjList;
    typedef typename AdjList::iterator AdjListIter;
    typedef typename AdjList::const_iterator AdjListCIter;
    typedef std::pair<AdjListCIter, AdjListCIter> AdjListCIterPair;

    std::set<typename EdgeLblUGraph<Vertex, EdgeLbl>::Edge> res;
    std::set<Vertex> notVisited;
    std::set<Vertex> visited;
    priorityQueue<Vertex,int> pQueue;
    VertexIterPair pairVertexIter = g.getVertices();
    EdgeLbl min;
    EdgeLbl temp;
    bool flag = true;
    Vertex minVertex;

    for(VertexIter i = pairVertexIter.first; i != pairVertexIter.second; i++){
        notVisited.insert(*i); //Add to notVisited all
    }
    for(VertexIter i = pairVertexIter.first; i != pairVertexIter.second; i++){  //check for min
        for(VertexIter j = pairVertexIter.first; j != pairVertexIter.second; j++){
            if(g.isEdgeExists(*i,*j)){
                if(flag){
                    g.getLabel(*i,*j,min);
                    flag = false;
                }
                g.getLabel(*i,*j,temp);
                if(min > temp){
                    min = temp;
                    minVertex = *i;
                }
            }
        }
    }
    visited.insert(minVertex); // add min to visited
    notVisited.erase(minVertex); //delete it from notvisited
    Vertex toVertex;
    Vertex currentVertex = minVertex;
    while(!notVisited.empty()){
        AdjListCIterPair adjEdgeCIterPair = g.getAdjEdges(currentVertex);
        for(AdjListCIter i = adjEdgeCIterPair.first; i != adjEdgeCIterPair.second; i++){
            if(i -> first != currentVertex)
                toVertex = i ->first;
            else
                toVertex = i -> second;
            if(notVisited.find(toVertex) != notVisited.end()){
                g.getLabel(currentVertex, toVertex, temp);
                pQueue.set(toVertex, temp, currentVertex);
            }
        }

        res.insert(pQueue.getMin());
        Vertex minAddtoVisited = pQueue.getMin().second;
        pQueue.remove(minAddtoVisited);
        notVisited.erase(minAddtoVisited);
        visited.insert(minAddtoVisited);
        currentVertex = minAddtoVisited;
    }


    return res;
}

/// Finds a MST for the given graph \a g using Kruskal's algorithm.
template<typename Vertex, typename EdgeLbl>
std::set<typename EdgeLblUGraph<Vertex, EdgeLbl>::Edge>
    findMSTKruskal(const EdgeLblUGraph<Vertex, EdgeLbl>& g)
{
    // TODO: implement this!

    std::set<typename EdgeLblUGraph<Vertex, EdgeLbl>::Edge> res;
    return res;
}


#endif // UGRAPH_ALGOS_HPP
