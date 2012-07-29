//
//  Platform.h
//  Runner
//
//  Created by Yusuf Sobh on 7/28/12.
//  Copyright (c) 2012 TwoPlusOne. All rights reserved.
//

#import "BodyNode.h"

@interface Platform : BodyNode

+ (id) platformWithWorld:(b2World*)world position:(CGPoint)pos;

@property (nonatomic, readonly) CGFloat width;
@property (nonatomic, readonly) CGFloat height;

@end

