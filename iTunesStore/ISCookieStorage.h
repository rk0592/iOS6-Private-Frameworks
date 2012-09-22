/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ISSQLiteDatabase, NSObject<OS_dispatch_queue>, NSURL;

@interface ISCookieStorage : NSObject
{
    ISSQLiteDatabase *_db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    void *_processAssertion;
    int _processAssertionCount;
    NSURL *_storageLocation;
    BOOL _usesTaskCompletionAssertions;
}

+ (id)sharedInstance;
+ (BOOL)_setupCookieDatabase:(id)arg1;
+ (void)_setUsesTaskCompletionAssertions:(BOOL)arg1;
+ (id)sharedStorage;
- (void)synchronizeCookies;
- (void)_endProcessAssertion;
- (id)_copyPrivateCookiesForURL:(id)arg1 userIdentifier:(id)arg2;
- (id)_columnNameForCookieProperty:(id)arg1;
- (BOOL)_bindStatement:(struct sqlite3_stmt *)arg1 withValues:(id)arg2;
- (void)_bindInsertStatement:(struct sqlite3_stmt *)arg1 forCookie:(id)arg2 userIdentifier:(id)arg3;
- (void)_beginProcessAssertion;
@property(readonly) NSURL *storageLocation;
- (void)removeCookiesWithProperties:(id)arg1;
- (void)removeAllCookies;
- (void)setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2;
- (void)setCookies:(id)arg1 forUserIdentifier:(id)arg2;
- (id)cookieHeadersForURL:(id)arg1 userIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithStorageLocation:(id)arg1;
- (id)init;

@end
