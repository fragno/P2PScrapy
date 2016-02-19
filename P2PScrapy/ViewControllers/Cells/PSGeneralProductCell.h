//
//  PSGeneralProductCell.h
//  P2PScrapy
//
//  Created by fragno on 16/2/20.
//  Copyright © 2016年 rookienerd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ProductBaseModel;
@interface PSGeneralProductCell : UITableViewCell

- (void)updateCellWithModel:(ProductBaseModel *)model;

@end
