//
//  Task+CoreDataProperties.h
//  TaskManager
//
//  Created by mac on 08.10.2016.
//  Copyright © 2016 mac. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Task.h"

NS_ASSUME_NONNULL_BEGIN

@interface Task (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *person;
@property (nullable, nonatomic, retain) NSDate *taskEnd;
@property (nullable, nonatomic, retain) NSString *taskName;
@property (nullable, nonatomic, retain) NSNumber *isDone;
@property (nullable, nonatomic, retain) NSManagedObject *category;
@property (nullable, nonatomic, retain) NSManagedObject *taskDetail;
@property (nullable, nonatomic, retain) Task *parentTask;
@property (nullable, nonatomic, retain) NSSet<Task *> *subtask;

@end

@interface Task (CoreDataGeneratedAccessors)

- (void)addSubtaskObject:(Task *)value;
- (void)removeSubtaskObject:(Task *)value;
- (void)addSubtask:(NSSet<Task *> *)values;
- (void)removeSubtask:(NSSet<Task *> *)values;

@end

NS_ASSUME_NONNULL_END
