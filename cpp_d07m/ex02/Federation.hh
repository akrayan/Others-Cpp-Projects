//
// Created by mouhou_b on 10/01/17.
//

#ifndef CPP_D07M_FEDERATION_HH
#define CPP_D07M_FEDERATION_HH

#include <string>
#include <iostream>
#include "Destination.hh"
#include "WarpSystem.hh"
#include "Borg.hh"

namespace Federation
{
    class Ship
    {
    private:
        int _length;
        int _width;
        short _maxWarp;
        std::string _name;
        WarpSystem::Core *core;
        Destination _location;
        Destination _home;

    public:
        Ship(int length, int width, std::string name);
        void setupCore(WarpSystem::Core *);
        void checkCore();
        bool move(int warp, Destination d);
        bool move(int warp);
        bool move(Destination d);
        bool move();
    };

    namespace Starfleet
    {

        class Captain
        {
        private:
            std::string _name;
            int _age;

        public:
            Captain(std::string name);
            std::string getName();
            int getAge();
            void setAge(int);
        };

        class Ship
        {
        private:
            int _length;
            int _width;
            std::string _name;
            short _maxWarp;
            WarpSystem::Core *core;
            Captain *captain;
            Destination _location;
            Destination _home;

        public:
            Ship(int length, int width, std::string name, short maxWarp);
            void setupCore(WarpSystem::Core *);
            void checkCore();
            void promote(Captain*);
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
        };

        class Ensign
        {
        private:
            std::string name;
        public:
            Ensign(std::string name);
        };
    }
}

#endif //CPP_D07M_FEDERATION_HH
