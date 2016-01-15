//
//  Client.h
//  LawyerUp
//
//  Created by Graeme Harrison on 2016-01-14.
//  Copyright © 2016 Graeme Harrison. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Practice.h"

@interface Client : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *problem;

-(instancetype)initWithName:(NSString *)name problem:(NSString *)problem;

@end
