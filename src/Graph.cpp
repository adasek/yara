/* 
 * File:   Graph.cpp
 * Author: Adam Benda <adam@adasek.cz>
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
   GeoPoint * p = new GeoPoint(50,30);
   Vertex * v = new Vertex(p);
   vertices.insert(v);
   
}

Graph::Graph(const Graph& orig) {
}

Graph::~Graph() {
}

GeoPoint * Graph::find(const GeoPoint& point){
//TODO


}
