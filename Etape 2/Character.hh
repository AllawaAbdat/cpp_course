#ifndef CHARACTER_HH
#define CHARACTER_HH

#include "AbstractEntity.hh"

class Character : public AbstractEntity {
    public:

        virtual void Draw() override;
        virtual void Update() override;
        virtual ~Character();

        const double &GetX() const;
        const double &GetY() const;
        const int &GetLife() const;

        void SetX(const double &X);
        void SetY(const double &Y);
        void SetLife(const int &Life);

    private:

        double X, Y;
        int Life;
        
    protected:

        Character();
};

#endif