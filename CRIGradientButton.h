//
//  CRIGradientButton.h
//
//  Created by Waqar Malik on 1/17/11.
//  Copyright 2011 Crimson Research, Inc. All rights reserved.
//

#import <UIKit/UIButton.h>

@interface CRIGradientButton : UIButton
@property (nonatomic, strong) NSArray *colors;
@property (nonatomic, strong) NSArray *locations;
@property (nonatomic, assign) CGPoint startPoint;
@property (nonatomic, assign) CGPoint endPoint;
@property (nonatomic, strong) NSString *type;
@end
