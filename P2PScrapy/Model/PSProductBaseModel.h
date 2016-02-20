//
//  PSProductBaseModel.h
//  P2PScrapy
//
//  Created by fragno on 16/2/20.
//  Copyright © 2016年 rookienerd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PSProductBaseModel : NSObject

/**
 *  项目名称
 */
@property (nonatomic, copy) NSString *name;

/**
 *  项目利率
 */
@property (nonatomic, assign) CGFloat rate;

/**
 *  项目期限
 */
@property (nonatomic, assign) CGFloat duration;

/**
 *  项目金额
 */
@property (nonatomic, assign) CGFloat amount;

/**
 *  项目来源平台
 */
@property (nonatomic, copy) NSString *source;


+ (instancetype)modelWithRequest;

@end
