/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:00 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BSSettings;

@interface PBSPictureInPictureState : NSObject <NSSecureCoding, NSCopying> {

	BSSettings* _settings;

}

@property (nonatomic,readonly) BSSettings * settings;                                                      //@synthesize settings=_settings - In the implementation block
@property (getter=isPictureInPictureActive,nonatomic,readonly) BOOL pictureInPictureActive; 
@property (getter=isPictureInPictureFocused,nonatomic,readonly) BOOL pictureInPictureFocused; 
@property (nonatomic,readonly) unsigned long long presentationState; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BSSettings *)settings;
-(id)initWithState:(id)arg1 ;
-(unsigned long long)presentationState;
-(BOOL)isPictureInPictureActive;
-(id)_initWithSettings:(id)arg1 ;
-(BOOL)isPictureInPictureFocused;
-(id)initWithPresentationState:(unsigned long long)arg1 isFocused:(BOOL)arg2 ;
@end
