//
//  Practice.m
//  LawyerUp
//
//  Created by Graeme Harrison on 2016-01-14.
//  Copyright © 2016 Graeme Harrison. All rights reserved.
//

#import "Practice.h"

@implementation Practice

- (instancetype)init
{
    self = [super init];
    if (self) {
        _hourlyRates = [[NSDictionary alloc] initWithObjectsAndKeys:@"200.00", @"Family Law", @"380.50", @"Patent Law", @"405.99", @"Criminal Law", @"400", @"Corporate Law", nil];
    }
    return self;
}

-(NSString *)convertEnumToString:(SpecialtyType)type {
    NSString *result = nil;
    
    switch(type) {
        case 0:
            result = @"Family Law";
            break;
        case 1:
            result = @"Patent Law";
            break;
        case 2:
            result = @"Criminal Law";
            break;
        case 3:
            result = @"Corporate Law";
        default:
            result = @"unknown";
    }
    
    return result;
}

@end
