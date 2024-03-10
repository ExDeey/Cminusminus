#include "FundamentalSystem.h"

using namespace std;

#ifndef ABILITY_CPP
#define ABILITY_CPP

//very interesting if add "from: " string  to constructor parameter, it will show where it got affliction from
//whether its from itself or another livingthing 

class TurnEater : public Affliction {

};

class Health_Aff : public Affliction {
    protected:
    string name = "Health_Aff";
    string targetValue = "Health";
    int duration,valueIncrease,value;
    bool permanent;
    public:
    Health_Aff(StatusBlock *parent, int duration, int valueIncrease, int value, bool permanent);
    Health_Aff(GameObject *target, int duration, int valueIncrease, int value, bool permanent);
};

class Hunger_Aff : public Affliction {
    protected:
    string name = "Hunger_Aff";
    string targetValue = "Hunger";
    int duration,valueIncrease,value;
    bool permanent;
    public:
    Hunger_Aff(StatusBlock *parent, int duration, int valueIncrease, int value, bool permanent);
    Hunger_Aff(GameObject *target, int duration, int valueIncrease, int value, bool permanent);
};

class Stamina_Aff : public Affliction {
    protected:
    string name = "Stamina_Aff";
    string targetValue = "Stamina";
    int duration,valueIncrease,value;
    bool permanent;
    public:
    Stamina_Aff(StatusBlock *parent, int duration, int valueIncrease, int value, bool permanent);
    Stamina_Aff(GameObject *target, int duration, int valueIncrease, int value, bool permanent);
};


class Attack_Aff : public Affliction {
    protected:
    string name = "Attack_Aff";
    string targetValue = "Atk";
    int duration,valueIncrease,value;
    bool permanent;
    public:
    Attack_Aff(StatusBlock *parent, int duration, int valueIncrease, int value, bool permanent);
    Attack_Aff(GameObject *target, int duration, int valueIncrease, int value, bool permanent);
};


class Defence_Aff : public Affliction {
    protected:
    string name = "Defence_Aff";
    string targetValue = "Def";
    int duration,valueIncrease,value;
    bool permanent;
    public:
    Defence_Aff(StatusBlock *parent, int duration, int valueIncrease, int value, bool permanent);
    Defence_Aff(GameObject *target, int duration, int valueIncrease, int value, bool permanent);
};

//sight shouldn't be incremented alot so remove valIncrease
class Sight_Aff : public Affliction {
    protected:
    string name = "Sight_Aff";
    string targetValue = "Sight";
    int duration,value;
    bool permanent;
    public:
    Sight_Aff(StatusBlock *parent, int duration, int value, bool permanent);
    Sight_Aff(GameObject *target, int duration, int value, bool permanent);
};


class Speed_Aff : public Affliction {
    protected:
    string name = "Speed_Aff";
    string targetValue = "Speed";
    int duration,valueIncrease,value;
    bool permanent;
    public:
    Speed_Aff(StatusBlock *parent, int duration, int valueIncrease, int value, bool permanent);
    Speed_Aff(GameObject *target, int duration, int valueIncrease, int value, bool permanent);
};





// class Hunger_Decrease : public Affliction {
//     protected:
//     string name = "Hunger_Decrease";
//     string targetValue = "Hunger";
//     int duration = 1;
//     int valueIncrease = 0;
//     int value = -5;
//     bool permanent = true;
//     public:
//     Hunger_Decrease(StatusBlock *parent);
//     Hunger_Decrease(GameObject *target);
// };

// class Hunger_Increase : public Affliction {
//     protected:
//     string name = "Hunger_Increase";
//     string targetValue = "Hunger";
//     int duration = 1;
//     int valueIncrease = 0;
//     int value = 5;
//     bool permanent = true;
//     public:
//     Hunger_Increase(StatusBlock *parent);
//     Hunger_Increase(GameObject *target);
// };

// class Const_Hunger_Increase : public Affliction {
//     protected:
//     string name = "Const_Hunger_Increase";
//     string targetValue = "Hunger";
//     int duration = 10;
//     int valueIncrease = 1;
//     int value = 0;
//     bool permanent = false;
//     public:
//     Const_Hunger_Increase(StatusBlock *parent);
//     Const_Hunger_Increase(GameObject *target);
// };

// class Const_Hunger_Decrease : public Affliction {
//     protected:
//     string name = "Const_Hunger_Decrease";
//     string targetValue = "Hunger";
//     int duration = 10;
//     int valueIncrease = 1;
//     int value = 0;
//     bool permanent = false;
//     public:
//     Const_Hunger_Decrease(StatusBlock *parent);
//     Const_Hunger_Decrease(GameObject *target);
// };


// class Health_Decrease : public Affliction {
//     protected:
//     string name = "Health_Decrease";
//     string targetValue = "Health";
//     int duration = 1;
//     int valueIncrease = 0;
//     int value = -10;
//     bool permanent = true;
//     public:
//     Health_Decrease(StatusBlock *parent);
//     Health_Decrease(GameObject *target);
// };

// class Health_Increase : public Affliction {
//     protected:
//     string name = "Health_Increase";
//     string targetValue = "Health";
//     int duration = 1;
//     int valueIncrease = 0;
//     int value = 10;
//     bool permanent = true;
//     public:
//     Health_Increase(StatusBlock *parent);
//     Health_Increase(GameObject *target);
// };

// class Const_Health_Increase : public Affliction {
//     protected:
//     string name = "Const_Health_Increase";
//     string targetValue = "Health";
//     int duration = 10;
//     int valueIncrease = 1;
//     int value = 0;
//     bool permanent = false;
//     public:
//     Const_Health_Increase(StatusBlock *parent);
//     Const_Health_Increase(GameObject *target);
// };

// class Const_Health_Decrease : public Affliction {
//     protected:
//     string name = "Const_Health_Decrease";
//     string targetValue = "Health";
//     int duration = 10;
//     int valueIncrease = 1;
//     int value = 0;
//     bool permanent = false;
//     public:
//     Const_Health_Decrease(StatusBlock *parent);
//     Const_Health_Decrease(GameObject *target);
// };






#endif
