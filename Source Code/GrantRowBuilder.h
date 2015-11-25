//
//  GrantRowBuilder.h
//  Row Builder
//
//  Created by Jason Smash on 2015-10-17.
//  Copyright (c) 2015 Jason Smash. All rights reserved.
//

#include <stdio.h>
#include "Grant_rowObject.h"
#include <string>
#include "attributeretriever.h"
#include "ColIndex.h"
#include "ErrorChecker.h"

class GrantRowBuilder{
public:
    GrantRowBuilder(){};
    
    
    Grant_rowObject buildRow(string data, ColIndex index);
    
};
