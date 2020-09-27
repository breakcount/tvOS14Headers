/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:00 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, HMFActivity, HMBLocalSQLContext;

@interface HMBLocalSQLContextOutputBlock : HMFObject <HMFLogging> {

	NSString* _identifier;
	unsigned long long _blockRow;
	HMFActivity* _activity;
	HMBLocalSQLContext* _owner;
	unsigned long long _zoneRow;

}

@property (assign,nonatomic,__weak) HMBLocalSQLContext * owner;              //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) unsigned long long blockRow;                    //@synthesize blockRow=_blockRow - In the implementation block
@property (nonatomic,readonly) unsigned long long zoneRow;                   //@synthesize zoneRow=_zoneRow - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                       //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)identifier;
-(void)setOwner:(HMBLocalSQLContext *)arg1 ;
-(HMFActivity *)activity;
-(id)abort;
-(HMBLocalSQLContext *)owner;
-(id)commit:(id)arg1 ;
-(id)logIdentifier;
-(unsigned long long)blockRow;
-(unsigned long long)zoneRow;
-(void)setBlockRow:(unsigned long long)arg1 ;
-(id)initWithOwner:(id)arg1 identifier:(id)arg2 zoneRow:(unsigned long long)arg3 blockRow:(unsigned long long)arg4 ;
-(id)updateModelID:(id)arg1 modelEncoding:(unsigned long long)arg2 modelData:(id)arg3 ;
@end

