/* 
 * File:   Point.cpp
 * Author: bedna
 * 
 * Created on June 11, 2015, 12:28 PM
 */

#include "Point.hpp"

Point::Point(double lat,double lon): x(lat),y(lon){
}

Point::Point(const Point& orig) {
    this->x=orig.x;
    this->y=orig.y;
}

Point::~Point() {
}

double Point::deg2rad(double deg) const{
    return (deg/180) * M_PI;
}

double Point::getXrad() const{
    return deg2rad(this->x);
}

double Point::getYrad() const{
    return deg2rad(this->y);
}
    
bool Point::operator <(const Point& other) const{
    if(this->x != other.x){
        return this->x < other.x;
    }else{
        return this->y < other.y;
    }    
}

double Point::distance(const Point & B) const{
    // http://www.movable-type.co.uk/scripts/latlong.html
    
    double d_lat = this->getXrad() - B.getXrad();
    double d_lon = this->getYrad() - B.getYrad();
    double a = sin(d_lat/2) * sin(d_lon/2) + 
                cos(this->getXrad()) * cos(B.getXrad()) *
                sin(this->getYrad()) * sin(B.getYrad());
    double c = 2 * atan2(sqrt(a), sqrt(1-a));
    return c * PLANET_RADIUS;
}

