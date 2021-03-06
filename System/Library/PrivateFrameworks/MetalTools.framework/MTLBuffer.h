/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:35:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer <MTLResource>
@property (readonly) unsigned long long length; 
@required
-(unsigned long long)length;
-(void*)contents;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
-(void)addDebugMarker:(id)arg1 range:(NSRange)arg2;
-(void)removeAllDebugMarkers;
-(void)didModifyRange:(NSRange)arg1;

@end

