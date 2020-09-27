/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFRecordStorage.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSArray, NSMutableDictionary, NSString, NSDate, WFWorkflowQuarantine, WFFileRepresentation, NSDictionary, WFWorkflowIcon;

@interface WFWorkflowFile : NSObject <WFRecordStorage, NSItemProviderWriting> {

	NSMutableDictionary* _rootObject;
	NSString* _name;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	WFWorkflowQuarantine* _quarantine;
	WFFileRepresentation* _file;
	NSString* _identifier;

}

@property (nonatomic,readonly) WFFileRepresentation * file;                                        //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * rootObject;                                          //@synthesize rootObject=_rootObject - In the implementation block
@property (nonatomic,copy) NSString * name;                                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) WFWorkflowIcon * icon; 
@property (nonatomic,retain) NSDate * creationDate;                                                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                                            //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) WFWorkflowQuarantine * quarantine;                                    //@synthesize quarantine=_quarantine - In the implementation block
@property (nonatomic,copy) NSArray * workflowTypes; 
@property (nonatomic,copy) NSArray * inputClasses; 
@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,copy) NSArray * importQuestions; 
@property (nonatomic,copy) NSString * lastMigratedClientVersion; 
@property (nonatomic,copy) NSString * minimumClientVersion; 
@property (nonatomic,readonly) unsigned long long estimatedSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
+(id)writableTypeIdentifiersForItemProvider;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSDate *)creationDate;
-(NSDictionary *)rootObject;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(WFFileRepresentation *)file;
-(NSDate *)modificationDate;
-(id)descriptor;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(WFWorkflowIcon *)icon;
-(void)setIcon:(WFWorkflowIcon *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSArray *)inputClasses;
-(void)setModificationDate:(NSDate *)arg1 ;
-(unsigned long long)estimatedSize;
-(NSArray *)workflowTypes;
-(id)fileDataWithError:(id*)arg1 ;
-(id)recordRepresentationWithError:(id*)arg1 ;
-(id)initWithFileData:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(void)setWorkflowTypes:(NSArray *)arg1 ;
-(void)setInputClasses:(NSArray *)arg1 ;
-(NSString *)minimumClientVersion;
-(void)setMinimumClientVersion:(NSString *)arg1 ;
-(NSString *)lastMigratedClientVersion;
-(void)setLastMigratedClientVersion:(NSString *)arg1 ;
-(void)setImportQuestions:(NSArray *)arg1 ;
-(NSArray *)importQuestions;
-(id)initWithDictionary:(id)arg1 name:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 name:(id)arg2 performMigration:(BOOL)arg3 ;
-(id)initWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)initWithDescriptor:(id)arg1 performMigration:(BOOL)arg2 error:(id*)arg3 ;
-(id)writeToDiskWithFormat:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)writeToDiskWithError:(id*)arg1 ;
-(BOOL)writeToFileURL:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)fileDataWithFormat:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)writeToOutputStream:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)migrateRootObject;
-(WFWorkflowQuarantine *)quarantine;
-(void)setQuarantine:(WFWorkflowQuarantine *)arg1 ;
@end

