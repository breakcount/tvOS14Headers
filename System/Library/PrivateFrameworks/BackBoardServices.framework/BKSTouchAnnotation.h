/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface BKSTouchAnnotation : NSObject <NSSecureCoding, BSDescriptionProviding> {

	unsigned _touchIdentifier;
	NSString* _text;
	NSString* _uniqueIdentifier;

}

@property (assign,nonatomic) unsigned touchIdentifier;               //@synthesize touchIdentifier=_touchIdentifier - In the implementation block
@property (nonatomic,copy) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(unsigned)touchIdentifier;
-(void)setTouchIdentifier:(unsigned)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end

