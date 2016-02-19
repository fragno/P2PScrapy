//
//  PSHomeViewController.m
//  P2PScrapy
//
//  Created by fragno on 16/2/19.
//  Copyright © 2016年 rookienerd. All rights reserved.
//

#import "PSHomeViewController.h"
#import "PSGeneralProductCell.h"

static NSString * const generalProductCellIdentifier = @"generalProductCellIdentifier";

@interface PSHomeViewController () <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableview;
}

@end

@implementation PSHomeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    _tableview = [[UITableView alloc] initWithFrame:self.view.frame];
    [_tableview registerClass:[PSGeneralProductCell class] forCellReuseIdentifier:generalProductCellIdentifier];
    _tableview.dataSource = self;
    _tableview.delegate = self;
    
    [self.view addSubview:_tableview];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark - UITableViewDataSource
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 1;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    PSGeneralProductCell *cell = [tableView dequeueReusableCellWithIdentifier:generalProductCellIdentifier];
    return cell;
}


#pragma mark - UITableViewDelegate
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 40;
}

@end
