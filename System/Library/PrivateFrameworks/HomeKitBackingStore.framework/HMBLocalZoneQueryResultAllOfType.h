/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:59 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBLocalZoneQueryResultRecordColumns.h>

@class NSString;

@interface HMBLocalZoneQueryResultAllOfType : HMBLocalZoneQueryResultRecordColumns {

	int _modelClassNameOffset;
	NSString* _modelClassName;

}

@property (nonatomic,readonly) int modelClassNameOffset;               //@synthesize modelClassNameOffset=_modelClassNameOffset - In the implementation block
@property (nonatomic,readonly) NSString * modelClassName;              //@synthesize modelClassName=_modelClassName - In the implementation block
-(BOOL)bindPropertiesToStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(int)modelClassNameOffset;
-(NSString *)modelClassName;
-(id)initWithLocalZone:(id)arg1 modelClassName:(id)arg2 ;
@end

