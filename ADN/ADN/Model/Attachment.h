//
//  Attachment.h
//  ADN
//
//  Created by Ben Chatelain on 9/15/13.
//  Copyright (c) 2013 Ben Chatelain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Attachment : NSManagedObject

@property (nonatomic, retain) NSNumber * size;
@property (nonatomic, retain) NSString * sourceURL;
@property (nonatomic, retain) NSManagedObject *audioAttachment;
@property (nonatomic, retain) NSManagedObject *post;

@end
