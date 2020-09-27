/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INPrivateMediaIntentData, NSArray, NSString;

@interface INPrivateAddMediaIntentData : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	INPrivateMediaIntentData* _privateMediaIntentData;
	NSArray* _audioSearchResults;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) INPrivateMediaIntentData * privateMediaIntentData;              //@synthesize privateMediaIntentData=_privateMediaIntentData - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioSearchResults;                          //@synthesize audioSearchResults=_audioSearchResults - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSArray *)audioSearchResults;
-(INPrivateMediaIntentData *)privateMediaIntentData;
-(void)setPrivateMediaIntentData:(INPrivateMediaIntentData *)arg1 ;
-(id)initWithPrivateMediaIntentData:(id)arg1 audioSearchResults:(id)arg2 ;
-(id)initWithAudioSearchResults:(id)arg1 ;
@end

