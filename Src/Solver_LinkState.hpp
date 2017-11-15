//
//  Solver_LinkState.hpp
//  438-RountingAlgorithm
//
//  Created by Liuyi Shi on 11/15/17.
//  Copyright © 2017 Liuyi Shi. All rights reserved.
//

#ifndef Solver_LinkState_hpp
#define Solver_LinkState_hpp

#include <stdio.h>
#include "Solver.hpp"

namespace solver{
    class Solver_LinkState: public Solver{
    public:
        Solver_LinkState(ForwardingTable& f_in):Solver(f_in){};
        
        void calculate_forwarding_table(){}
    };
}

#endif /* Solver_LinkState_hpp */
