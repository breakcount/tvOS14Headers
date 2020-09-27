/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:59 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, HMBModelField;

@interface HMBLocalZoneQueryResultColumnTuple : HMFObject {

	int _offset;
	NSString* _name;
	HMBModelField* _modelField;

}

@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int offset;                              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) HMBModelField * modelField;              //@synthesize modelField=_modelField - In the implementation block
-(NSString *)name;
-(id)description;
-(int)offset;
-(id)initWithName:(id)arg1 offset:(int)arg2 modelField:(id)arg3 ;
-(HMBModelField *)modelField;
@end

