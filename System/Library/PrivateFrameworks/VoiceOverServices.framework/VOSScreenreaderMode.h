/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VOSScreenreaderMode : NSObject {

	NSString* _rawValue;

}

@property (nonatomic,readonly) NSString * rawValue; 
@property (nonatomic,readonly) NSString * localizedName; 
+(id)allModes;
+(id)Invalid;
+(id)Default;
+(id)Handwriting;
+(id)BrailleScreenInput;
+(id)modeWithStringValue:(id)arg1 ;
-(id)description;
-(NSString *)localizedName;
-(NSString *)rawValue;
-(id)_initWithRawValue:(id)arg1 ;
@end

