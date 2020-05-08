/*.c for comments highlight
https://console.aws.amazon.com/console/home?region=us-east-1
https://docs.aws.amazon.com/AmazonS3/latest/dev/delete-or-empty-bucket.html#delete-bucket-awscli
*/
aws s3 rb s3://buck --force
//KO xargsaws s3 ls |grep 2019|xargs cut -c 2-1000
   aws s3 ls |cut -c 20-1000 |xargs aws s3 rb s3://'{}'
