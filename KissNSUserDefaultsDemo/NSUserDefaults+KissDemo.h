//
//  NSUserDefaults+KissDemo.h
//  KissNSUserDefaults
//
//  Created by Chen Xian'an on 1/1/13.
//  Copyright (c) 2013 lazyapps. All rights reserved.
//

#import "NSUserDefaults+KissNSUserDefaults.h"

extern NSString * const kMyCustomKey;

@interface NSUserDefaults (KissDemo)

@property (nonatomic, strong, setter = kiss_setString:) NSString *kiss_string;
@property (nonatomic) NSInteger integer;
@property (nonatomic) float floatValue;
@property (nonatomic, getter = isBoolValue, setter = kiss_setBoolValue:) BOOL boolValue;
@property (nonatomic) double doubleValue;

@end
