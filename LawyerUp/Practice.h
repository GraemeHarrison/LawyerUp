//
//  Practice.h
//  LawyerUp
//
//  Created by Graeme Harrison on 2016-01-14.
//  Copyright © 2016 Graeme Harrison. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SpecialtyType) {
    family,
    patent,
    criminal,
    corporate
};

@interface Practice : NSObject

@property (nonatomic, strong) NSDictionary *hourlyRates;
@property (nonatomic, assign) SpecialtyType specialty;

-(NSString *)convertEnumToString:(SpecialtyType)type;

@end
