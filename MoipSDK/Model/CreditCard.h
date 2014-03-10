//
//  CreditCard.h
//  MoipSDK
//
//  Created by Fernando Nazario Sousa on 06/03/14.
//  Copyright (c) 2014 Moip Pagamentos. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CardHolder.h"

@interface CreditCard : NSObject

@property NSString *creditCardId;
@property NSUInteger expirationMonth;
@property NSUInteger expirationYear;
@property NSString *number;
@property NSString *cvv;
@property CardHolder *cardholder;
@property NSString *customerOwnId;
@property Brand brand;
@property NSString *first6;
@property NSString *last4;

- (NSString *) getBrand;
- (Brand) getBrandFromString:(NSString *)method;

@end
