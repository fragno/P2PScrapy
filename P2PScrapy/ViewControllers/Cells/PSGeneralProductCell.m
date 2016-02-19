//
//  PSGeneralProductCell.m
//  P2PScrapy
//
//  Created by fragno on 16/2/20.
//  Copyright © 2016年 rookienerd. All rights reserved.
//

#import "PSGeneralProductCell.h"

@interface PSGeneralProductCell ()

@property (nonatomic, strong) UILabel *name;
@property (nonatomic, strong) UILabel *rate;
@property (nonatomic, strong) UILabel *duration;
@property (nonatomic, strong) UILabel *source;

@end

@implementation PSGeneralProductCell

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)updateCellWithModel:(ProductBaseModel *)model
{
    
}

@end
