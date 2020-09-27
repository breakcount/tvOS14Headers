/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INCodableAttributeMetadata.h>

@class NSString, NSArray;

@interface INCodableFileAttributeMetadata : INCodableAttributeMetadata {

	NSString* _type;
	NSArray* _customUTIs;

}

@property (nonatomic,readonly) NSString * type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * customUTIs;              //@synthesize customUTIs=_customUTIs - In the implementation block
@property (nonatomic,readonly) NSArray * UTIs; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(NSArray *)UTIs;
-(NSArray *)customUTIs;
-(id)__INCodableDescriptionCustomUTIsKey;
-(id)__INCodableDescriptionTypeKey;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(id)__INTypeCodableDescriptionTypeKey;
-(id)__INIntentResponseCodableDescriptionCustomUTIsKey;
-(id)__INTypeCodableDescriptionCustomUTIsKey;
@end
