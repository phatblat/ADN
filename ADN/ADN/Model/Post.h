//
//  Post.h
//  ADN
//
//  Created by Ben Chatelain on 9/15/13.
//  Copyright (c) 2013 Ben Chatelain. All rights reserved.
//

#import "_Post.h"
#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Attachment, User;

@interface Post : _Post

+ (id)postWithId:(NSNumber *)postId;
- (void)downloadAttachments;

@end
