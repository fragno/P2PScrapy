//
//  PSGeneralProductCell.h
//  P2PScrapy
//
//  Created by fragno on 16/2/20.
//  Copyright © 2016年 rookienerd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PSProductBaseModel;
@interface PSGeneralProductCell : UITableViewCell

+ (CGFloat)cellHeightWithModel:(PSProductBaseModel *)model;

- (void)updateCellWithModel:(PSProductBaseModel *)model;

@end
