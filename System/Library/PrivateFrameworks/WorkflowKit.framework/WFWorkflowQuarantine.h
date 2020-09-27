/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface WFWorkflowQuarantine : NSObject <NSCopying> {

	NSString* _sourceAppIdentifier;
	NSDate* _importDate;

}

@property (nonatomic,copy,readonly) NSString * sourceAppIdentifier;              //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * importDate;                              //@synthesize importDate=_importDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializedRepresentation;
-(id)serializedData;
-(NSString *)sourceAppIdentifier;
-(NSDate *)importDate;
-(id)initWithSerializedData:(id)arg1 ;
-(id)initWithSourceAppIdentifier:(id)arg1 importDate:(id)arg2 ;
@end

