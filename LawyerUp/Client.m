//
//  Client.m
//  LawyerUp
//
//  Created by Graeme Harrison on 2016-01-14.
//  Copyright © 2016 Graeme Harrison. All rights reserved.
//

#import "Client.h"

@implementation Client

- (instancetype)initWithName:(NSString *)name problem:(NSString *)problem
{
    self = [super init];
    if (self) {
        _name = name;
        _problem = problem;
    }
    return self;
}

@end
