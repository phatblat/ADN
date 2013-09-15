//
//  User.h
//  ADN
//
//  Created by Ben Chatelain on 9/15/13.
//  Copyright (c) 2013 Ben Chatelain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface User : NSManagedObject

@property (nonatomic, retain) NSString * fullName;
@property (nonatomic, retain) NSString * handle;
@property (nonatomic, retain) NSManagedObject *posts;

@end
