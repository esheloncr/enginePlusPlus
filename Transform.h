//
// Created by zemlia on 05.08.2021.
//

#ifndef ENGINEPLUSPLUS_TRANSFORM_H
#define ENGINEPLUSPLUS_TRANSFORM_H
#include "Vector.h"

class Transform {
private:
    Vector position;
    Vector rotation;
    Vector scale;
public:
    Vector getPosition(){
        return position;
    }
    Vector getRotation(){
        return rotation;
    }
    Vector getScale(){
        return scale;
    }
    void setPosition(Vector value){
        position = value;
    }
    void setRotation(Vector value){
        rotation = value;
    }
    void setScale(Vector value){
        scale = value;
    }
};


#endif //ENGINEPLUSPLUS_TRANSFORM_H
