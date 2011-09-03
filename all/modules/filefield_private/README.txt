
-- SUMMARY --

An experimental module to enable true private downloads for Drupal 6.

If you simply require .htaccess protection read the handbook page here:

  Restrict specific folders from public download (via .htaccess)
  Drupal Handbook - http://drupal.org/node/540754

Or try one of the following private downloads related projects

Private Upload: http://drupal.org/project/private_upload
Private Download: http://drupal.org/project/private_download
Protected Download (Drupal 5): http://drupal.org/project/downld

For a full description visit the project page:
  http://drupal.org/project/filefield_private
Bug reports, feature suggestions and latest developments:
  http://drupal.org/project/issues/filefield_private

-- REQUIREMENTS --

* CCK
* FileField

-- INSTALLATION --

* Install as usual, see http://drupal.org/node/70151 for further information.

* Go to Administer > Site configuration > File system, and provide enter a
  directory for "FileField private file system path". Relative paths can be
  used. For example "../private"
  
  THIS MUST RESIDE OUTSIDE OF THE WEB ROOT DIRECTORY FOR THE MODULE TO WORK
  
  No ".htaccess" restriction is provided by this method. 
  
* Create a new CCK FileField to use the private download option. Eg: You
  need to check the "Private downloads" option.
  
  If you add this method to existing fields, files will be moved when the page
  that they are attached to is saved. There is no batch process to do this.
  
-- UNINSTALL --

  THERE IS NO REVERSE PATH TO RESTORE NORMAL DOWNLOADS ONCE FILES HAVE BEEN
  SAVED USING THIS METHOD.
  
  Manual reversion back to standard Drupal file system
  
  1) Copy all files into the normal file directory.
  
     Copy from "[private dir]/path/to/cck" to "[drupal file dir]/path/to/cck" 

  2) Update your {files} table to ensure that all files moved in step one have
     the "[drupal file dir]/path/to/cck/[File name]" path.


-- CONTACT --

Current maintainers:
* Alan Davison (Alan D.) - http://www.caignwebs.com.au

-- REFERENCES --

Related threads to the .htaccess approach
* http://drupal.org/node/189239

