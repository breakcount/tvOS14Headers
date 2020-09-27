/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>

@protocol ISScalableCompositorResource;
@class ISIconDecoration, NSString;

@interface ISIconDecorationResource : NSObject <ISScalableCompositorResource> {

	ISIconDecoration* _decoration;
	id<ISScalableCompositorResource> _internalResource;

}

@property (readonly) id<ISScalableCompositorResource> internalResource;              //@synthesize internalResource=_internalResource - In the implementation block
@property (readonly) ISIconDecoration * decoration;                                  //@synthesize decoration=_decoration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(ISIconDecoration *)decoration;
-(void)configureWithType:(id)arg1 ;
-(id)initWithDecoration:(id)arg1 ;
-(id<ISScalableCompositorResource>)internalResource;
@end

