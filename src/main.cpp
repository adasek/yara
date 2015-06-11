/* 
 * File:   main.cpp
 * Author: bedna
 *
 * Created on June 11, 2015, 12:04 PM
 */

#include <cstdlib>
#include <iostream>

#include "boost/graph/adjacency_list.hpp"
#include "boost/graph/topological_sort.hpp"
#include "boost/graph/astar_search.hpp"

using namespace std;
using namespace boost;

/*
 * 
 */
int main(int argc, char** argv) {
   enum files_e { dax_h, yow_h, boz_h, zow_h, foo_cpp, 
                 foo_o, bar_cpp, bar_o, libfoobar_a,
                 zig_cpp, zig_o, zag_cpp, zag_o, 
                 libzigzag_a, killerapp, N };

  typedef std::pair<Point, Point> Edge;
  Edge used_by[] = {
    Edge(dax_h, foo_cpp), Edge(dax_h, bar_cpp), Edge(dax_h, yow_h),
    Edge(yow_h, bar_cpp), Edge(yow_h, zag_cpp),
    Edge(boz_h, bar_cpp), Edge(boz_h, zig_cpp), Edge(boz_h, zag_cpp),
    Edge(zow_h, foo_cpp), 
    Edge(foo_cpp, foo_o),
    Edge(foo_o, libfoobar_a),
    Edge(bar_cpp, bar_o),
    Edge(bar_o, libfoobar_a),
    Edge(libfoobar_a, libzigzag_a),
    Edge(zig_cpp, zig_o),
    Edge(zig_o, libzigzag_a),
    Edge(zag_cpp, zag_o),
    Edge(zag_o, libzigzag_a),
    Edge(libzigzag_a, killerapp)
  };
  
  //N=number of Vertices
  
  typedef adjacency_list<vecS, vecS, bidirectionalS, 
      property<vertex_color_t, default_color_type>
    > Graph;
  Graph g(used_by, used_by + sizeof(used_by) / sizeof(Edge), N);
  typedef graph_traits<Graph>::vertex_descriptor Vertex;
  
  
    return 0;
}

