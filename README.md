# MHWDirectoryWatcher
`MHWDirectoryWatcher` is a lightweight class that uses GCD to monitor a given path for changes.
When any change to the directory occurs, `MHWDirectoryWatcher` starts polling the monitored path, making sure that file transfers are finished before posting notifications.

### Installing
Copy MHWDirectoryWatcher.h+m into your project.

### Usage
Get an instance of `MHWDirectoryWatcher` using factory method `+directoryWatcherAtPath`.
Call `-startWatching` to begin watching the desired directory.

Add an observer for the notification name `MHWDirectoryDidFinishChangesNotification` to be notified when changes have been made to the directory.
Optionally add an observer for the notification name `MHWDirectoryDidStartChangesNotification` to be notified when changes are about to happen.

Call `-stopWatching` / `-startWatching` to pause/resume.
