//
//  Associate.h
//  LawyerUp
//
//  Created by Graeme Harrison on 2016-01-14.
//  Copyright © 2016 Graeme Harrison. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Client.h"
#import "Lawyer.h"

@class Associate;

@protocol AssociateDelegate <NSObject>

-(void)addClientToClientList:(Client *)client forLawyer:(Lawyer *)lawyer;

-(int)payableAmountForClient:(Client *)client forLawyer:(Lawyer *)lawyer;

@end

@interface Associate : NSObject

@end
