/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVXServiceCommandHandling.h>

@class SVXSpeechSynthesizer, NSString;

@interface SVXServiceCommandHandlerPreSynthesizeTTS : NSObject <SVXServiceCommandHandling> {

	SVXSpeechSynthesizer* _speechSynthesizer;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)supportedCommandClass;
-(NSString *)identifier;
-(id)initWithSpeechSynthesizer:(id)arg1 ;
-(BOOL)isCommandUUFR:(id)arg1 ;
-(void)handleCommand:(id)arg1 withContext:(id)arg2 taskTracker:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

