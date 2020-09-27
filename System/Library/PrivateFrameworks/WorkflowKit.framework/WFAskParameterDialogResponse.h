/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDialogResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol WFPropertyListObject;
@interface WFAskParameterDialogResponse : WFDialogResponse <NSSecureCoding> {

	id<WFPropertyListObject> _serializedParameterState;

}

@property (nonatomic,readonly) id<WFPropertyListObject> serializedParameterState;              //@synthesize serializedParameterState=_serializedParameterState - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSerializedParameterState:(id)arg1 cancelled:(BOOL)arg2 ;
-(id<WFPropertyListObject>)serializedParameterState;
@end

