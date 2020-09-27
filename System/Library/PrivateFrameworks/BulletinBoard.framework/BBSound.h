/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TLAlertConfiguration, NSString, NSDictionary;

@interface BBSound : NSObject <NSCopying, NSSecureCoding> {

	BOOL _repeats;
	unsigned _systemSoundID;
	TLAlertConfiguration* _alertConfiguration;
	NSString* _audioCategory;
	double _maxDuration;
	NSString* _ringtoneName;
	unsigned long long _soundBehavior;
	long long _soundType;
	NSDictionary* _vibrationPattern;
	NSString* _songPath;

}

@property (nonatomic,copy) TLAlertConfiguration * alertConfiguration;              //@synthesize alertConfiguration=_alertConfiguration - In the implementation block
@property (nonatomic,copy) NSString * audioCategory;                               //@synthesize audioCategory=_audioCategory - In the implementation block
@property (assign,nonatomic) double maxDuration;                                   //@synthesize maxDuration=_maxDuration - In the implementation block
@property (assign,getter=isRepeating,nonatomic) BOOL repeats;                      //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,copy) NSString * ringtoneName;                                //@synthesize ringtoneName=_ringtoneName - In the implementation block
@property (assign,nonatomic) long long soundType;                                  //@synthesize soundType=_soundType - In the implementation block
@property (nonatomic,copy) NSDictionary * vibrationPattern;                        //@synthesize vibrationPattern=_vibrationPattern - In the implementation block
@property (nonatomic,copy) NSString * songPath;                                    //@synthesize songPath=_songPath - In the implementation block
@property (assign,nonatomic) unsigned long long soundBehavior;                     //@synthesize soundBehavior=_soundBehavior - In the implementation block
@property (assign,nonatomic) unsigned systemSoundID;                               //@synthesize systemSoundID=_systemSoundID - In the implementation block
@property (nonatomic,readonly) long long alertType; 
@property (nonatomic,copy,readonly) NSString * accountIdentifier; 
@property (nonatomic,readonly) BOOL ignoreRingerSwitch; 
@property (nonatomic,copy,readonly) NSString * toneIdentifier; 
@property (nonatomic,copy,readonly) NSString * vibrationIdentifier; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(void)setRepeats:(BOOL)arg1 ;
-(NSString *)accountIdentifier;
-(long long)alertType;
-(NSString *)audioCategory;
-(NSString *)toneIdentifier;
-(NSString *)vibrationIdentifier;
-(void)setAudioCategory:(NSString *)arg1 ;
-(long long)soundType;
-(void)setSoundType:(long long)arg1 ;
-(NSDictionary *)vibrationPattern;
-(void)setVibrationPattern:(NSDictionary *)arg1 ;
-(TLAlertConfiguration *)alertConfiguration;
-(id)initWithToneAlertConfiguration:(id)arg1 ;
-(id)initWithToneAlert:(long long)arg1 accountIdentifier:(id)arg2 ignoreRingerSwitch:(BOOL)arg3 ;
-(id)initWithToneAlert:(long long)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4 ignoreRingerSwitch:(BOOL)arg5 ;
-(id)initWithToneAlert:(long long)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 ignoreRingerSwitch:(BOOL)arg4 ;
-(void)setAlertConfiguration:(TLAlertConfiguration *)arg1 ;
-(double)maxDuration;
-(BOOL)isRepeating;
-(NSString *)ringtoneName;
-(unsigned long long)soundBehavior;
-(unsigned)systemSoundID;
-(void)setMaxDuration:(double)arg1 ;
-(void)setRingtoneName:(NSString *)arg1 ;
-(void)setSoundBehavior:(unsigned long long)arg1 ;
-(void)setSystemSoundID:(unsigned)arg1 ;
-(id)initWithToneAlert:(long long)arg1 ;
-(id)initWithToneAlert:(long long)arg1 ignoreRingerSwitch:(BOOL)arg2 ;
-(id)initWithToneAlert:(long long)arg1 accountIdentifier:(id)arg2 ;
-(id)initWithToneAlert:(long long)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 ;
-(BOOL)ignoreRingerSwitch;
-(NSString *)songPath;
-(void)setSongPath:(NSString *)arg1 ;
@end

