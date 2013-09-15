// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Attachment.h instead.

#import <CoreData/CoreData.h>


extern const struct AttachmentAttributes {
	__unsafe_unretained NSString *size;
	__unsafe_unretained NSString *sourceURL;
} AttachmentAttributes;

extern const struct AttachmentRelationships {
	__unsafe_unretained NSString *audioAttachment;
	__unsafe_unretained NSString *post;
} AttachmentRelationships;

extern const struct AttachmentFetchedProperties {
} AttachmentFetchedProperties;

@class AudioAttachment;
@class Post;




@interface AttachmentID : NSManagedObjectID {}
@end

@interface _Attachment : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (AttachmentID*)objectID;





@property (nonatomic, strong) NSNumber* size;



@property int32_t sizeValue;
- (int32_t)sizeValue;
- (void)setSizeValue:(int32_t)value_;

//- (BOOL)validateSize:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* sourceURL;



//- (BOOL)validateSourceURL:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) AudioAttachment *audioAttachment;

//- (BOOL)validateAudioAttachment:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) Post *post;

//- (BOOL)validatePost:(id*)value_ error:(NSError**)error_;





@end

@interface _Attachment (CoreDataGeneratedAccessors)

@end

@interface _Attachment (CoreDataGeneratedPrimitiveAccessors)


- (NSNumber*)primitiveSize;
- (void)setPrimitiveSize:(NSNumber*)value;

- (int32_t)primitiveSizeValue;
- (void)setPrimitiveSizeValue:(int32_t)value_;




- (NSString*)primitiveSourceURL;
- (void)setPrimitiveSourceURL:(NSString*)value;





- (AudioAttachment*)primitiveAudioAttachment;
- (void)setPrimitiveAudioAttachment:(AudioAttachment*)value;



- (Post*)primitivePost;
- (void)setPrimitivePost:(Post*)value;


@end
