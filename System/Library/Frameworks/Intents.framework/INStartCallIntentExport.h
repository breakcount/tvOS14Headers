/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INCallRecordFilter, INCallRecord, NSArray;


@protocol INStartCallIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INCallRecordFilter * callRecordFilter; 
@property (nonatomic,copy) INCallRecord * callRecordToCallBack; 
@property (assign,nonatomic) long long audioRoute; 
@property (assign,nonatomic) long long destinationType; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (nonatomic,copy) NSArray * contacts; 
@property (assign,setter=setTTYType:,nonatomic) long long ttyType; 
@property (assign,nonatomic) long long callCapability; 
@required
-(id)init;
-(long long)destinationType;
-(void)setDestinationType:(long long)arg1;
-(long long)audioRoute;
-(void)setAudioRoute:(long long)arg1;
-(NSArray *)contacts;
-(void)setContacts:(id)arg1;
-(long long)preferredCallProvider;
-(void)setPreferredCallProvider:(long long)arg1;
-(long long)ttyType;
-(void)setTTYType:(long long)arg1;
-(long long)callCapability;
-(void)setCallCapability:(long long)arg1;
-(INCallRecordFilter *)callRecordFilter;
-(void)setCallRecordFilter:(id)arg1;
-(INCallRecord *)callRecordToCallBack;
-(void)setCallRecordToCallBack:(id)arg1;

@end

