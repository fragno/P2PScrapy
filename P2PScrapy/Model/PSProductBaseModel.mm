//
//  PSProductBaseModel.m
//  P2PScrapy
//
//  Created by fragno on 16/2/20.
//  Copyright © 2016年 rookienerd. All rights reserved.
//

#import "PSProductBaseModel.h"
#include "proto/product.pb.h"

@implementation PSProductBaseModel

+ (instancetype)modelWithRequest
{
    
    p2pscrapy::Product *product = new p2pscrapy::Product();
    product->set_name("dads");
    product->set_rate(1.2);
    product->set_duration(1000);
    product->set_amount(1000);
    product->set_source("人人聚财");
    
    PSProductBaseModel *model = [[PSProductBaseModel alloc] init];
    model.name = [NSString stringWithUTF8String:product->name().c_str()];
    model.rate = product->rate();
    model.duration = product->duration();
    model.amount = product->amount();
    model.source = [NSString stringWithUTF8String:product->source().c_str()];
    return model;
}

@end
