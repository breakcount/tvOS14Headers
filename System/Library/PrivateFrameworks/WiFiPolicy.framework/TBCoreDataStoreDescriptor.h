/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSDictionary, NSPersistentStoreDescription;

@interface TBCoreDataStoreDescriptor : NSObject {

	unsigned long long _type;
	NSURL* _storeURL;
	NSURL* _modelURL;
	NSDictionary* _storeOptions;
	NSPersistentStoreDescription* _storeDescription;

}

@property (assign,nonatomic) unsigned long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSURL * storeURL;                                               //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,retain) NSURL * modelURL;                                               //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,retain) NSDictionary * storeOptions;                                    //@synthesize storeOptions=_storeOptions - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreDescription * storeDescription;              //@synthesize storeDescription=_storeDescription - In the implementation block
+(id)defaultModelURL;
+(id)serverStoreDescriptor;
+(id)directStoreDescriptor;
+(id)defaultStoresDirectoryURL;
+(id)defaultPersistentStoreURLWithDirectory:(id)arg1 ;
+(id)tempStoresDirectoryURL;
+(id)clientStoreDescriptor;
+(id)tempStoreDescriptor;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSURL *)modelURL;
-(NSPersistentStoreDescription *)storeDescription;
-(NSDictionary *)storeOptions;
-(void)setModelURL:(NSURL *)arg1 ;
-(NSURL *)storeURL;
-(void)setStoreURL:(NSURL *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 storeURL:(id)arg2 modelURL:(id)arg3 ;
-(void)setStoreOptions:(NSDictionary *)arg1 ;
@end

