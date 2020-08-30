//
// WarpSystem.hh for WarpSystem.hh in /home/rayan/Piscine_CPP/cpp_d07m/ex01
//
// Made by Rayan
// Login   <raihane.akkache@epitech.net>
//
// Started on  Tue Jan 10 22:12:04 2017 Rayan
// Last update Tue Jan 10 22:29:17 2017 Rayan
//

#ifndef WARPSYSTEME_HH
# define WARPSYSTEME_HH

namespace WarpSystem
{
    class QuantumReactor
    {
    private:
        bool _stability;

    public:
        QuantumReactor();
        bool isStable();
        void setStability(bool);

    };

    class Core
    {
    private:
        QuantumReactor *_coreReactor;

    public:
        Core(QuantumReactor *_coreReactor);
        QuantumReactor *checkreactor();

    };
}

#endif //EX00_WARPSYSTEME_HH
