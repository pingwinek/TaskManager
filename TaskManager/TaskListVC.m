//
//  ViewController.m
//  TaskManager
//
//  Created by mac on 08.10.2016.
//  Copyright © 2016 mac. All rights reserved.
//

#import "TaskListVC.h"
#import "TaskCell.h"

@interface TaskListVC ()

@end

@implementation TaskListVC

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.sourceArray = [[NSArray alloc] initWithObjects:@"Polska", @"Germany", @"Italy", @"Danmark", nil];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    
    return [self.sourceArray count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    TaskCell *cell = [tableView dequeueReusableCellWithIdentifier:@"taskCellID"];
    cell.sourceTitle.text = [self.sourceArray objectAtIndex:indexPath.row];
    
    return cell;
}

@end
