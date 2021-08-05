//
// Created by zemlia on 05.08.2021.
//

#ifndef ENGINEPLUSPLUS_GAMEOBJECT_H
#define ENGINEPLUSPLUS_GAMEOBJECT_H
#include "Transform.h"

class GameObject {
private:
    Transform transform;
public:
    Transform getTransform(){
        return transform;
    }
    void setTransform(Transform value){
        transform = value;
    }
};


#endif //ENGINEPLUSPLUS_GAMEOBJECT_H
