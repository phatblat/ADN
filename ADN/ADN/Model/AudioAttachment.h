//
//  AudioAttachment.h
//  ADN
//
//  Created by Ben Chatelain on 9/15/13.
//  Copyright (c) 2013 Ben Chatelain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Attachment;

@interface AudioAttachment : NSManagedObject

@property (nonatomic, retain) NSNumber * audioType;
@property (nonatomic, retain) NSNumber * duration;
@property (nonatomic, retain) Attachment *attachment;

@end
