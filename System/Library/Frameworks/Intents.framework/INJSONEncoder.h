/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INJSONEncoderConfiguration, NSString;

@interface INJSONEncoder : NSObject <NSCopying> {

	INJSONEncoderConfiguration* _configuration;

}

@property (nonatomic,readonly) INJSONEncoderConfiguration * _storedConfiguration; 
@property (nonatomic,copy,readonly) INJSONEncoderConfiguration * configuration;                //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSString * languageCode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)languageCode;
-(id)encodeObject:(id)arg1 ;
-(INJSONEncoderConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)encodeObject:(id)arg1 withCodableDescription:(id)arg2 ;
-(id)encodeObject:(id)arg1 withCodableAttribute:(id)arg2 ;
-(id)_encodeObject:(id)arg1 codableAttribute:(id)arg2 ;
-(INJSONEncoderConfiguration *)_storedConfiguration;
@end

