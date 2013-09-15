// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to AudioAttachment.h instead.

#import <CoreData/CoreData.h>


extern const struct AudioAttachmentAttributes {
	__unsafe_unretained NSString *audioType;
	__unsafe_unretained NSString *duration;
} AudioAttachmentAttributes;

extern const struct AudioAttachmentRelationships {
	__unsafe_unretained NSString *attachment;
} AudioAttachmentRelationships;

extern const struct AudioAttachmentFetchedProperties {
} AudioAttachmentFetchedProperties;

@class Attachment;




@interface AudioAttachmentID : NSManagedObjectID {}
@end

@interface _AudioAttachment : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (AudioAttachmentID*)objectID;





@property (nonatomic, strong) NSNumber* audioType;



@property int16_t audioTypeValue;
- (int16_t)audioTypeValue;
- (void)setAudioTypeValue:(int16_t)value_;

//- (BOOL)validateAudioType:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* duration;



@property double durationValue;
- (double)durationValue;
- (void)setDurationValue:(double)value_;

//- (BOOL)validateDuration:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) Attachment *attachment;

//- (BOOL)validateAttachment:(id*)value_ error:(NSError**)error_;





@end

@interface _AudioAttachment (CoreDataGeneratedAccessors)

@end

@interface _AudioAttachment (CoreDataGeneratedPrimitiveAccessors)


- (NSNumber*)primitiveAudioType;
- (void)setPrimitiveAudioType:(NSNumber*)value;

- (int16_t)primitiveAudioTypeValue;
- (void)setPrimitiveAudioTypeValue:(int16_t)value_;




- (NSNumber*)primitiveDuration;
- (void)setPrimitiveDuration:(NSNumber*)value;

- (double)primitiveDurationValue;
- (void)setPrimitiveDurationValue:(double)value_;





- (Attachment*)primitiveAttachment;
- (void)setPrimitiveAttachment:(Attachment*)value;


@end
