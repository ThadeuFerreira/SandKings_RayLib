#include "raylib.h"

#pragma once

using namespace std;

//Ant State
enum AntState
{
    SEARCHING,
    FOLLOWING,
    RETURNING,
    FIGTHING,
    EATING
};

class Ant
{
    public:

    int NestID;

    Transform head;
    Transform antennaLeft;
    Transform antennaRight;
    Transform perceptionCenter;

    AntState currentState;
    Vector2 obstacleAvoidForce;

    Vector2 currentVelocity;
    Vector2 collisionAvoidForce;
    Vector2 followForce;

    float perceptionRadius;
    float energy;
    float maxEnergy;
    float load;
    float maxLoad;

    float age;
    float maxAge;


    void Update();
    void Draw();


    Ant(int NestId);



    private:

};