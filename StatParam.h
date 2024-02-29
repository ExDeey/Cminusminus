#include "FundamentalSystem.h"

using namespace std;

#ifndef ABILITY_CPP
#define ABILITY_CPP

class Turn : public StatParam {
    protected:
    string name = "Turn";
    int targetValue = 0;
    void virtual action() override;
    public:
    Turn(StatusBlock *parent, Ability *createBy, int rawValue);
    Turn(GameObject *target, Ability *createBy, int rawValue);
};

class Hunger : public StatParam {
    protected:
    string name = "Hunger";
    int targetValue = 0;
    void virtual action() override;
    public:
    Hunger(StatusBlock *parent, Ability *createBy, int rawValue);
    Hunger(GameObject *target, Ability *createBy, int rawValue);
};

class Health : public StatParam {
    protected:
    string name = "Health";
    int targetValue = 0;
    void virtual action() override;
    public:
    Health(StatusBlock *parent, Ability *createBy, int rawValue);
    Health(GameObject *target, Ability *createBy, int rawValue);
};

class Stemina : public StatParam {
    protected:
    string name = "Stemina";
    int targetValue = 0;
    void virtual action() override;
    public:
    Stemina(StatusBlock *parent, Ability *createBy, int rawValue);
    Stemina(GameObject *target, Ability *createBy, int rawValue);
};

class Atk : public StatParam {
    protected:
    string name = "Atk";
    int targetValue = 0;
    void virtual action() override;
    public:
    Atk(StatusBlock *parent, Ability *createBy, int rawValue);
    Atk(GameObject *target, Ability *createBy, int rawValue);
};

class Def : public StatParam {
    protected:
    string name = "Def";
    int targetValue = 0;
    void virtual action() override;
    public:
    Def(StatusBlock *parent, Ability *createBy, int rawValue);
    Def(GameObject *target, Ability *createBy, int rawValue);
};

class Slight : public StatParam {
    protected:
    string name = "Slight";
    int targetValue = 0;
    void virtual action() override;
    public:
    Slight(StatusBlock *parent, Ability *createBy, int rawValue);
    Slight(GameObject *target, Ability *createBy, int rawValue);
};

#endif