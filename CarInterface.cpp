class CarInterface {
public:
    virtual void EngineStart() = 0;
    virtual void handbrake() = 0;
    virtual void accelerate(int speeding) = 0;
    virtual void decelerate(int speeding) = 0;
    virtual void steerLeft(int degree) = 0;
    virtual void steerRight(int degree) = 0;
    virtual void upshift() = 0;
    virtual void downshift() = 0;
    virtual ~CarInterface() {}
};
