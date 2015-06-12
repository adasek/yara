/* 
 * File:   Point.hpp
 * Author: bedna
 *
 * Created on June 11, 2015, 12:28 PM
 */
#include <math.h>

#ifndef POINT_HPP
#define	POINT_HPP
class Vertex;     // forward declaration
class Edge;     // forward declaration
#include "Vertex.hpp"
#include "Edge.hpp"

#define PLANET_RADIUS 6371000; //Planet diameter in metres



/**
 * Represents a Place on Earth surface that has
 * WGS84 coordinates  
 *
 */
class GeoPoint {
public:
    GeoPoint(double lat,double lon);
    GeoPoint(const GeoPoint& orig);
    virtual ~GeoPoint();
    double distance(const GeoPoint & B) const; //shortest distance (on the simplified Earth surface = sphere) 
    double getXrad() const;
    double getYrad() const;
    bool operator <(const GeoPoint&) const;
    void setVertex();
    void setEdge();
    
private:
    double x; //latitude -90..90
    double y; //longtitude -180..180
    double deg2rad(double deg) const;
    Vertex * associatedVertex;
    Edge * associatedEdge;
};

#endif	/* POINT_HPP */

