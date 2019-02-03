#pragma once
#include<iostream>
#include "ibex.h"
using namespace ibex;

namespace sss{
    
    class sampledSwitchedSystem
    {
        public:
            double period;
            std::vector<Function *> dynamics;
            int nb_dynamics;
    };

    class node
    {
        public: 
            IntervalVector *Yinit;
            Affine2Vector *Ycurrent;
            std::vector<int> pattern;
    };
}


