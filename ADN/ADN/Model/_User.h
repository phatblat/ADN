// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to User.h instead.

#import <CoreData/CoreData.h>


extern const struct UserAttributes {
	__unsafe_unretained NSString *fullName;
	__unsafe_unretained NSString *handle;
} UserAttributes;

extern const struct UserRelationships {
	__unsafe_unretained NSString *posts;
} UserRelationships;

extern const struct UserFetchedProperties {
} UserFetchedProperties;

@class Post;




@interface UserID : NSManagedObjectID {}
@end

@interface _User : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (UserID*)objectID;





@property (nonatomic, strong) NSString* fullName;



//- (BOOL)validateFullName:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* handle;



//- (BOOL)validateHandle:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) Post *posts;

//- (BOOL)validatePosts:(id*)value_ error:(NSError**)error_;





@end

@interface _User (CoreDataGeneratedAccessors)

@end

@interface _User (CoreDataGeneratedPrimitiveAccessors)


- (NSString*)primitiveFullName;
- (void)setPrimitiveFullName:(NSString*)value;




- (NSString*)primitiveHandle;
- (void)setPrimitiveHandle:(NSString*)value;





- (Post*)primitivePosts;
- (void)setPrimitivePosts:(Post*)value;


@end
