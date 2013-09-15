// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to AudioAttachment.m instead.

#import "_AudioAttachment.h"

const struct AudioAttachmentAttributes AudioAttachmentAttributes = {
	.audioType = @"audioType",
	.duration = @"duration",
};

const struct AudioAttachmentRelationships AudioAttachmentRelationships = {
	.attachment = @"attachment",
};

const struct AudioAttachmentFetchedProperties AudioAttachmentFetchedProperties = {
};

@implementation AudioAttachmentID
@end

@implementation _AudioAttachment

+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"AudioAttachment" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"AudioAttachment";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"AudioAttachment" inManagedObjectContext:moc_];
}

- (AudioAttachmentID*)objectID {
	return (AudioAttachmentID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];
	
	if ([key isEqualToString:@"audioTypeValue"]) {
		NSSet *affectingKey = [NSSet setWithObject:@"audioType"];
		keyPaths = [keyPaths setByAddingObjectsFromSet:affectingKey];
		return keyPaths;
	}
	if ([key isEqualToString:@"durationValue"]) {
		NSSet *affectingKey = [NSSet setWithObject:@"duration"];
		keyPaths = [keyPaths setByAddingObjectsFromSet:affectingKey];
		return keyPaths;
	}

	return keyPaths;
}




@dynamic audioType;



- (int16_t)audioTypeValue {
	NSNumber *result = [self audioType];
	return [result shortValue];
}

- (void)setAudioTypeValue:(int16_t)value_ {
	[self setAudioType:[NSNumber numberWithShort:value_]];
}

- (int16_t)primitiveAudioTypeValue {
	NSNumber *result = [self primitiveAudioType];
	return [result shortValue];
}

- (void)setPrimitiveAudioTypeValue:(int16_t)value_ {
	[self setPrimitiveAudioType:[NSNumber numberWithShort:value_]];
}





@dynamic duration;



- (double)durationValue {
	NSNumber *result = [self duration];
	return [result doubleValue];
}

- (void)setDurationValue:(double)value_ {
	[self setDuration:[NSNumber numberWithDouble:value_]];
}

- (double)primitiveDurationValue {
	NSNumber *result = [self primitiveDuration];
	return [result doubleValue];
}

- (void)setPrimitiveDurationValue:(double)value_ {
	[self setPrimitiveDuration:[NSNumber numberWithDouble:value_]];
}





@dynamic attachment;

	






@end
