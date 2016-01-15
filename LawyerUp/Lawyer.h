//
//  Lawyer.h
//  LawyerUp
//
//  Created by Graeme Harrison on 2016-01-14.
//  Copyright © 2016 Graeme Harrison. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Practice.h"

@interface Lawyer : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *specialty;
@property (nonatomic, strong) NSNumber *rate;
@property (nonatomic, strong) NSMutableDictionary *clientList;

-(instancetype)initWithName:(NSString *)name;

@end
