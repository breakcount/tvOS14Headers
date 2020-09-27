/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXSpeechSynthesisUtteranceInfoMutating.h>

@class SVXSpeechSynthesisUtteranceInfo, NSString, NSArray;

@interface _SVXSpeechSynthesisUtteranceInfoMutation : NSObject <SVXSpeechSynthesisUtteranceInfoMutating> {

	SVXSpeechSynthesisUtteranceInfo* _baseModel;
	NSString* _utterance;
	NSArray* _wordTimings;
	struct {
		unsigned isDirty : 1;
		unsigned hasUtterance : 1;
		unsigned hasWordTimings : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setUtterance:(id)arg1 ;
-(id)generate;
-(void)setWordTimings:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
@end

