-- MySQL dump 10.16  Distrib 10.2.14-MariaDB, for Win64 (AMD64)
--
-- Host: localhost    Database: loja10
-- ------------------------------------------------------
-- Server version	10.2.14-MariaDB

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
  `id` smallint(5) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  `id_cidade` smallint(5) unsigned DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `cidade_idx` (`id_cidade`),
  CONSTRAINT `bairro_cidade` FOREIGN KEY (`id_cidade`) REFERENCES `cidadet` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
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
  `id` smallint(5) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  `descricao` varchar(100) NOT NULL,
  `salario` decimal(6,2) unsigned NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
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
  `id` smallint(5) unsigned NOT NULL,
  `descricao` varchar(100) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
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
  `id` smallint(5) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  `id_estado` smallint(5) unsigned DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `estado_idx` (`id_estado`),
  CONSTRAINT `cidade_estado` FOREIGN KEY (`id_estado`) REFERENCES `estadot` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cidadet`
--

LOCK TABLES `cidadet` WRITE;
/*!40000 ALTER TABLE `cidadet` DISABLE KEYS */;
/*!40000 ALTER TABLE `cidadet` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `empresat`
--

DROP TABLE IF EXISTS `empresat`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `empresat` (
  `id` smallint(5) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  `descrição` varchar(100) NOT NULL,
  `id_endereco` smallint(5) unsigned NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `empresat`
--

LOCK TABLES `empresat` WRITE;
/*!40000 ALTER TABLE `empresat` DISABLE KEYS */;
/*!40000 ALTER TABLE `empresat` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `enderecot`
--

DROP TABLE IF EXISTS `enderecot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `enderecot` (
  `id` smallint(5) unsigned NOT NULL,
  `nome_rua` varchar(100) NOT NULL,
  `id_bairro` smallint(5) unsigned DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `bairro_idx` (`id_bairro`),
  CONSTRAINT `endereco_bairro` FOREIGN KEY (`id_bairro`) REFERENCES `bairrot` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
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
  `id` smallint(5) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  `id_pais` smallint(5) unsigned NOT NULL,
  PRIMARY KEY (`id`),
  KEY `estado_pais_idx` (`id_pais`),
  CONSTRAINT `estado_pais` FOREIGN KEY (`id_pais`) REFERENCES `paist` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `estadot`
--

LOCK TABLES `estadot` WRITE;
/*!40000 ALTER TABLE `estadot` DISABLE KEYS */;
/*!40000 ALTER TABLE `estadot` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `fornecedort`
--

DROP TABLE IF EXISTS `fornecedort`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `fornecedort` (
  `id` smallint(5) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  `id_empresa` smallint(5) unsigned NOT NULL,
  `id_pedido` smallint(5) unsigned DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `fornecedort`
--

LOCK TABLES `fornecedort` WRITE;
/*!40000 ALTER TABLE `fornecedort` DISABLE KEYS */;
/*!40000 ALTER TABLE `fornecedort` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `funcionariot`
--

DROP TABLE IF EXISTS `funcionariot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `funcionariot` (
  `id` smallint(5) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  `id_endereco` smallint(5) unsigned NOT NULL,
  `id_cargo` smallint(5) unsigned NOT NULL,
  `dt_admissao` date NOT NULL,
  `dt_demissao` date DEFAULT NULL,
  `id_loja` smallint(5) unsigned NOT NULL,
  PRIMARY KEY (`id`),
  KEY `func_cargo_idx` (`id_cargo`),
  KEY `func_endereco_idx` (`id_endereco`),
  KEY `func_lojaa_idx` (`id_loja`),
  CONSTRAINT `func_cargo` FOREIGN KEY (`id_cargo`) REFERENCES `cargot` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `func_endereco` FOREIGN KEY (`id_endereco`) REFERENCES `enderecot` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `func_lojaa` FOREIGN KEY (`id_loja`) REFERENCES `lojat` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `funcionariot`
--

LOCK TABLES `funcionariot` WRITE;
/*!40000 ALTER TABLE `funcionariot` DISABLE KEYS */;
/*!40000 ALTER TABLE `funcionariot` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `lojat`
--

DROP TABLE IF EXISTS `lojat`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `lojat` (
  `id` smallint(5) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  `id_enderececol` smallint(5) unsigned NOT NULL,
  PRIMARY KEY (`id`),
  KEY `loja_endereco_idx` (`id_enderececol`),
  CONSTRAINT `loja_endereco` FOREIGN KEY (`id_enderececol`) REFERENCES `enderecot` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `lojat`
--

LOCK TABLES `lojat` WRITE;
/*!40000 ALTER TABLE `lojat` DISABLE KEYS */;
/*!40000 ALTER TABLE `lojat` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `paist`
--

DROP TABLE IF EXISTS `paist`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `paist` (
  `id` smallint(5) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `paist`
--

LOCK TABLES `paist` WRITE;
/*!40000 ALTER TABLE `paist` DISABLE KEYS */;
/*!40000 ALTER TABLE `paist` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `pedidot`
--

DROP TABLE IF EXISTS `pedidot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `pedidot` (
  `id` smallint(5) unsigned NOT NULL,
  `id_produtos` smallint(5) unsigned NOT NULL,
  `id_loja` smallint(5) unsigned NOT NULL,
  `valor_total` smallint(5) unsigned NOT NULL,
  PRIMARY KEY (`id`),
  KEY `pedido_produtos_idx` (`id_produtos`),
  KEY `pedido_loja_idx` (`id_loja`),
  CONSTRAINT `pedido_loja` FOREIGN KEY (`id_loja`) REFERENCES `lojat` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `pedido_produtos` FOREIGN KEY (`id_produtos`) REFERENCES `produtot` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pedidot`
--

LOCK TABLES `pedidot` WRITE;
/*!40000 ALTER TABLE `pedidot` DISABLE KEYS */;
/*!40000 ALTER TABLE `pedidot` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `produtot`
--

DROP TABLE IF EXISTS `produtot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `produtot` (
  `id` smallint(5) unsigned NOT NULL,
  `nome` varchar(100) NOT NULL,
  `valor_compra` decimal(5,2) unsigned NOT NULL,
  `valor_venda` decimal(5,2) unsigned NOT NULL,
  `id_categoria_venda` smallint(5) unsigned NOT NULL,
  `id_loja` smallint(5) unsigned NOT NULL,
  PRIMARY KEY (`id`),
  KEY `produto_categoria_idx` (`id_categoria_venda`),
  KEY `produto_loja_idx` (`id_loja`),
  CONSTRAINT `produto_categoria` FOREIGN KEY (`id_categoria_venda`) REFERENCES `categoria_produtot` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `produto_loja` FOREIGN KEY (`id_loja`) REFERENCES `lojat` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `produtot`
--

LOCK TABLES `produtot` WRITE;
/*!40000 ALTER TABLE `produtot` DISABLE KEYS */;
/*!40000 ALTER TABLE `produtot` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `qtditenspedidot`
--

DROP TABLE IF EXISTS `qtditenspedidot`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `qtditenspedidot` (
  `id_pedido` smallint(5) unsigned NOT NULL,
  `id_produto` smallint(5) unsigned NOT NULL,
  `quantidade` smallint(5) unsigned NOT NULL,
  PRIMARY KEY (`id_pedido`,`id_produto`),
  KEY `qtd_produtos_idx` (`id_produto`),
  CONSTRAINT `qtd_pedido` FOREIGN KEY (`id_pedido`) REFERENCES `produtot` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `qtd_produtos` FOREIGN KEY (`id_produto`) REFERENCES `produtot` (`id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `qtditenspedidot`
--

LOCK TABLES `qtditenspedidot` WRITE;
/*!40000 ALTER TABLE `qtditenspedidot` DISABLE KEYS */;
/*!40000 ALTER TABLE `qtditenspedidot` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2019-11-25 21:40:21
