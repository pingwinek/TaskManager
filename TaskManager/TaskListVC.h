//
//  ViewController.h
//  TaskManager
//
//  Created by mac on 08.10.2016.
//  Copyright © 2016 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TaskListVC : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property(nonatomic,strong) NSArray *sourceArray;

@end

