/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <VoiceShortcutClient/WFObservableResult.h>

@class WFDatabaseObjectDescriptor;

@interface WFObservableObjectResult : WFObservableResult {

	id _value;
	WFDatabaseObjectDescriptor* _descriptor;

}

@property (nonatomic,readonly) WFDatabaseObjectDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) id value;                                             //@synthesize value=_value - In the implementation block
+(void)getResultWithDescriptor:(id)arg1 valueType:(Class)arg2 glyphSize:(CGSize)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)value;
-(WFDatabaseObjectDescriptor *)descriptor;
-(void)handleChangeNotification:(id)arg1 ;
-(id)initWithValueType:(Class)arg1 glyphSize:(CGSize)arg2 initialValue:(id)arg3 descriptor:(id)arg4 ;
@end
