/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <AssetsLibraryServices/PLThumbFileManagerCore.h>

@interface PLThumbFileManager : PLThumbFileManagerCore
-(BOOL)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5 ;
-(CGImageRef)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 ;
-(BOOL)_writeImage:(id)arg1 forThumbIdentifier:(id)arg2 ;
@end
