/* 
 * File:   Edge.cpp
 * Author: Adam Benda <adam@adasek.cz>
 * 
 * Created on June 11, 2015, 4:21 PM
 */

#include "Edge.hpp"

Edge::Edge() {
}

Edge::Edge(const Edge& orig) {
}

Edge::~Edge() {
}

bool Edge::operator <(const Edge& other) const{
    if(this->source != other.source){
        return this->source < other.source;
    }else{
        return this->dest < other.dest;
    }

}

