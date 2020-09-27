/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXSpeechSynthesisResultMutating.h>

@class SVXSpeechSynthesisResult, SVXSpeechSynthesisUtteranceInfo, NSError, NSString;

@interface _SVXSpeechSynthesisResultMutation : NSObject <SVXSpeechSynthesisResultMutating> {

	SVXSpeechSynthesisResult* _baseModel;
	long long _type;
	SVXSpeechSynthesisUtteranceInfo* _utteranceInfo;
	NSError* _error;
	struct {
		unsigned isDirty : 1;
		unsigned hasType : 1;
		unsigned hasUtteranceInfo : 1;
		unsigned hasError : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setType:(long long)arg1 ;
-(void)setError:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setUtteranceInfo:(id)arg1 ;
@end
