/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class NSData;

@interface CUINamedRecognitionObject : CUINamedLookup

@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) NSData * objectData; 
@property (nonatomic,readonly) SCD_Struct_CS10 referenceOriginTransformation; 
-(id)description;
-(long long)version;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(SCD_Struct_CS10)referenceOriginTransformation;
-(NSData *)objectData;
@end

