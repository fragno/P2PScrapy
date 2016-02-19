//
//  PSGeneralProductCell.m
//  P2PScrapy
//
//  Created by fragno on 16/2/20.
//  Copyright © 2016年 rookienerd. All rights reserved.
//

#import "PSGeneralProductCell.h"
#import "PSProductBaseModel.h"

@interface PSGeneralProductCell ()

@property (nonatomic, strong) UILabel *name;
@property (nonatomic, strong) UILabel *rate;
@property (nonatomic, strong) UILabel *duration;
@property (nonatomic, strong) UILabel *source;

@end

@implementation PSGeneralProductCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    if (self = [super initWithStyle:style reuseIdentifier:reuseIdentifier]) {
        [self setupUI];
    }
    
    return self;
}

- (void)awakeFromNib {
    // Initialization code
}

- (void)layoutSubviews
{
    [super layoutSubviews];
    
    self.name.ulTop = 5;
    self.name.ulLeft = 10;
    
    self.rate.ulLeft = 10;
    self.rate.ulCenterY = self.ulHeight/2.0;
    
    self.duration.ulCenterX = self.ulWidth/2.0;
    self.duration.ulCenterY = self.ulHeight/2.0;
    
    self.source.ulRight = self.ulWidth - 10;
    self.source.ulCenterY = self.ulHeight/2.0;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)updateCellWithModel:(PSProductBaseModel *)model
{
    [self.name setText:model.name];
    [self.rate setText:[NSString stringWithFormat:@"年化利率 %.02f", model.rate]];
    [self.duration setText:[NSString stringWithFormat:@"项目周期 %.0f", model.duration]];
    [self.source setText:[NSString stringWithFormat:@"项目来源 %@", model.source]];
}

+ (CGFloat)cellHeightWithModel:(PSProductBaseModel *)model
{
    return 100;
}

#pragma mark - private
- (void)setupUI
{
    self.name = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 100, 30)];
    [self.contentView addSubview:self.name];
    
    self.rate = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 100, 30)];
    self.rate.font = [UIFont systemFontOfSize:12];
    [self.contentView addSubview:self.rate];
    
    self.duration = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 100, 30)];
    self.duration.font = [UIFont systemFontOfSize:12];
    [self.contentView addSubview:self.duration];
    
    self.source = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 100, 30)];
    self.source.font = [UIFont systemFontOfSize:12];
    [self.contentView addSubview:self.source];
}


@end
