/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSpeakableString;


@protocol INActivateCarSignalIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * carName; 
@property (assign,nonatomic) unsigned long long signals; 
@required
-(id)init;
-(INSpeakableString *)carName;
-(void)setCarName:(id)arg1;
-(unsigned long long)signals;
-(void)setSignals:(unsigned long long)arg1;

@end

