/* 
 * File:   Vertex.hpp
 * Author: Adam Benda <adam@adasek.cz>
 *
 * Created on June 12, 2015, 5:45 PM
 */

#ifndef VERTEX_HPP
#define	VERTEX_HPP
class GeoPoint;     // forward declaration

#include "GeoPoint.hpp"


class Vertex {
public:
    Vertex(GeoPoint*  g);
    Vertex(const Vertex& orig);
    virtual ~Vertex();
    GeoPoint * getAssociatedPoint() const;
private:
    GeoPoint * associatedPoint;
    bool operator <(const Vertex&) const;
    
};

#endif	/* VERTEX_HPP */

