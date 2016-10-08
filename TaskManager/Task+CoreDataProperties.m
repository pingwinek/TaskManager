//
//  Task+CoreDataProperties.m
//  TaskManager
//
//  Created by mac on 08.10.2016.
//  Copyright © 2016 mac. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Task+CoreDataProperties.h"

@implementation Task (CoreDataProperties)

@dynamic person;
@dynamic taskEnd;
@dynamic taskName;
@dynamic isDone;
@dynamic category;
@dynamic taskDetail;
@dynamic parentTask;
@dynamic subtask;

@end
