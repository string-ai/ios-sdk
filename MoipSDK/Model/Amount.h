//
//  Amount.h
//  MoipSDK
//
//  Created by Fernando Nazario Sousa on 10/03/14.
//  Copyright (c) 2014 Moip Pagamentos. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Amount : NSObject

@property NSUInteger total;
@property NSUInteger fees;
@property NSUInteger refunds;
@property NSUInteger liquid;
@property Currency currency;

@end
