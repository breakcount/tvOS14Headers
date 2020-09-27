/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, SignpostSupportMessageArgument;

@interface SignpostSupportMetadataSegment : NSObject {

	NSString* _typeNamespace;
	NSString* _type;
	NSArray* _placeholderTokens;
	NSString* _stringPrefix;
	SignpostSupportMessageArgument* _argument;

}

@property (nonatomic,readonly) NSString * typeNamespace;                               //@synthesize typeNamespace=_typeNamespace - In the implementation block
@property (nonatomic,readonly) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * placeholderTokens;                            //@synthesize placeholderTokens=_placeholderTokens - In the implementation block
@property (nonatomic,readonly) NSString * stringPrefix;                                //@synthesize stringPrefix=_stringPrefix - In the implementation block
@property (nonatomic,readonly) SignpostSupportMessageArgument * argument;              //@synthesize argument=_argument - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
-(SignpostSupportMessageArgument *)argument;
-(NSString *)typeNamespace;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2 didRedactOut:(BOOL*)arg3 ;
-(NSArray *)placeholderTokens;
-(NSString *)stringPrefix;
-(id)initWithArgumentObject:(id)arg1 typeNamespace:(id)arg2 type:(id)arg3 tokens:(id)arg4 stringPrefix:(id)arg5 ;
@end

