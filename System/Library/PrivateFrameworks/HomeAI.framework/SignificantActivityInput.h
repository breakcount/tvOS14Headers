/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface SignificantActivityInput : NSObject <MLFeatureProvider> {

	CVBufferRef _image__Placeholder__0;

}

@property (assign,nonatomic) CVBufferRef image__Placeholder__0;              //@synthesize image__Placeholder__0=_image__Placeholder__0 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(void)dealloc;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithImage__Placeholder__0:(CVBufferRef)arg1 ;
-(id)initWithImage__Placeholder__0FromCGImage:(CGImageRef)arg1 error:(id*)arg2 ;
-(id)initWithImage__Placeholder__0AtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)setImage__Placeholder__0WithCGImage:(CGImageRef)arg1 error:(id*)arg2 ;
-(BOOL)setImage__Placeholder__0WithURL:(id)arg1 error:(id*)arg2 ;
-(CVBufferRef)image__Placeholder__0;
-(void)setImage__Placeholder__0:(CVBufferRef)arg1 ;
@end

