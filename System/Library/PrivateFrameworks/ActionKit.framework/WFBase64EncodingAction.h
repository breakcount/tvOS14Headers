/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@interface WFBase64EncodingAction : WFAction
+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)inputContentClasses;
-(id)outputContentClasses;
-(id)base64EncodedStringItemFromFile:(id)arg1 lineBreakMode:(id)arg2 ;
-(id)itemFromBase64EncodedString:(id)arg1 nameIfKnown:(id)arg2 ;
@end

