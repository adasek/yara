/* 
 * File:   Point.hpp
 * Author: bedna
 *
 * Created on June 11, 2015, 12:28 PM
 */
#include <math.h>

#ifndef POINT_HPP
#define	POINT_HPP

#define PLANET_RADIUS 6371000; //Planet diameter in metres

/**
 * Represents a Place on Earth surface that has
 * WGS84 coordinates  
 *
 */
class Point {
public:
    Point(double lat,double lon);
    Point(const Point& orig);
    virtual ~Point();
    double distance(const Point & B) const; //shortest distance (on the simplified Earth surface = sphere) 
    double getXrad() const;
    double getYrad() const;
    bool operator <(const Point&) const;
    
private:
    double x; //latitude -90..90
    double y; //longtitude -180..180
    double deg2rad(double deg) const;
};

#endif	/* POINT_HPP */

