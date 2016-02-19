//
//  PSHomeViewController.m
//  P2PScrapy
//
//  Created by fragno on 16/2/19.
//  Copyright © 2016年 rookienerd. All rights reserved.
//

#import "PSHomeViewController.h"
#import "PSGeneralProductCell.h"
#import "PSProductBaseModel.h"

static NSString * const generalProductCellIdentifier = @"generalProductCellIdentifier";

@interface PSHomeViewController () <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableview;
    NSArray *_products;
}

@end

@implementation PSHomeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    _tableview = [[UITableView alloc] initWithFrame:CGRectMake(0, 20 + 44, self.view.ulWidth, self.view.ulHeight)];
    [_tableview registerClass:[PSGeneralProductCell class] forCellReuseIdentifier:generalProductCellIdentifier];
    _tableview.dataSource = self;
    _tableview.delegate = self;
    
    [self.view addSubview:_tableview];
    
    _products = [self fetchData];
    
    [_tableview reloadData];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark - UITableViewDataSource
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return _products.count;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    PSGeneralProductCell *cell = [tableView dequeueReusableCellWithIdentifier:generalProductCellIdentifier];
    [cell updateCellWithModel:[_products objectAtIndex:indexPath.row]];
    return cell;
}


#pragma mark - UITableViewDelegate
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return [PSGeneralProductCell cellHeightWithModel:[_products objectAtIndex:indexPath.row]];
}


#pragma mark - Private
- (NSArray *)fetchData
{
    NSMutableArray *mockProductArray = [NSMutableArray array];
    PSProductBaseModel *model1 = [[PSProductBaseModel alloc] init];
    model1.name = @"product one";
    model1.rate = 0.12;
    model1.duration = 12.0;
    model1.amount = 15000;
    model1.source = @"人人聚财";
    [mockProductArray addObject:model1];
    
    PSProductBaseModel *model2 = [[PSProductBaseModel alloc] init];
    model2.name = @"product two";
    model2.rate = 0.14;
    model2.duration = 8.0;
    model2.amount = 450000;
    model2.source = @"陆金所";
    [mockProductArray addObject:model2];
    
    return mockProductArray;
}

@end
