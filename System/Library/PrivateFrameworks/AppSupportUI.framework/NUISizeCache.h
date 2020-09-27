/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupportUI/AppSupportUI-Structs.h>
@interface NUISizeCache : NSObject {

	nui_size_cache* _sizeCache;
	BOOL _threadSafe;

}
-(void)dealloc;
-(void)invalidateCache;
-(id)initForAsynchronousAccess:(BOOL)arg1 ;
-(BOOL)getSize:(CGSize*)arg1 forTargetSize:(CGSize)arg2 isSizeDependentOnPerpendicularAxis:(BOOL)arg3 ;
-(void)insertSize:(CGSize)arg1 forTargetSize:(CGSize)arg2 ;
@end

