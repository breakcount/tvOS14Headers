/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKEventOperationInfo : NSObject <NSSecureCoding> {

	NSString* _operationID;
	NSString* _operationType;
	NSString* _operationGroupID;

}

@property (nonatomic,readonly) NSString * operationID;                   //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,readonly) NSString * operationType;                 //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) NSString * operationGroupID;              //@synthesize operationGroupID=_operationGroupID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)operationID;
-(NSString *)operationType;
-(NSString *)operationGroupID;
-(id)initWithOperation:(id)arg1 ;
@end

