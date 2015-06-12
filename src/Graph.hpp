/* 
 * File:   Graph.hpp
 * Author: Adam Benda <adam@adasek.cz>
 *
 * Created on June 12, 2015, 1:34 PM
 */

#ifndef GRAPH_HPP
#define	GRAPH_HPP

#include <set>

#include "GeoPoint.hpp"
#include "Edge.hpp"


class Graph {
    typedef std::set<Vertex *> VertexC;
    typedef std::set<Edge *> EdgeC;
    
public:
    Graph();
    Graph(const Graph& orig);
    virtual ~Graph();
    
    ///Searches for a Point (associated with Vertex) that is EQUAL to parameter
    GeoPoint * find(const GeoPoint& point);
     
private:
    VertexC vertices;
    EdgeC edges;
};

#endif	/* GRAPH_HPP */

