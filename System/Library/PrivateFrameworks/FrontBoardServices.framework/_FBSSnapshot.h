/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class _FBSSnapshotContext, IOSurface, NSString;

@interface _FBSSnapshot : NSObject <BSInvalidatable> {

	_FBSSnapshotContext* _context;
	CGImageRef _imageRef;
	IOSurface* _nonProtectedSurfaceRef;
	IOSurface* _protectedSurfaceRef;

}

@property (nonatomic,copy,readonly) _FBSSnapshotContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (nonatomic,readonly) IOSurface * IOSurface; 
@property (nonatomic,readonly) IOSurface * fallbackIOSurface; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(double)_scale;
-(_FBSSnapshotContext *)context;
-(void)_doInvalidate;
-(IOSurface *)fallbackIOSurface;
-(void)_synchronizedCaptureWithCompletion:(/*^block*/id)arg1 ;
-(CGSize)_scaledSnapshotSize;
-(id)initWithSnapshotContext:(id)arg1 ;
-(BOOL)hasProtectedContent;
-(BOOL)capture;
-(IOSurface *)IOSurface;
-(CGImageRef)CGImage;
@end

