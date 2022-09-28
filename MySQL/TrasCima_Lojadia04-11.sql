-- MySQL dump 10.13  Distrib 5.7.21, for Win64 (x86_64)
--
-- Host: localhost    Database: loja10
-- ------------------------------------------------------
-- Server version	5.5.5-10.2.14-MariaDB

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `bairrot`
--

DROP TABLE IF EXISTS `bairrot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `bairrot` (
  `id` int(10) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  `id_estadoF` int(10) unsigned DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `bairrot`
--

LOCK TABLES `bairrot` WRITE;
/*!40000 ALTER TABLE `bairrot` DISABLE KEYS */;
/*!40000 ALTER TABLE `bairrot` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `cargot`
--

DROP TABLE IF EXISTS `cargot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `cargot` (
  `id` int(10) unsigned NOT NULL,
  `descricao` varchar(100) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cargot`
--

LOCK TABLES `cargot` WRITE;
/*!40000 ALTER TABLE `cargot` DISABLE KEYS */;
/*!40000 ALTER TABLE `cargot` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `categoria_produtot`
--

DROP TABLE IF EXISTS `categoria_produtot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `categoria_produtot` (
  `id` int(10) unsigned NOT NULL,
  `descricao` varchar(100) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `categoria_produtot`
--

LOCK TABLES `categoria_produtot` WRITE;
/*!40000 ALTER TABLE `categoria_produtot` DISABLE KEYS */;
/*!40000 ALTER TABLE `categoria_produtot` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `cidadet`
--

DROP TABLE IF EXISTS `cidadet`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `cidadet` (
  `id` int(10) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  `id_bairroF` int(10) unsigned DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cidadet`
--

LOCK TABLES `cidadet` WRITE;
/*!40000 ALTER TABLE `cidadet` DISABLE KEYS */;
/*!40000 ALTER TABLE `cidadet` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `enderecot`
--

DROP TABLE IF EXISTS `enderecot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `enderecot` (
  `id` int(10) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  `id_cidadeF` int(10) unsigned DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `enderecot`
--

LOCK TABLES `enderecot` WRITE;
/*!40000 ALTER TABLE `enderecot` DISABLE KEYS */;
/*!40000 ALTER TABLE `enderecot` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `estadot`
--

DROP TABLE IF EXISTS `estadot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `estadot` (
  `id` int(10) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `estadot`
--

LOCK TABLES `estadot` WRITE;
/*!40000 ALTER TABLE `estadot` DISABLE KEYS */;
/*!40000 ALTER TABLE `estadot` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `funcionariot`
--

DROP TABLE IF EXISTS `funcionariot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `funcionariot` (
  `id` int(10) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  `id_enderecoF` int(10) unsigned DEFAULT NULL,
  `id_cargo` int(10) unsigned DEFAULT NULL,
  `dt_admissao` date NOT NULL,
  `dt_demissao` date DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `funcionariot`
--

LOCK TABLES `funcionariot` WRITE;
/*!40000 ALTER TABLE `funcionariot` DISABLE KEYS */;
/*!40000 ALTER TABLE `funcionariot` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `produtot`
--

DROP TABLE IF EXISTS `produtot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `produtot` (
  `id` int(10) unsigned NOT NULL,
  `descricao` varchar(100) NOT NULL,
  `quantidade` int(10) unsigned DEFAULT NULL,
  `valor_compra` int(10) unsigned NOT NULL,
  `valor_venda` int(10) unsigned NOT NULL,
  `id_categoria_venda` int(10) unsigned DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `produtot`
--

LOCK TABLES `produtot` WRITE;
/*!40000 ALTER TABLE `produtot` DISABLE KEYS */;
/*!40000 ALTER TABLE `produtot` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2019-11-04 21:26:43
