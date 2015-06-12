/* 
 * File:   Graph.hpp
 * Author: bedna
 *
 * Created on June 12, 2015, 1:34 PM
 */

#ifndef GRAPH_HPP
#define	GRAPH_HPP

#include <set>

#include "Point.hpp"
#include "Edge.hpp"


class Graph {
    typedef std::set<Point *> PointC;
    typedef std::set<Edge *> EdgeC;
    
public:
    Graph();
    Graph(const Graph& orig);
    virtual ~Graph();
    
    ///Searches for a point that is EQUAL with parameter
    Point * find(const Point& point);
     
private:
    PointC points;
    EdgeC edges;
};

#endif	/* GRAPH_HPP */

