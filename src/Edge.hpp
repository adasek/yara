/* 
 * File:   Edge.hpp
 * Author: Adam Benda <adam@adasek.cz>
 *
 * Created on June 11, 2015, 4:21 PM
 */

#ifndef EDGE_HPP
#define	EDGE_HPP
#include "GeoPoint.hpp"

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
    GeoPoint * source;
    GeoPoint * dest;

};

#endif	/* EDGE_HPP */

