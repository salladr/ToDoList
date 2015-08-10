//
//  ToDoItem.h
//  ToDoList
//
//  Created by Dallas Richardson on 2015-07-08.
//  Copyright (c) 2015 Dallas Richardson. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
