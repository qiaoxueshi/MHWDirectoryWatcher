/*
 *  MHWDirectoryWatcher.h
 *  Created by Martin Hwasser on 12/19/11.
 */

#import <Foundation/Foundation.h>

static NSString * const MHWDirectoryDidStartChangesNotification = @"MHWDirectoryDidStartChangesNotification";
static NSString * const MHWDirectoryDidFinishChangesNotification = @"MHWDirectoryDidFinishChangesNotification";

@interface MHWDirectoryWatcher : NSObject

// Returns an initialized MHWDirectoryWatcher and begins to watch the path, if specified
+ (MHWDirectoryWatcher *)directoryWatcherAtPath:(NSString *)watchPath
                               startImmediately:(BOOL)startImmediately;

// Equivalent to calling +directoryWatcherAtPath:startImmediately and passing
// YES for startImmediately.
+ (MHWDirectoryWatcher *)directoryWatcherAtPath:(NSString *)watchPath;

// Returns YES if started watching, NO if already is watching
- (BOOL)startWatching;
// Returns YES if stopped watching, NO if not watching
- (BOOL)stopWatching;

// The path being watched
@property (nonatomic, readonly, copy) NSString *watchedPath;

@end
