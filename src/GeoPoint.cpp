/* 
 * File:   GeoPoint.cpp
 * Author: Adam Benda <adam@adasek.cz>
 * 
 * Created on June 11, 2015, 12:28 PM
 */

#include "GeoPoint.hpp"
#include <cstdlib> //NULL, omfg

GeoPoint::GeoPoint(double lat,double lon): x(lat),y(lon){
}

GeoPoint::GeoPoint(const GeoPoint& orig) {
    this->x=orig.x;
    this->y=orig.y;
    this->associatedVertex=NULL;
    this->associatedEdge=NULL;
}

GeoPoint::~GeoPoint() {
}

double GeoPoint::deg2rad(double deg) const{
    return (deg/180) * M_PI;
}

double GeoPoint::getXrad() const{
    return deg2rad(this->x);
}

double GeoPoint::getYrad() const{
    return deg2rad(this->y);
}
    
bool GeoPoint::operator <(const GeoPoint& other) const{
    if(this->x != other.x){
        return this->x < other.x;
    }else{
        return this->y < other.y;
    }    
}

double GeoPoint::distance(const GeoPoint & B) const{
    // http://www.movable-type.co.uk/scripts/latlong.html
    
    double d_lat = this->getXrad() - B.getXrad();
    double d_lon = this->getYrad() - B.getYrad();
    double a = sin(d_lat/2) * sin(d_lon/2) + 
                cos(this->getXrad()) * cos(B.getXrad()) *
                sin(this->getYrad()) * sin(B.getYrad());
    double c = 2 * atan2(sqrt(a), sqrt(1-a));
    return c * PLANET_RADIUS;
}

