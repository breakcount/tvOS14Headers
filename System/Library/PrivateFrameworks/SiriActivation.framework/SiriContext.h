/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AFSpeechRequestOptions, SiriContextOverride;

@interface SiriContext : NSObject <NSCopying, NSSecureCoding> {

	AFSpeechRequestOptions* _speechRequestOptions;
	SiriContextOverride* _contextOverride;

}

@property (nonatomic,readonly) AFSpeechRequestOptions * speechRequestOptions;              //@synthesize speechRequestOptions=_speechRequestOptions - In the implementation block
@property (nonatomic,retain) SiriContextOverride * contextOverride;                        //@synthesize contextOverride=_contextOverride - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AFSpeechRequestOptions *)speechRequestOptions;
-(void)setContextOverride:(SiriContextOverride *)arg1 ;
-(SiriContextOverride *)contextOverride;
-(id)initWithContextOverride:(id)arg1 ;
-(id)initWithSpeechRequestOptions:(id)arg1 ;
@end

