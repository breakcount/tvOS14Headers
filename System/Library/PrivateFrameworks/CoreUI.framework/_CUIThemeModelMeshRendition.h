/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class MDLMesh, NSMutableArray, NSArray;

@interface _CUIThemeModelMeshRendition : CUIThemeRendition {

	MDLMesh* _mesh;
	NSMutableArray* _submeshKeys;

}

@property (readonly) NSArray * submeshKeys; 
-(void)dealloc;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(unsigned long long)writeToData:(id)arg1 ;
-(id)initForArchiving:(id)arg1 withSubmeshRenditionKeys:(id)arg2 ;
-(id)modelMesh;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(NSArray *)submeshKeys;
@end

