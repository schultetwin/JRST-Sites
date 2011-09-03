DESCRIPTION:
------------
This module allows you to give some user roles an exemption to
required fields.

REQUIREMENTS:
-------------
This module does require content.module (CCK) to be enabled.

INSTALLATION:
-------------
1. Place the entire contents of this module into your /sites/*/modules 
directory. The asterisk represents either all or one of your multisite 
folders
2. Navigate to the administer > modules page and enable the module.

USING:
------
When you are creating a new field you have the option of giving certain
roles an exemption status for the required attribute. For example, you
would check the normal required option, but then if you wanted a certain
role to be exempt you would check the the role in the Required by role 
group. When a user of that role goes to the form to add or edit that will
not need to fill out that field because they are exempt.

AUTHOR:
-------
Joe Wheaton
joe.wheaton@gmail.com

I would also like to thank Matthias Hutterer for his form_markup module.
Much of the base functionality is borrowed from this module because it was
doing a similar function.
