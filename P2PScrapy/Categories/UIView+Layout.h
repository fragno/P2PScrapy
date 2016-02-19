//
//  UIView+Layout.h
//  P2PScrapy
//
//  Created by fragno on 16/2/20.
//  Copyright © 2016年 rookienerd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Layout)

@property (assign, nonatomic) CGFloat ulTop;
@property (assign, nonatomic) CGFloat ulBottom;
@property (assign, nonatomic) CGFloat ulLeft;
@property (assign, nonatomic) CGFloat ulRight;

@property (assign, nonatomic) CGFloat ulX;
@property (assign, nonatomic) CGFloat ulY;
@property (assign, nonatomic) CGPoint ulOrigin;

@property (assign, nonatomic) CGFloat ulCenterX;
@property (assign, nonatomic) CGFloat ulCenterY;

@property (assign, nonatomic) CGFloat ulWidth;
@property (assign, nonatomic) CGFloat ulHeight;
@property (assign, nonatomic) CGSize  ulSize;

@end
