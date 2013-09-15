// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Post.h instead.

#import <CoreData/CoreData.h>


extern const struct PostAttributes {
	__unsafe_unretained NSString *dateCreated;
	__unsafe_unretained NSString *status;
} PostAttributes;

extern const struct PostRelationships {
	__unsafe_unretained NSString *attachments;
	__unsafe_unretained NSString *user;
} PostRelationships;

extern const struct PostFetchedProperties {
} PostFetchedProperties;

@class Attachment;
@class User;




@interface PostID : NSManagedObjectID {}
@end

@interface _Post : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (PostID*)objectID;





@property (nonatomic, strong) NSDate* dateCreated;



//- (BOOL)validateDateCreated:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* status;



//- (BOOL)validateStatus:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) Attachment *attachments;

//- (BOOL)validateAttachments:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) User *user;

//- (BOOL)validateUser:(id*)value_ error:(NSError**)error_;





@end

@interface _Post (CoreDataGeneratedAccessors)

@end

@interface _Post (CoreDataGeneratedPrimitiveAccessors)


- (NSDate*)primitiveDateCreated;
- (void)setPrimitiveDateCreated:(NSDate*)value;




- (NSString*)primitiveStatus;
- (void)setPrimitiveStatus:(NSString*)value;





- (Attachment*)primitiveAttachments;
- (void)setPrimitiveAttachments:(Attachment*)value;



- (User*)primitiveUser;
- (void)setPrimitiveUser:(User*)value;


@end
