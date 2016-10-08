//
//  TaskDetails+CoreDataProperties.h
//  TaskManager
//
//  Created by mac on 08.10.2016.
//  Copyright © 2016 mac. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "TaskDetails.h"

NS_ASSUME_NONNULL_BEGIN

@interface TaskDetails (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *taskDescription;
@property (nullable, nonatomic, retain) NSDate *taskEndDate;
@property (nullable, nonatomic, retain) Task *task;

@end

NS_ASSUME_NONNULL_END
