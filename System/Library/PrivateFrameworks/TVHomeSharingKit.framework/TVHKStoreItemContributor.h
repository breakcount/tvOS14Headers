/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVHKStoreItemContributor : NSObject {

	NSString* _name;
	unsigned long long _storeID;
	NSString* _templateImageURLString;

}

@property (nonatomic,copy,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long storeID;                          //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy,readonly) NSString * templateImageURLString;              //@synthesize templateImageURLString=_templateImageURLString - In the implementation block
+(id)new;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(unsigned long long)storeID;
-(id)_initWithName:(id)arg1 storeID:(unsigned long long)arg2 templateImageURLString:(id)arg3 ;
-(NSString *)templateImageURLString;
@end

