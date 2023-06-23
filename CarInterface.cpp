#include <iostream>

class CarInterface {
protected:
    virtual void CarName() = 0;
    virtual void Generation() = 0;
    virtual void EngineStatus() = 0;
    virtual void TuneAvailableStep() = 0;
    virtual void accelerate() = 0;
    virtual void Gearbox() = 0;
    virtual ~CarInterface() {}
};

class Nissan_350z : public CarInterface {
    std::string name;
    int generation;
    std::string Engine;
    std::string gearbox;
    int hp;
    int torque;
    int step;
    int speedingtime;

    void CarName() override {
        std::cout << "Name: " << name << std::endl;
    }
    void Generation() override {
        std::cout << "Generation: " << generation << std::endl;
    }
    void EngineStatus() override {
        std::cout << "Engine: " << Engine << ' ' << hp << "horse power and " << torque << "N/M at 6800 RPM" << std::endl;
    }
    void TuneAvailableStep() override {
        std::cout << "Available tuning stages: " << step << std::endl;
    }
    void accelerate() override {
        std::cout << "1/4 mile time: " << speedingtime << std::endl;
    }
    void Gearbox() override {
        std::cout << "Gearbox: " << gearbox << std::endl;
    }
public:
    Nissan_350z() {
        name = "Nissan 350z fairlady";
        generation = 3;
        Engine = "3.5 l VQ35HR V6";
        gearbox = "6-speed FS6R31A manual";
        hp = 306;
        torque = 363;
        step = 3;
        speedingtime = 13;
    }
    void display() {
        CarName();
        Generation();
        EngineStatus();
        TuneAvailableStep();
        accelerate();
        Gearbox();
    }
    Nissan_350z(const Nissan_350z& obj) {
        this->name = obj.name;
        this->generation = obj.generation;
        this->Engine = obj.Engine;
        this->gearbox = obj.gearbox;
        this->hp = obj.hp;
        this->torque = obj.torque;
        this->step = obj.step;
        this->speedingtime = obj.speedingtime;
    }
    Nissan_350z& operator = (const Nissan_350z& obj) {
        this->name = obj.name;
        this->generation = obj.generation;
        this->Engine = obj.Engine;
        this->gearbox = obj.gearbox;
        this->hp = obj.hp;
        this->torque = obj.torque;
        this->step = obj.step;
        this->speedingtime = obj.speedingtime;
    }
    ~Nissan_350z() override{}
};

int main() {
    Nissan_350z fairlady;
    fairlady.display();
}