//
//  Post.m
//  ADN
//
//  Created by Ben Chatelain on 9/15/13.
//  Copyright (c) 2013 Ben Chatelain. All rights reserved.
//

#import "Post.h"
#import "Attachment.h"
#import "User.h"


@implementation Post

@dynamic dateCreated;
@dynamic status;
@dynamic attachments;
@dynamic user;


+ (id)postWithId:(NSNumber *)postId
{
    return nil;
}

- (void)downloadAttachments
{

}

@end
