//
//  Person.h
//  Properties
//
//  Created by Doncho Minkov on 2/10/14.
//  Copyright (c) 2014 minkovit. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property (nonatomic, strong) NSString *firstname;
@property (nonatomic, strong) NSString *lastname;
@property NSInteger age;

@end
