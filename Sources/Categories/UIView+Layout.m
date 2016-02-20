//
//  UIView+Layout.m
//  P2PScrapy
//
//  Created by fragno on 16/2/20.
//  Copyright © 2016年 rookienerd. All rights reserved.
//

#import "UIView+Layout.h"

@implementation UIView (Layout)

@dynamic ulTop;
@dynamic ulBottom;
@dynamic ulLeft;
@dynamic ulRight;

@dynamic ulWidth;
@dynamic ulHeight;

@dynamic ulSize;

@dynamic ulX;
@dynamic ulY;

- (CGFloat)ulTop
{
    return self.frame.origin.y;
}

- (void)setUlTop:(CGFloat)top
{
    CGRect frame = self.frame;
    frame.origin.y = top;
    self.frame = frame;
}

- (CGFloat)ulLeft
{
    return self.frame.origin.x;
}

- (void)setUlLeft:(CGFloat)left
{
    CGRect frame = self.frame;
    frame.origin.x = left;
    self.frame = frame;
}

- (CGFloat)ulBottom
{
    return self.frame.size.height + self.frame.origin.y;
}

- (void)setUlBottom:(CGFloat)bottom
{
    CGRect frame = self.frame;
    frame.origin.y = bottom - frame.size.height;
    self.frame = frame;
}

- (CGFloat)ulRight
{
    return self.frame.size.width + self.frame.origin.x;
}

- (void)setUlRight:(CGFloat)right
{
    CGRect frame = self.frame;
    frame.origin.x = right - frame.size.width;
    self.frame = frame;
}

- (CGFloat)ulX
{
    return self.frame.origin.x;
}

- (void)setUlX:(CGFloat)value
{
    CGRect frame = self.frame;
    frame.origin.x = value;
    self.frame = frame;
}

- (CGFloat)ulY
{
    return self.frame.origin.y;
}

- (void)setUlY:(CGFloat)value
{
    CGRect frame = self.frame;
    frame.origin.y = value;
    self.frame = frame;
}

- (CGPoint)ulOrigin
{
    return self.frame.origin;
}

- (void)setUlOrigin:(CGPoint)origin
{
    CGRect frame = self.frame;
    frame.origin = origin;
    self.frame = frame;
}

- (CGFloat)ulCenterX
{
    return self.center.x;
}

- (void)setUlCenterX:(CGFloat)centerX
{
    CGPoint center = self.center;
    center.x = centerX;
    self.center = center;
}

- (CGFloat)ulCenterY
{
    return self.center.y;
}

- (void)setUlCenterY:(CGFloat)centerY
{
    CGPoint center = self.center;
    center.y = centerY;
    self.center = center;
}

- (CGFloat)ulWidth
{
    return self.frame.size.width;
}

- (void)setUlWidth:(CGFloat)width
{
    CGRect frame = self.frame;
    frame.size.width = width;
    self.frame = frame;
}

- (CGFloat)ulHeight
{
    return self.frame.size.height;
}

- (void)setUlHeight:(CGFloat)height
{
    CGRect frame = self.frame;
    frame.size.height = height;
    self.frame = frame;
}

- (CGSize)ulSize
{
    return self.frame.size;
}

- (void)setUlSize:(CGSize)size
{
    CGRect frame = self.frame;
    frame.size = size;
    self.frame = frame;
}

@end
