#ifndef MOVESTATE_H
#define MOVESTATE_H

class Traveller; 

class MoveState {
protected:
    Traveller* context;

public:
    virtual ~MoveState();
    virtual void changeState(Traveller* traveller) = 0; 

    virtual void move() = 0; 
};

class OnFootState : public MoveState {
public:
    void changeState(Traveller* traveller) override;
    void move() override;
};

class ByCarState : public MoveState {
public:
    void changeState(Traveller* traveller) override;
    void move() override;
};

class ByAirState : public MoveState {
public:
    void changeState(Traveller* traveller) override;
    void move() override;
};

#endif // MOVESTATE_H