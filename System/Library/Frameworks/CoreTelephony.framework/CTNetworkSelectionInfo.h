/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTNetwork;

@interface CTNetworkSelectionInfo : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _selectionState;
	unsigned long long _selectionMode;
	CTNetwork* _selection;

}

@property (assign,nonatomic) unsigned long long selectionState;              //@synthesize selectionState=_selectionState - In the implementation block
@property (assign,nonatomic) unsigned long long selectionMode;               //@synthesize selectionMode=_selectionMode - In the implementation block
@property (nonatomic,retain) CTNetwork * selection;                          //@synthesize selection=_selection - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CTNetwork *)selection;
-(void)setSelection:(CTNetwork *)arg1 ;
-(unsigned long long)selectionState;
-(unsigned long long)selectionMode;
-(void)setSelectionState:(unsigned long long)arg1 ;
-(void)setSelectionMode:(unsigned long long)arg1 ;
@end

