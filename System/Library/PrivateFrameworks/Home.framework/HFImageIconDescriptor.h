/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFIconDescriptor.h>

@class NSString, UIImageSymbolConfiguration;

@interface HFImageIconDescriptor : NSObject <HFIconDescriptor> {

	BOOL _shouldForceLTR;
	BOOL _isDemoModeDescriptor;
	BOOL _isSystemImage;
	NSString* _imageIdentifier;
	UIImageSymbolConfiguration* _imageSymbolConfiguration;

}

@property (assign,nonatomic) BOOL isDemoModeDescriptor;                                            //@synthesize isDemoModeDescriptor=_isDemoModeDescriptor - In the implementation block
@property (nonatomic,readonly) NSString * imageIdentifier;                                         //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (nonatomic,readonly) UIImageSymbolConfiguration * imageSymbolConfiguration;              //@synthesize imageSymbolConfiguration=_imageSymbolConfiguration - In the implementation block
@property (nonatomic,readonly) BOOL isSystemImage;                                                 //@synthesize isSystemImage=_isSystemImage - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL shouldForceLTR;                                                //@synthesize shouldForceLTR=_shouldForceLTR - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(NSString *)identifier;
-(UIImageSymbolConfiguration *)imageSymbolConfiguration;
-(BOOL)isSystemImage;
-(id)initWithImageIdentifier:(id)arg1 ;
-(id)initWithDemoModeImageIdentifier:(id)arg1 ;
-(id)initWithSystemImageNamed:(id)arg1 configuration:(id)arg2 ;
-(NSString *)imageIdentifier;
-(BOOL)shouldForceLTR;
-(id)iconDescriptorByMergingWithIconDescriptor:(id)arg1 ;
-(id)initWithSystemImageNamed:(id)arg1 ;
-(BOOL)isDemoModeDescriptor;
-(void)setIsDemoModeDescriptor:(BOOL)arg1 ;
@end

