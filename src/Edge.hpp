/* 
 * File:   Edge.hpp
 * Author: bedna
 *
 * Created on June 11, 2015, 4:21 PM
 */

#ifndef EDGE_HPP
#define	EDGE_HPP
#include "Point.hpp"

class Edge {

    enum layerTypes {
        silnice,
        mimourovne,
        nezpevnene_cesty,
        pasaze,
        chodniky,
        vyslapane_nablizky
    };
    
public:
    Edge();
    Edge(const Edge& orig);
    virtual ~Edge();
    
    bool operator <(const Edge&) const;
    //bool operator <(const Point&);
    
private:
    double distanceOrig; //Distance in minutes based on datafile
    Point * source;
    Point * dest;

};

#endif	/* EDGE_HPP */

