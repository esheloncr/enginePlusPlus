//
// Created by zemlia on 05.08.2021.
//

#ifndef ENGINEPLUSPLUS_VECTOR_H
#define ENGINEPLUSPLUS_VECTOR_H


class Vector {
private:
    float x;
    float y;
public:
    float getX(){
        return x;
    }
    float getY(){
        return y;
    }
    void setX(float value){
        x = value;
    }
    void setY(float value){
        y = value;
    }
};


#endif //ENGINEPLUSPLUS_VECTOR_H
