/* 
 * File:   Graph.cpp
 * Author: bedna
 * 
 * Created on June 12, 2015, 1:34 PM
 */

/*
 Some resources:
http://programmingexamples.net/wiki/CPP/Boost/CreateGraph
http://stackoverflow.com/questions/671714/modifying-vertex-properties-in-a-boostgraph
 
 
 */

#include "Graph.hpp"

Graph::Graph() {
    //Temporary: load data in constructor
   Point * p = new Point(50,30);
   points.insert(p);
   
}

Graph::Graph(const Graph& orig) {
}

Graph::~Graph() {
}

Point * Graph::find(const Point& point){
//TODO


}
