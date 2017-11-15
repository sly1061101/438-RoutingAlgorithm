//
//  Solver_DistVec.hpp
//  438-RountingAlgorithm
//
//  Created by Liuyi Shi on 11/15/17.
//  Copyright © 2017 Liuyi Shi. All rights reserved.
//

#ifndef Solver_DistVec_hpp
#define Solver_DistVec_hpp

#include <stdio.h>
#include "Solver.hpp"

namespace solver{
    class Solver_DistVec: public Solver{
    public:
        Solver_DistVec(ForwardingTable& f_in):Solver(f_in){};
        
        void calculate_forwarding_table(){}
    };
}

#endif /* Solver_DistVec_hpp */
