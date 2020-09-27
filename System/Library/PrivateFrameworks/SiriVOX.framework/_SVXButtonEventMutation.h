/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXButtonEventMutating.h>

@class SVXButtonEvent, NSString;

@interface _SVXButtonEventMutation : NSObject <SVXButtonEventMutating> {

	SVXButtonEvent* _baseModel;
	long long _type;
	unsigned long long _timestamp;
	struct {
		unsigned isDirty : 1;
		unsigned hasType : 1;
		unsigned hasTimestamp : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setType:(long long)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

