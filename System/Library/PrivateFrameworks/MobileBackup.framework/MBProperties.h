/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDate, NSDictionary, NSString;

@interface MBProperties : NSObject {

	BOOL _protect;
	BOOL _protected;
	id _plist;
	double _minSupportedVersion;
	double _maxSupportedVersion;

}

@property (assign,nonatomic) double minSupportedVersion;                          //@synthesize minSupportedVersion=_minSupportedVersion - In the implementation block
@property (assign,nonatomic) double maxSupportedVersion;                          //@synthesize maxSupportedVersion=_maxSupportedVersion - In the implementation block
@property (nonatomic,readonly) id propertyList;                                   //@synthesize plist=_plist - In the implementation block
@property (assign,getter=isProtected,nonatomic) BOOL protected;                   //@synthesize protected=_protected - In the implementation block
@property (assign,nonatomic) double systemDomainsVersion; 
@property (nonatomic,retain) NSData * keybagData; 
@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) double version; 
@property (assign,getter=wasPasscodeSet,nonatomic) BOOL passcodeSet; 
@property (assign,nonatomic) BOOL encrypted; 
@property (nonatomic,readonly) NSDictionary * containers; 
@property (nonatomic,readonly) NSDictionary * appleIDs; 
@property (nonatomic,retain) NSString * activeAppleID; 
@property (nonatomic,retain) NSDictionary * lockdownKeys; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) NSString * buildVersion; 
@property (nonatomic,retain) NSData * buddyStashData; 
@property (nonatomic,readonly) BOOL hasCorruptSQLiteDBs; 
@property (nonatomic,readonly) BOOL hasManifestDB; 
@property (nonatomic,readonly) BOOL hasEncryptedManifestDB; 
@property (assign,nonatomic) NSData * manifestEncryptionKey; 
@property (nonatomic,retain) NSString * requiredProductVersion; 
+(id)properties;
+(id)propertiesWithFile:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSDate *)date;
-(id)propertyList;
-(double)version;
-(void)setVersion:(double)arg1 ;
-(NSString *)productType;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)deviceName;
-(BOOL)writeToFile:(id)arg1 error:(id*)arg2 ;
-(id)containerWithIdentifier:(id)arg1 ;
-(NSString *)deviceID;
-(NSString *)buildVersion;
-(NSString *)serialNumber;
-(void)setEncrypted:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)encrypted;
-(id)_dictionaryForKey:(id)arg1 ;
-(id)_dataForKey:(id)arg1 ;
-(NSDictionary *)containers;
-(NSData *)keybagData;
-(BOOL)_boolForKey:(id)arg1 ;
-(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)initWithFile:(id)arg1 error:(id*)arg2 ;
-(id)initWithVersion:(double)arg1 minVersion:(double)arg2 maxVersion:(double)arg3 ;
-(void)setMinSupportedVersion:(double)arg1 ;
-(void)setMaxSupportedVersion:(double)arg1 ;
-(double)systemDomainsVersion;
-(void)setSystemDomainsVersion:(double)arg1 ;
-(double)minSupportedVersion;
-(double)maxSupportedVersion;
-(void)_setData:(id)arg1 forKey:(id)arg2 ;
-(void)_setDictionary:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)lockdownKeys;
-(id)_stringForLockdownKey:(id)arg1 ;
-(NSData *)manifestEncryptionKey;
-(NSDictionary *)appleIDs;
-(void)addContainer:(id)arg1 ;
-(NSString *)requiredProductVersion;
-(BOOL)wasPasscodeSet;
-(void)setRequiredProductVersion:(NSString *)arg1 ;
-(void)setKeybagData:(NSData *)arg1 ;
-(NSData *)buddyStashData;
-(void)setBuddyStashData:(NSData *)arg1 ;
-(void)setPasscodeSet:(BOOL)arg1 ;
-(void)setManifestEncryptionKey:(NSData *)arg1 ;
-(void)setLockdownKeys:(NSDictionary *)arg1 ;
-(BOOL)hasCorruptSQLiteDBs;
-(BOOL)hasManifestDB;
-(BOOL)hasEncryptedManifestDB;
-(void)addAppleIDsFromSet:(id)arg1 dataClass:(id)arg2 ;
-(void)addAppleID:(id)arg1 DSID:(id)arg2 altDSID:(id)arg3 dataClass:(id)arg4 ;
-(void)addAssetDescriptionForAppleID:(id)arg1 assetDescription:(id)arg2 ;
-(NSString *)activeAppleID;
-(void)setActiveAppleID:(NSString *)arg1 ;
-(void)addContainersFromArray:(id)arg1 ;
-(void)removeAllContainers;
-(id)dataWithError:(id*)arg1 ;
-(BOOL)isProtected;
-(void)setProtected:(BOOL)arg1 ;
@end

