//
//  Lawyer.m
//  LawyerUp
//
//  Created by Graeme Harrison on 2016-01-14.
//  Copyright © 2016 Graeme Harrison. All rights reserved.
//

#import "Lawyer.h"

@implementation Lawyer

- (instancetype)initWithName:(NSString *)name
{
    self = [super init];
    if (self) {
        _name = name;
        _clientList = [[NSMutableDictionary alloc] init];
    }
    return self;
}

@end
