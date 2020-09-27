/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASCOfferMetadata : NSObject <NSSecureCoding, NSCopying>

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (getter=isText,nonatomic,readonly) BOOL text; 
@property (getter=isIcon,nonatomic,readonly) BOOL icon; 
@property (getter=isProgress,nonatomic,readonly) BOOL progress; 
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder; 
+(BOOL)supportsSecureCoding;
+(id)placeholderMetadata;
+(id)iconMetadataWithImageName:(id)arg1 animationName:(id)arg2 ;
+(id)emptyMetadata;
+(id)textMetadataWithTitle:(id)arg1 subtitle:(id)arg2 ;
+(id)redownloadMetadata;
+(id)indeterminateProgressMetadata;
+(id)progressMetadataWithValue:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(BOOL)isPlaceholder;
-(BOOL)isText;
-(BOOL)isIcon;
-(BOOL)isProgress;
@end

