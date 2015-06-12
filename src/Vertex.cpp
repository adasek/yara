/* 
 * File:   Vertex.cpp
 * Author: Adam Benda <adam@adasek.cz>
 * 
 * Created on June 12, 2015, 5:45 PM
 */

#include "Vertex.hpp"

Vertex::Vertex(GeoPoint * g) {
    this->associatedPoint=g;
}

Vertex::Vertex(const Vertex& orig) {
    this->associatedPoint=new GeoPoint(*(orig.getAssociatedPoint()) );
}

Vertex::~Vertex() {
}


bool Vertex::operator <(const Vertex& other) const{
   return this->associatedPoint < other.associatedPoint;
}

GeoPoint * Vertex::getAssociatedPoint() const{
    return this->associatedPoint;
}