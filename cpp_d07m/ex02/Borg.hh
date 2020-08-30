//
// Borg.hh for Borg.hh in /home/rayan/Piscine_CPP/cpp_d07m/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 10 12:07:42 2017 Rayan
// Last update Tue Jan 10 22:07:40 2017 Rayan
//

#ifndef BORG_HH
# define BORG_HH

namespace Borg
{
    class Ship
    {
    private:
        int _side;
        short _maxWarp;
        WarpSystem::Core *core;
        Destination _location;
        Destination _home;

    public:
        Ship();
        void setupCore(WarpSystem::Core *core);
        void checkCore();
        bool move(int warp, Destination d);
        bool move(int warp);
        bool move(Destination d);
        bool move();
    };
}

#endif //BORG_HH
