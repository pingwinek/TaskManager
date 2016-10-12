//
//  Category+CoreDataProperties.h
//  TaskManager
//
//  Created by mac on 08.10.2016.
//  Copyright © 2016 mac. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Category.h"

NS_ASSUME_NONNULL_BEGIN

@interface Category (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *canDelete;
@property (nullable, nonatomic, retain) NSString *categoryName;
@property (nullable, nonatomic, retain) NSSet<Task *> *tasks;

@end

@interface Category (CoreDataGeneratedAccessors)

- (void)addTasksObject:(Task *)value;
- (void)removeTasksObject:(Task *)value;
- (void)addTasks:(NSSet<Task *> *)values;
- (void)removeTasks:(NSSet<Task *> *)values;

@end

NS_ASSUME_NONNULL_END
