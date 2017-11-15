//
//  Solver.hpp
//  438-RountingAlgorithm
//
//  Created by Liuyi Shi on 11/15/17.
//  Copyright © 2017 Liuyi Shi. All rights reserved.
//

#ifndef Solver_hpp
#define Solver_hpp

#include <stdio.h>
#include <vector>
#include <utility>

namespace solver {
    typedef unsigned int node_type;
    typedef std::vector<std::vector<std::pair<node_type, int>>> ForwardingTable;
    
    class Solver{
    protected:
        ForwardingTable& f;
        
    public:
        Solver(ForwardingTable& f_in):f(f_in){};
        
        void initiate_topology(){}
        void change_topology(){}
        void send_message(){}
        
        virtual void calculate_forwarding_table() = 0;
        
    };
}

#endif /* Solver_hpp */
