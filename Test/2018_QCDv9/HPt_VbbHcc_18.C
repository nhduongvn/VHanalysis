void HPt_VbbHcc_18()
{
//=========Macro generated from canvas: HPt_VbbHcc_18/HPt_VbbHcc_18
//=========  (Tue Sep 20 10:39:22 2022) by ROOT version 6.14/09
   TCanvas *HPt_VbbHcc_18 = new TCanvas("HPt_VbbHcc_18", "HPt_VbbHcc_18",0,0,600,600);
   HPt_VbbHcc_18->SetHighLightColor(2);
   HPt_VbbHcc_18->Range(0,0,1,1);
   HPt_VbbHcc_18->SetFillColor(0);
   HPt_VbbHcc_18->SetFillStyle(4000);
   HPt_VbbHcc_18->SetBorderMode(0);
   HPt_VbbHcc_18->SetBorderSize(2);
   HPt_VbbHcc_18->SetFrameFillStyle(1000);
   HPt_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-1421.678,1562.903,1420267);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(1217236);
   
   TH1F *st_stack_15 = new TH1F("st_stack_15","",40,0,2000);
   st_stack_15->SetMinimum(0.01);
   st_stack_15->SetMaximum(1278098);
   st_stack_15->SetDirectory(0);
   st_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_15->SetLineColor(ci);
   st_stack_15->GetXaxis()->SetRange(7,30);
   st_stack_15->GetXaxis()->SetLabelFont(42);
   st_stack_15->GetXaxis()->SetLabelSize(0.035);
   st_stack_15->GetXaxis()->SetTitleSize(0.035);
   st_stack_15->GetXaxis()->SetTitleFont(42);
   st_stack_15->GetYaxis()->SetTitle("Events/50.0");
   st_stack_15->GetYaxis()->SetLabelFont(42);
   st_stack_15->GetYaxis()->SetLabelSize(0.05);
   st_stack_15->GetYaxis()->SetTitleSize(0.057);
   st_stack_15->GetYaxis()->SetTitleOffset(1.2);
   st_stack_15->GetYaxis()->SetTitleFont(42);
   st_stack_15->GetZaxis()->SetLabelFont(42);
   st_stack_15->GetZaxis()->SetLabelSize(0.035);
   st_stack_15->GetZaxis()->SetTitleSize(0.035);
   st_stack_15->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_15);
   
   
   TH1D *VbbHcc_HPt_stack_1 = new TH1D("VbbHcc_HPt_stack_1","",40,0,2000);
   VbbHcc_HPt_stack_1->SetBinContent(1,94910.24);
   VbbHcc_HPt_stack_1->SetBinContent(2,396604.6);
   VbbHcc_HPt_stack_1->SetBinContent(3,476186.7);
   VbbHcc_HPt_stack_1->SetBinContent(4,276512.5);
   VbbHcc_HPt_stack_1->SetBinContent(5,120741.4);
   VbbHcc_HPt_stack_1->SetBinContent(6,42349.24);
   VbbHcc_HPt_stack_1->SetBinContent(7,16555.11);
   VbbHcc_HPt_stack_1->SetBinContent(8,6744.517);
   VbbHcc_HPt_stack_1->SetBinContent(9,3263.563);
   VbbHcc_HPt_stack_1->SetBinContent(10,1777.92);
   VbbHcc_HPt_stack_1->SetBinContent(11,1068.734);
   VbbHcc_HPt_stack_1->SetBinContent(12,732.4808);
   VbbHcc_HPt_stack_1->SetBinContent(13,355.931);
   VbbHcc_HPt_stack_1->SetBinContent(14,188.9576);
   VbbHcc_HPt_stack_1->SetBinContent(15,127.0132);
   VbbHcc_HPt_stack_1->SetBinContent(16,80.5938);
   VbbHcc_HPt_stack_1->SetBinContent(17,49.75148);
   VbbHcc_HPt_stack_1->SetBinContent(18,32.1424);
   VbbHcc_HPt_stack_1->SetBinContent(19,26.05804);
   VbbHcc_HPt_stack_1->SetBinContent(20,19.93201);
   VbbHcc_HPt_stack_1->SetBinContent(21,7.937131);
   VbbHcc_HPt_stack_1->SetBinContent(22,7.022558);
   VbbHcc_HPt_stack_1->SetBinContent(23,5.179813);
   VbbHcc_HPt_stack_1->SetBinContent(24,2.952744);
   VbbHcc_HPt_stack_1->SetBinContent(25,2.948082);
   VbbHcc_HPt_stack_1->SetBinContent(26,0.7789179);
   VbbHcc_HPt_stack_1->SetBinContent(27,1.03541);
   VbbHcc_HPt_stack_1->SetBinContent(28,1.041043);
   VbbHcc_HPt_stack_1->SetBinContent(30,0.8256023);
   VbbHcc_HPt_stack_1->SetBinContent(31,0.293146);
   VbbHcc_HPt_stack_1->SetBinContent(33,0.2427035);
   VbbHcc_HPt_stack_1->SetBinError(1,5817.935);
   VbbHcc_HPt_stack_1->SetBinError(2,14197.63);
   VbbHcc_HPt_stack_1->SetBinError(3,13484.58);
   VbbHcc_HPt_stack_1->SetBinError(4,9471.69);
   VbbHcc_HPt_stack_1->SetBinError(5,5081.092);
   VbbHcc_HPt_stack_1->SetBinError(6,1610.805);
   VbbHcc_HPt_stack_1->SetBinError(7,625.7679);
   VbbHcc_HPt_stack_1->SetBinError(8,293.5812);
   VbbHcc_HPt_stack_1->SetBinError(9,169.8782);
   VbbHcc_HPt_stack_1->SetBinError(10,110.7404);
   VbbHcc_HPt_stack_1->SetBinError(11,77.55039);
   VbbHcc_HPt_stack_1->SetBinError(12,61.98895);
   VbbHcc_HPt_stack_1->SetBinError(13,39.19023);
   VbbHcc_HPt_stack_1->SetBinError(14,25.09625);
   VbbHcc_HPt_stack_1->SetBinError(15,16.2738);
   VbbHcc_HPt_stack_1->SetBinError(16,11.96519);
   VbbHcc_HPt_stack_1->SetBinError(17,5.311843);
   VbbHcc_HPt_stack_1->SetBinError(18,4.006006);
   VbbHcc_HPt_stack_1->SetBinError(19,3.644184);
   VbbHcc_HPt_stack_1->SetBinError(20,2.996441);
   VbbHcc_HPt_stack_1->SetBinError(21,1.516142);
   VbbHcc_HPt_stack_1->SetBinError(22,1.474135);
   VbbHcc_HPt_stack_1->SetBinError(23,1.190224);
   VbbHcc_HPt_stack_1->SetBinError(24,1.000863);
   VbbHcc_HPt_stack_1->SetBinError(25,0.8899692);
   VbbHcc_HPt_stack_1->SetBinError(26,0.4497117);
   VbbHcc_HPt_stack_1->SetBinError(27,0.5177168);
   VbbHcc_HPt_stack_1->SetBinError(28,0.5205269);
   VbbHcc_HPt_stack_1->SetBinError(30,0.4769179);
   VbbHcc_HPt_stack_1->SetBinError(31,0.293146);
   VbbHcc_HPt_stack_1->SetBinError(33,0.2427035);
   VbbHcc_HPt_stack_1->SetEntries(20172);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_HPt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_1->SetLineColor(ci);
   VbbHcc_HPt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_1,"");
   
   TH1D *VbbHcc_HPt_stack_2 = new TH1D("VbbHcc_HPt_stack_2","",40,0,2000);
   VbbHcc_HPt_stack_2->SetBinContent(1,1455.188);
   VbbHcc_HPt_stack_2->SetBinContent(2,4550.541);
   VbbHcc_HPt_stack_2->SetBinContent(3,3780.772);
   VbbHcc_HPt_stack_2->SetBinContent(4,1796.163);
   VbbHcc_HPt_stack_2->SetBinContent(5,874.9062);
   VbbHcc_HPt_stack_2->SetBinContent(6,450.3635);
   VbbHcc_HPt_stack_2->SetBinContent(7,273.773);
   VbbHcc_HPt_stack_2->SetBinContent(8,152.5405);
   VbbHcc_HPt_stack_2->SetBinContent(9,109.0664);
   VbbHcc_HPt_stack_2->SetBinContent(10,66.19942);
   VbbHcc_HPt_stack_2->SetBinContent(11,39.79073);
   VbbHcc_HPt_stack_2->SetBinContent(12,29.07363);
   VbbHcc_HPt_stack_2->SetBinContent(13,19.56877);
   VbbHcc_HPt_stack_2->SetBinContent(14,13.96768);
   VbbHcc_HPt_stack_2->SetBinContent(15,9.707141);
   VbbHcc_HPt_stack_2->SetBinContent(16,5.336814);
   VbbHcc_HPt_stack_2->SetBinContent(17,4.234014);
   VbbHcc_HPt_stack_2->SetBinContent(18,3.86407);
   VbbHcc_HPt_stack_2->SetBinContent(19,0.7565739);
   VbbHcc_HPt_stack_2->SetBinContent(20,2.117169);
   VbbHcc_HPt_stack_2->SetBinContent(21,0.56949);
   VbbHcc_HPt_stack_2->SetBinContent(22,1.111135);
   VbbHcc_HPt_stack_2->SetBinContent(23,0.9284523);
   VbbHcc_HPt_stack_2->SetBinContent(24,0.5057146);
   VbbHcc_HPt_stack_2->SetBinContent(25,0.2589405);
   VbbHcc_HPt_stack_2->SetBinContent(26,0.3770511);
   VbbHcc_HPt_stack_2->SetBinContent(27,0.2954738);
   VbbHcc_HPt_stack_2->SetBinContent(32,0.5838315);
   VbbHcc_HPt_stack_2->SetBinError(1,18.55542);
   VbbHcc_HPt_stack_2->SetBinError(2,36.11783);
   VbbHcc_HPt_stack_2->SetBinError(3,29.66281);
   VbbHcc_HPt_stack_2->SetBinError(4,20.04688);
   VbbHcc_HPt_stack_2->SetBinError(5,14.82956);
   VbbHcc_HPt_stack_2->SetBinError(6,10.59829);
   VbbHcc_HPt_stack_2->SetBinError(7,10.44272);
   VbbHcc_HPt_stack_2->SetBinError(8,6.071608);
   VbbHcc_HPt_stack_2->SetBinError(9,5.644551);
   VbbHcc_HPt_stack_2->SetBinError(10,4.274629);
   VbbHcc_HPt_stack_2->SetBinError(11,3.236878);
   VbbHcc_HPt_stack_2->SetBinError(12,2.934436);
   VbbHcc_HPt_stack_2->SetBinError(13,2.31219);
   VbbHcc_HPt_stack_2->SetBinError(14,2.028922);
   VbbHcc_HPt_stack_2->SetBinError(15,1.702144);
   VbbHcc_HPt_stack_2->SetBinError(16,1.282123);
   VbbHcc_HPt_stack_2->SetBinError(17,1.038804);
   VbbHcc_HPt_stack_2->SetBinError(18,1.065442);
   VbbHcc_HPt_stack_2->SetBinError(19,0.4323662);
   VbbHcc_HPt_stack_2->SetBinError(20,0.8101802);
   VbbHcc_HPt_stack_2->SetBinError(21,0.4142108);
   VbbHcc_HPt_stack_2->SetBinError(22,0.5342814);
   VbbHcc_HPt_stack_2->SetBinError(23,0.509682);
   VbbHcc_HPt_stack_2->SetBinError(24,0.3626492);
   VbbHcc_HPt_stack_2->SetBinError(25,0.2589405);
   VbbHcc_HPt_stack_2->SetBinError(26,0.3770511);
   VbbHcc_HPt_stack_2->SetBinError(27,0.2954738);
   VbbHcc_HPt_stack_2->SetBinError(32,0.4129113);
   VbbHcc_HPt_stack_2->SetEntries(157315);

   ci = TColor::GetColor("#660066");
   VbbHcc_HPt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_2->SetLineColor(ci);
   VbbHcc_HPt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_2,"");
   
   TH1D *VbbHcc_HPt_stack_3 = new TH1D("VbbHcc_HPt_stack_3","",40,0,2000);
   VbbHcc_HPt_stack_3->SetBinContent(1,28716.81);
   VbbHcc_HPt_stack_3->SetBinContent(2,81662);
   VbbHcc_HPt_stack_3->SetBinContent(3,64195.72);
   VbbHcc_HPt_stack_3->SetBinContent(4,25140.68);
   VbbHcc_HPt_stack_3->SetBinContent(5,10902.1);
   VbbHcc_HPt_stack_3->SetBinContent(6,5425.76);
   VbbHcc_HPt_stack_3->SetBinContent(7,2962.454);
   VbbHcc_HPt_stack_3->SetBinContent(8,1676.45);
   VbbHcc_HPt_stack_3->SetBinContent(9,973.1218);
   VbbHcc_HPt_stack_3->SetBinContent(10,603.5843);
   VbbHcc_HPt_stack_3->SetBinContent(11,376.249);
   VbbHcc_HPt_stack_3->SetBinContent(12,238.2747);
   VbbHcc_HPt_stack_3->SetBinContent(13,157.1276);
   VbbHcc_HPt_stack_3->SetBinContent(14,105.3269);
   VbbHcc_HPt_stack_3->SetBinContent(15,67.01509);
   VbbHcc_HPt_stack_3->SetBinContent(16,44.99554);
   VbbHcc_HPt_stack_3->SetBinContent(17,28.00646);
   VbbHcc_HPt_stack_3->SetBinContent(18,19.58824);
   VbbHcc_HPt_stack_3->SetBinContent(19,12.43395);
   VbbHcc_HPt_stack_3->SetBinContent(20,10.01454);
   VbbHcc_HPt_stack_3->SetBinContent(21,7.445398);
   VbbHcc_HPt_stack_3->SetBinContent(22,3.448201);
   VbbHcc_HPt_stack_3->SetBinContent(23,3.694451);
   VbbHcc_HPt_stack_3->SetBinContent(24,2.426514);
   VbbHcc_HPt_stack_3->SetBinContent(25,1.012849);
   VbbHcc_HPt_stack_3->SetBinContent(26,1.562401);
   VbbHcc_HPt_stack_3->SetBinContent(27,0.3562151);
   VbbHcc_HPt_stack_3->SetBinContent(28,0.766204);
   VbbHcc_HPt_stack_3->SetBinContent(29,0.2752629);
   VbbHcc_HPt_stack_3->SetBinContent(30,0.07371777);
   VbbHcc_HPt_stack_3->SetBinContent(31,0.2061354);
   VbbHcc_HPt_stack_3->SetBinContent(32,0.1527714);
   VbbHcc_HPt_stack_3->SetBinContent(33,0.1275443);
   VbbHcc_HPt_stack_3->SetBinContent(37,0.05029509);
   VbbHcc_HPt_stack_3->SetBinError(1,49.75968);
   VbbHcc_HPt_stack_3->SetBinError(2,84.38832);
   VbbHcc_HPt_stack_3->SetBinError(3,75.01423);
   VbbHcc_HPt_stack_3->SetBinError(4,46.24963);
   VbbHcc_HPt_stack_3->SetBinError(5,30.49635);
   VbbHcc_HPt_stack_3->SetBinError(6,21.57028);
   VbbHcc_HPt_stack_3->SetBinError(7,16.51758);
   VbbHcc_HPt_stack_3->SetBinError(8,11.72936);
   VbbHcc_HPt_stack_3->SetBinError(9,8.850567);
   VbbHcc_HPt_stack_3->SetBinError(10,7.850344);
   VbbHcc_HPt_stack_3->SetBinError(11,5.570487);
   VbbHcc_HPt_stack_3->SetBinError(12,4.488056);
   VbbHcc_HPt_stack_3->SetBinError(13,3.60158);
   VbbHcc_HPt_stack_3->SetBinError(14,2.911023);
   VbbHcc_HPt_stack_3->SetBinError(15,2.377371);
   VbbHcc_HPt_stack_3->SetBinError(16,1.87475);
   VbbHcc_HPt_stack_3->SetBinError(17,1.489882);
   VbbHcc_HPt_stack_3->SetBinError(18,1.288509);
   VbbHcc_HPt_stack_3->SetBinError(19,0.9785175);
   VbbHcc_HPt_stack_3->SetBinError(20,0.864794);
   VbbHcc_HPt_stack_3->SetBinError(21,0.7783233);
   VbbHcc_HPt_stack_3->SetBinError(22,0.5078428);
   VbbHcc_HPt_stack_3->SetBinError(23,0.5437333);
   VbbHcc_HPt_stack_3->SetBinError(24,0.4252402);
   VbbHcc_HPt_stack_3->SetBinError(25,0.2697419);
   VbbHcc_HPt_stack_3->SetBinError(26,0.3753292);
   VbbHcc_HPt_stack_3->SetBinError(27,0.1644898);
   VbbHcc_HPt_stack_3->SetBinError(28,0.2387);
   VbbHcc_HPt_stack_3->SetBinError(29,0.1388142);
   VbbHcc_HPt_stack_3->SetBinError(30,0.07371777);
   VbbHcc_HPt_stack_3->SetBinError(31,0.1193645);
   VbbHcc_HPt_stack_3->SetBinError(32,0.1080403);
   VbbHcc_HPt_stack_3->SetBinError(33,0.09074784);
   VbbHcc_HPt_stack_3->SetBinError(37,0.05029509);
   VbbHcc_HPt_stack_3->SetEntries(3233690);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_HPt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_3->SetLineColor(ci);
   VbbHcc_HPt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_3,"");
   
   TH1D *VbbHcc_HPt_stack_4 = new TH1D("VbbHcc_HPt_stack_4","",40,0,2000);
   VbbHcc_HPt_stack_4->SetBinContent(1,603.7298);
   VbbHcc_HPt_stack_4->SetBinContent(2,2012.775);
   VbbHcc_HPt_stack_4->SetBinContent(3,2786.134);
   VbbHcc_HPt_stack_4->SetBinContent(4,2405.062);
   VbbHcc_HPt_stack_4->SetBinContent(5,1446.917);
   VbbHcc_HPt_stack_4->SetBinContent(6,750.7996);
   VbbHcc_HPt_stack_4->SetBinContent(7,422.7313);
   VbbHcc_HPt_stack_4->SetBinContent(8,235.419);
   VbbHcc_HPt_stack_4->SetBinContent(9,152.0534);
   VbbHcc_HPt_stack_4->SetBinContent(10,77.02159);
   VbbHcc_HPt_stack_4->SetBinContent(11,53.86598);
   VbbHcc_HPt_stack_4->SetBinContent(12,31.14414);
   VbbHcc_HPt_stack_4->SetBinContent(13,20.86949);
   VbbHcc_HPt_stack_4->SetBinContent(14,14.42297);
   VbbHcc_HPt_stack_4->SetBinContent(15,9.780412);
   VbbHcc_HPt_stack_4->SetBinContent(16,5.352296);
   VbbHcc_HPt_stack_4->SetBinContent(17,4.910186);
   VbbHcc_HPt_stack_4->SetBinContent(18,3.389741);
   VbbHcc_HPt_stack_4->SetBinContent(19,1.795926);
   VbbHcc_HPt_stack_4->SetBinContent(20,2.684875);
   VbbHcc_HPt_stack_4->SetBinContent(21,1.692853);
   VbbHcc_HPt_stack_4->SetBinContent(22,0.7908142);
   VbbHcc_HPt_stack_4->SetBinContent(23,0.6276172);
   VbbHcc_HPt_stack_4->SetBinContent(24,0.1759161);
   VbbHcc_HPt_stack_4->SetBinContent(26,0.3527567);
   VbbHcc_HPt_stack_4->SetBinContent(27,0.3260955);
   VbbHcc_HPt_stack_4->SetBinContent(28,0.2037285);
   VbbHcc_HPt_stack_4->SetBinContent(29,0.1155604);
   VbbHcc_HPt_stack_4->SetBinContent(31,0.09903028);
   VbbHcc_HPt_stack_4->SetBinContent(34,0.1113258);
   VbbHcc_HPt_stack_4->SetBinError(1,18.06509);
   VbbHcc_HPt_stack_4->SetBinError(2,32.41412);
   VbbHcc_HPt_stack_4->SetBinError(3,39.87591);
   VbbHcc_HPt_stack_4->SetBinError(4,34.28006);
   VbbHcc_HPt_stack_4->SetBinError(5,24.92723);
   VbbHcc_HPt_stack_4->SetBinError(6,13.00649);
   VbbHcc_HPt_stack_4->SetBinError(7,7.815953);
   VbbHcc_HPt_stack_4->SetBinError(8,5.318088);
   VbbHcc_HPt_stack_4->SetBinError(9,6.094929);
   VbbHcc_HPt_stack_4->SetBinError(10,2.910006);
   VbbHcc_HPt_stack_4->SetBinError(11,2.777802);
   VbbHcc_HPt_stack_4->SetBinError(12,1.842661);
   VbbHcc_HPt_stack_4->SetBinError(13,1.868428);
   VbbHcc_HPt_stack_4->SetBinError(14,1.255075);
   VbbHcc_HPt_stack_4->SetBinError(15,1.121098);
   VbbHcc_HPt_stack_4->SetBinError(16,0.7626664);
   VbbHcc_HPt_stack_4->SetBinError(17,0.727548);
   VbbHcc_HPt_stack_4->SetBinError(18,0.628384);
   VbbHcc_HPt_stack_4->SetBinError(19,0.4441216);
   VbbHcc_HPt_stack_4->SetBinError(20,0.9552998);
   VbbHcc_HPt_stack_4->SetBinError(21,0.448794);
   VbbHcc_HPt_stack_4->SetBinError(22,0.3023853);
   VbbHcc_HPt_stack_4->SetBinError(23,0.2588646);
   VbbHcc_HPt_stack_4->SetBinError(24,0.1246636);
   VbbHcc_HPt_stack_4->SetBinError(26,0.2058509);
   VbbHcc_HPt_stack_4->SetBinError(27,0.1894515);
   VbbHcc_HPt_stack_4->SetBinError(28,0.1443024);
   VbbHcc_HPt_stack_4->SetBinError(29,0.1155604);
   VbbHcc_HPt_stack_4->SetBinError(31,0.09903028);
   VbbHcc_HPt_stack_4->SetBinError(34,0.1113258);
   VbbHcc_HPt_stack_4->SetEntries(45812);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_HPt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_4->SetLineColor(ci);
   VbbHcc_HPt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_4,"");
   
   TH1D *VbbHcc_HPt_stack_5 = new TH1D("VbbHcc_HPt_stack_5","",40,0,2000);
   VbbHcc_HPt_stack_5->SetBinContent(1,108.0245);
   VbbHcc_HPt_stack_5->SetBinContent(2,396.7532);
   VbbHcc_HPt_stack_5->SetBinContent(3,590.7673);
   VbbHcc_HPt_stack_5->SetBinContent(4,629.4653);
   VbbHcc_HPt_stack_5->SetBinContent(5,406.4941);
   VbbHcc_HPt_stack_5->SetBinContent(6,240.3805);
   VbbHcc_HPt_stack_5->SetBinContent(7,168.3878);
   VbbHcc_HPt_stack_5->SetBinContent(8,100.7742);
   VbbHcc_HPt_stack_5->SetBinContent(9,67.07225);
   VbbHcc_HPt_stack_5->SetBinContent(10,41.2846);
   VbbHcc_HPt_stack_5->SetBinContent(11,27.7327);
   VbbHcc_HPt_stack_5->SetBinContent(12,20.15695);
   VbbHcc_HPt_stack_5->SetBinContent(13,12.03007);
   VbbHcc_HPt_stack_5->SetBinContent(14,8.754484);
   VbbHcc_HPt_stack_5->SetBinContent(15,6.744876);
   VbbHcc_HPt_stack_5->SetBinContent(16,5.016732);
   VbbHcc_HPt_stack_5->SetBinContent(17,2.758755);
   VbbHcc_HPt_stack_5->SetBinContent(18,2.183955);
   VbbHcc_HPt_stack_5->SetBinContent(19,1.919153);
   VbbHcc_HPt_stack_5->SetBinContent(20,1.047142);
   VbbHcc_HPt_stack_5->SetBinContent(21,0.9254457);
   VbbHcc_HPt_stack_5->SetBinContent(22,1.096136);
   VbbHcc_HPt_stack_5->SetBinContent(23,1.445865);
   VbbHcc_HPt_stack_5->SetBinContent(24,0.348373);
   VbbHcc_HPt_stack_5->SetBinContent(25,0.04957112);
   VbbHcc_HPt_stack_5->SetBinContent(26,0.007650409);
   VbbHcc_HPt_stack_5->SetBinContent(27,0.005382654);
   VbbHcc_HPt_stack_5->SetBinContent(28,0.004298252);
   VbbHcc_HPt_stack_5->SetBinContent(29,0.004984939);
   VbbHcc_HPt_stack_5->SetBinContent(30,0.3376638);
   VbbHcc_HPt_stack_5->SetBinContent(31,0.00237103);
   VbbHcc_HPt_stack_5->SetBinContent(32,0.001048778);
   VbbHcc_HPt_stack_5->SetBinContent(33,0.1619302);
   VbbHcc_HPt_stack_5->SetBinContent(34,0.001006097);
   VbbHcc_HPt_stack_5->SetBinContent(35,0.0005946276);
   VbbHcc_HPt_stack_5->SetBinContent(37,0.0002799611);
   VbbHcc_HPt_stack_5->SetBinContent(38,0.000287455);
   VbbHcc_HPt_stack_5->SetBinContent(39,0.0002358203);
   VbbHcc_HPt_stack_5->SetBinContent(40,0.0003860338);
   VbbHcc_HPt_stack_5->SetBinError(1,13.44812);
   VbbHcc_HPt_stack_5->SetBinError(2,26.75086);
   VbbHcc_HPt_stack_5->SetBinError(3,33.70972);
   VbbHcc_HPt_stack_5->SetBinError(4,34.24738);
   VbbHcc_HPt_stack_5->SetBinError(5,23.70143);
   VbbHcc_HPt_stack_5->SetBinError(6,14.11916);
   VbbHcc_HPt_stack_5->SetBinError(7,8.562627);
   VbbHcc_HPt_stack_5->SetBinError(8,4.846447);
   VbbHcc_HPt_stack_5->SetBinError(9,3.496859);
   VbbHcc_HPt_stack_5->SetBinError(10,2.42185);
   VbbHcc_HPt_stack_5->SetBinError(11,1.9967);
   VbbHcc_HPt_stack_5->SetBinError(12,2.223721);
   VbbHcc_HPt_stack_5->SetBinError(13,1.25268);
   VbbHcc_HPt_stack_5->SetBinError(14,1.108745);
   VbbHcc_HPt_stack_5->SetBinError(15,0.954851);
   VbbHcc_HPt_stack_5->SetBinError(16,0.8323794);
   VbbHcc_HPt_stack_5->SetBinError(17,0.5899019);
   VbbHcc_HPt_stack_5->SetBinError(18,0.5313711);
   VbbHcc_HPt_stack_5->SetBinError(19,0.5104685);
   VbbHcc_HPt_stack_5->SetBinError(20,0.3756145);
   VbbHcc_HPt_stack_5->SetBinError(21,0.3433605);
   VbbHcc_HPt_stack_5->SetBinError(22,0.412546);
   VbbHcc_HPt_stack_5->SetBinError(23,0.6087634);
   VbbHcc_HPt_stack_5->SetBinError(24,0.2321133);
   VbbHcc_HPt_stack_5->SetBinError(25,0.02473102);
   VbbHcc_HPt_stack_5->SetBinError(26,0.001565734);
   VbbHcc_HPt_stack_5->SetBinError(27,0.001249954);
   VbbHcc_HPt_stack_5->SetBinError(28,0.001120273);
   VbbHcc_HPt_stack_5->SetBinError(29,0.001224197);
   VbbHcc_HPt_stack_5->SetBinError(30,0.1997527);
   VbbHcc_HPt_stack_5->SetBinError(31,0.0008442433);
   VbbHcc_HPt_stack_5->SetBinError(32,0.0005297431);
   VbbHcc_HPt_stack_5->SetBinError(33,0.1602641);
   VbbHcc_HPt_stack_5->SetBinError(34,0.000593541);
   VbbHcc_HPt_stack_5->SetBinError(35,0.0004259517);
   VbbHcc_HPt_stack_5->SetBinError(37,0.0002799611);
   VbbHcc_HPt_stack_5->SetBinError(38,0.000287455);
   VbbHcc_HPt_stack_5->SetBinError(39,0.0002358203);
   VbbHcc_HPt_stack_5->SetBinError(40,0.0003860338);
   VbbHcc_HPt_stack_5->SetEntries(10641);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_HPt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_5->SetLineColor(ci);
   VbbHcc_HPt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_5,"");
   
   TH1D *VbbHcc_HPt_stack_6 = new TH1D("VbbHcc_HPt_stack_6","",40,0,2000);
   VbbHcc_HPt_stack_6->SetBinContent(1,2.772158);
   VbbHcc_HPt_stack_6->SetBinContent(2,10.28321);
   VbbHcc_HPt_stack_6->SetBinContent(3,9.094112);
   VbbHcc_HPt_stack_6->SetBinContent(4,6.215247);
   VbbHcc_HPt_stack_6->SetBinContent(5,1.563033);
   VbbHcc_HPt_stack_6->SetBinContent(6,1.655123);
   VbbHcc_HPt_stack_6->SetBinContent(7,1.530643);
   VbbHcc_HPt_stack_6->SetBinContent(8,0.471216);
   VbbHcc_HPt_stack_6->SetBinContent(15,0.3476019);
   VbbHcc_HPt_stack_6->SetBinContent(16,0.3126157);
   VbbHcc_HPt_stack_6->SetBinError(1,1.005776);
   VbbHcc_HPt_stack_6->SetBinError(2,1.836266);
   VbbHcc_HPt_stack_6->SetBinError(3,1.809844);
   VbbHcc_HPt_stack_6->SetBinError(4,1.49227);
   VbbHcc_HPt_stack_6->SetBinError(5,0.7316583);
   VbbHcc_HPt_stack_6->SetBinError(6,0.7693632);
   VbbHcc_HPt_stack_6->SetBinError(7,0.700696);
   VbbHcc_HPt_stack_6->SetBinError(8,0.3369244);
   VbbHcc_HPt_stack_6->SetBinError(15,0.3476019);
   VbbHcc_HPt_stack_6->SetBinError(16,0.3126157);
   VbbHcc_HPt_stack_6->SetEntries(105);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_HPt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_6->SetLineColor(ci);
   VbbHcc_HPt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_6,"");
   
   TH1D *VbbHcc_HPt_stack_7 = new TH1D("VbbHcc_HPt_stack_7","",40,0,2000);
   VbbHcc_HPt_stack_7->SetBinContent(1,8.292755);
   VbbHcc_HPt_stack_7->SetBinContent(2,28.8538);
   VbbHcc_HPt_stack_7->SetBinContent(3,28.40684);
   VbbHcc_HPt_stack_7->SetBinContent(4,14.36246);
   VbbHcc_HPt_stack_7->SetBinContent(5,7.300923);
   VbbHcc_HPt_stack_7->SetBinContent(6,5.48131);
   VbbHcc_HPt_stack_7->SetBinContent(7,3.342171);
   VbbHcc_HPt_stack_7->SetBinContent(8,2.474647);
   VbbHcc_HPt_stack_7->SetBinContent(9,1.995382);
   VbbHcc_HPt_stack_7->SetBinContent(10,1.125054);
   VbbHcc_HPt_stack_7->SetBinContent(14,0.2242351);
   VbbHcc_HPt_stack_7->SetBinError(1,1.426674);
   VbbHcc_HPt_stack_7->SetBinError(2,2.71108);
   VbbHcc_HPt_stack_7->SetBinError(3,2.681189);
   VbbHcc_HPt_stack_7->SetBinError(4,1.857232);
   VbbHcc_HPt_stack_7->SetBinError(5,1.361847);
   VbbHcc_HPt_stack_7->SetBinError(6,1.165015);
   VbbHcc_HPt_stack_7->SetBinError(7,0.9101701);
   VbbHcc_HPt_stack_7->SetBinError(8,0.79045);
   VbbHcc_HPt_stack_7->SetBinError(9,0.6773721);
   VbbHcc_HPt_stack_7->SetBinError(10,0.5067989);
   VbbHcc_HPt_stack_7->SetBinError(14,0.2242351);
   VbbHcc_HPt_stack_7->SetEntries(427);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_HPt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_7->SetLineColor(ci);
   VbbHcc_HPt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_7,"");
   
   TH1D *VbbHcc_HPt_stack_8 = new TH1D("VbbHcc_HPt_stack_8","",40,0,2000);
   VbbHcc_HPt_stack_8->SetBinContent(1,47.18631);
   VbbHcc_HPt_stack_8->SetBinContent(2,209.5768);
   VbbHcc_HPt_stack_8->SetBinContent(3,96.47416);
   VbbHcc_HPt_stack_8->SetBinContent(4,47.0569);
   VbbHcc_HPt_stack_8->SetBinContent(5,20.48193);
   VbbHcc_HPt_stack_8->SetBinContent(6,10.29673);
   VbbHcc_HPt_stack_8->SetBinContent(7,6.949227);
   VbbHcc_HPt_stack_8->SetBinContent(8,2.773476);
   VbbHcc_HPt_stack_8->SetBinContent(9,0.7329239);
   VbbHcc_HPt_stack_8->SetBinContent(10,0.2887973);
   VbbHcc_HPt_stack_8->SetBinContent(11,0.6016476);
   VbbHcc_HPt_stack_8->SetBinContent(12,0.2293122);
   VbbHcc_HPt_stack_8->SetBinContent(17,0.2399952);
   VbbHcc_HPt_stack_8->SetBinError(1,3.408446);
   VbbHcc_HPt_stack_8->SetBinError(2,8.089508);
   VbbHcc_HPt_stack_8->SetBinError(3,4.872427);
   VbbHcc_HPt_stack_8->SetBinError(4,3.44124);
   VbbHcc_HPt_stack_8->SetBinError(5,2.217536);
   VbbHcc_HPt_stack_8->SetBinError(6,1.573846);
   VbbHcc_HPt_stack_8->SetBinError(7,1.279289);
   VbbHcc_HPt_stack_8->SetBinError(8,0.816609);
   VbbHcc_HPt_stack_8->SetBinError(9,0.4266475);
   VbbHcc_HPt_stack_8->SetBinError(10,0.2887973);
   VbbHcc_HPt_stack_8->SetBinError(11,0.3514795);
   VbbHcc_HPt_stack_8->SetBinError(12,0.2293122);
   VbbHcc_HPt_stack_8->SetBinError(17,0.2399952);
   VbbHcc_HPt_stack_8->SetEntries(1875);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_HPt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_8->SetLineColor(ci);
   VbbHcc_HPt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_8,"");
   
   TH1D *VbbHcc_HPt_stack_9 = new TH1D("VbbHcc_HPt_stack_9","",40,0,2000);
   VbbHcc_HPt_stack_9->SetBinContent(1,27.00123);
   VbbHcc_HPt_stack_9->SetBinContent(2,120.1827);
   VbbHcc_HPt_stack_9->SetBinContent(3,66.52391);
   VbbHcc_HPt_stack_9->SetBinContent(4,31.45179);
   VbbHcc_HPt_stack_9->SetBinContent(5,17.1525);
   VbbHcc_HPt_stack_9->SetBinContent(6,9.211537);
   VbbHcc_HPt_stack_9->SetBinContent(7,5.090941);
   VbbHcc_HPt_stack_9->SetBinContent(8,2.891356);
   VbbHcc_HPt_stack_9->SetBinContent(9,1.39871);
   VbbHcc_HPt_stack_9->SetBinContent(10,0.5215457);
   VbbHcc_HPt_stack_9->SetBinContent(11,0.3090976);
   VbbHcc_HPt_stack_9->SetBinContent(12,0.1214608);
   VbbHcc_HPt_stack_9->SetBinContent(13,0.05122967);
   VbbHcc_HPt_stack_9->SetBinContent(14,0.03870531);
   VbbHcc_HPt_stack_9->SetBinContent(15,0.01392153);
   VbbHcc_HPt_stack_9->SetBinContent(16,0.01265461);
   VbbHcc_HPt_stack_9->SetBinContent(17,0.00485292);
   VbbHcc_HPt_stack_9->SetBinContent(18,0.00320311);
   VbbHcc_HPt_stack_9->SetBinContent(19,0.002971343);
   VbbHcc_HPt_stack_9->SetBinContent(20,0.00663356);
   VbbHcc_HPt_stack_9->SetBinContent(23,0.002510097);
   VbbHcc_HPt_stack_9->SetBinError(1,0.2843392);
   VbbHcc_HPt_stack_9->SetBinError(2,0.6193988);
   VbbHcc_HPt_stack_9->SetBinError(3,0.4550191);
   VbbHcc_HPt_stack_9->SetBinError(4,0.3285928);
   VbbHcc_HPt_stack_9->SetBinError(5,0.2351522);
   VbbHcc_HPt_stack_9->SetBinError(6,0.2247609);
   VbbHcc_HPt_stack_9->SetBinError(7,0.1279088);
   VbbHcc_HPt_stack_9->SetBinError(8,0.09484698);
   VbbHcc_HPt_stack_9->SetBinError(9,0.07250617);
   VbbHcc_HPt_stack_9->SetBinError(10,0.03790885);
   VbbHcc_HPt_stack_9->SetBinError(11,0.03998158);
   VbbHcc_HPt_stack_9->SetBinError(12,0.01835478);
   VbbHcc_HPt_stack_9->SetBinError(13,0.01130703);
   VbbHcc_HPt_stack_9->SetBinError(14,0.009835083);
   VbbHcc_HPt_stack_9->SetBinError(15,0.006307381);
   VbbHcc_HPt_stack_9->SetBinError(16,0.005466393);
   VbbHcc_HPt_stack_9->SetBinError(17,0.003431635);
   VbbHcc_HPt_stack_9->SetBinError(18,0.00320311);
   VbbHcc_HPt_stack_9->SetBinError(19,0.002971343);
   VbbHcc_HPt_stack_9->SetBinError(20,0.003843132);
   VbbHcc_HPt_stack_9->SetBinError(23,0.002510097);
   VbbHcc_HPt_stack_9->SetEntries(111628);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_HPt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_9->SetLineColor(ci);
   VbbHcc_HPt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_9,"");
   
   TH1D *VbbHcc_HPt_stack_10 = new TH1D("VbbHcc_HPt_stack_10","",40,0,2000);
   VbbHcc_HPt_stack_10->SetBinContent(1,3.628791);
   VbbHcc_HPt_stack_10->SetBinContent(2,13.87191);
   VbbHcc_HPt_stack_10->SetBinContent(3,12.8419);
   VbbHcc_HPt_stack_10->SetBinContent(4,7.81921);
   VbbHcc_HPt_stack_10->SetBinContent(5,4.087033);
   VbbHcc_HPt_stack_10->SetBinContent(6,2.025779);
   VbbHcc_HPt_stack_10->SetBinContent(7,1.047268);
   VbbHcc_HPt_stack_10->SetBinContent(8,0.5151739);
   VbbHcc_HPt_stack_10->SetBinContent(9,0.2715302);
   VbbHcc_HPt_stack_10->SetBinContent(10,0.1425591);
   VbbHcc_HPt_stack_10->SetBinContent(11,0.09003932);
   VbbHcc_HPt_stack_10->SetBinContent(12,0.05340703);
   VbbHcc_HPt_stack_10->SetBinContent(13,0.03694606);
   VbbHcc_HPt_stack_10->SetBinContent(14,0.02420854);
   VbbHcc_HPt_stack_10->SetBinContent(15,0.01723813);
   VbbHcc_HPt_stack_10->SetBinContent(16,0.005487199);
   VbbHcc_HPt_stack_10->SetBinContent(17,0.003670684);
   VbbHcc_HPt_stack_10->SetBinContent(18,0.004585402);
   VbbHcc_HPt_stack_10->SetBinContent(19,0.004954541);
   VbbHcc_HPt_stack_10->SetBinContent(20,0.001900648);
   VbbHcc_HPt_stack_10->SetBinContent(21,0.003197806);
   VbbHcc_HPt_stack_10->SetBinContent(22,0.002017122);
   VbbHcc_HPt_stack_10->SetBinContent(23,0.0006414921);
   VbbHcc_HPt_stack_10->SetBinContent(24,0.000625931);
   VbbHcc_HPt_stack_10->SetBinContent(26,0.0007200141);
   VbbHcc_HPt_stack_10->SetBinError(1,0.04836982);
   VbbHcc_HPt_stack_10->SetBinError(2,0.09474374);
   VbbHcc_HPt_stack_10->SetBinError(3,0.09114263);
   VbbHcc_HPt_stack_10->SetBinError(4,0.07107349);
   VbbHcc_HPt_stack_10->SetBinError(5,0.05129043);
   VbbHcc_HPt_stack_10->SetBinError(6,0.03609822);
   VbbHcc_HPt_stack_10->SetBinError(7,0.02596336);
   VbbHcc_HPt_stack_10->SetBinError(8,0.01822401);
   VbbHcc_HPt_stack_10->SetBinError(9,0.01320204);
   VbbHcc_HPt_stack_10->SetBinError(10,0.009516204);
   VbbHcc_HPt_stack_10->SetBinError(11,0.007594489);
   VbbHcc_HPt_stack_10->SetBinError(12,0.005862861);
   VbbHcc_HPt_stack_10->SetBinError(13,0.004879052);
   VbbHcc_HPt_stack_10->SetBinError(14,0.003880524);
   VbbHcc_HPt_stack_10->SetBinError(15,0.003343702);
   VbbHcc_HPt_stack_10->SetBinError(16,0.001839121);
   VbbHcc_HPt_stack_10->SetBinError(17,0.001507826);
   VbbHcc_HPt_stack_10->SetBinError(18,0.001736668);
   VbbHcc_HPt_stack_10->SetBinError(19,0.00175688);
   VbbHcc_HPt_stack_10->SetBinError(20,0.001097598);
   VbbHcc_HPt_stack_10->SetBinError(21,0.001433315);
   VbbHcc_HPt_stack_10->SetBinError(22,0.001165772);
   VbbHcc_HPt_stack_10->SetBinError(23,0.0006414921);
   VbbHcc_HPt_stack_10->SetBinError(24,0.000625931);
   VbbHcc_HPt_stack_10->SetBinError(26,0.0007200141);
   VbbHcc_HPt_stack_10->SetEntries(72910);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_HPt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_10->SetLineColor(ci);
   VbbHcc_HPt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_10,"");
   
   TH1D *VbbHcc_HPt_stack_11 = new TH1D("VbbHcc_HPt_stack_11","",40,0,2000);
   VbbHcc_HPt_stack_11->SetBinContent(1,0.5012312);
   VbbHcc_HPt_stack_11->SetBinContent(2,2.307231);
   VbbHcc_HPt_stack_11->SetBinContent(3,1.938107);
   VbbHcc_HPt_stack_11->SetBinContent(4,1.172798);
   VbbHcc_HPt_stack_11->SetBinContent(5,0.5880099);
   VbbHcc_HPt_stack_11->SetBinContent(6,0.3372256);
   VbbHcc_HPt_stack_11->SetBinContent(7,0.191634);
   VbbHcc_HPt_stack_11->SetBinContent(8,0.08443193);
   VbbHcc_HPt_stack_11->SetBinContent(9,0.0460352);
   VbbHcc_HPt_stack_11->SetBinContent(10,0.0167164);
   VbbHcc_HPt_stack_11->SetBinContent(11,0.03390747);
   VbbHcc_HPt_stack_11->SetBinContent(12,0.0140002);
   VbbHcc_HPt_stack_11->SetBinContent(13,0.002503512);
   VbbHcc_HPt_stack_11->SetBinContent(14,0.004854911);
   VbbHcc_HPt_stack_11->SetBinContent(15,0.002512861);
   VbbHcc_HPt_stack_11->SetBinError(1,0.036137);
   VbbHcc_HPt_stack_11->SetBinError(2,0.07855401);
   VbbHcc_HPt_stack_11->SetBinError(3,0.07194061);
   VbbHcc_HPt_stack_11->SetBinError(4,0.05550819);
   VbbHcc_HPt_stack_11->SetBinError(5,0.03916351);
   VbbHcc_HPt_stack_11->SetBinError(6,0.02961689);
   VbbHcc_HPt_stack_11->SetBinError(7,0.02267082);
   VbbHcc_HPt_stack_11->SetBinError(8,0.01424022);
   VbbHcc_HPt_stack_11->SetBinError(9,0.01064277);
   VbbHcc_HPt_stack_11->SetBinError(10,0.006426709);
   VbbHcc_HPt_stack_11->SetBinError(11,0.009268029);
   VbbHcc_HPt_stack_11->SetBinError(12,0.005737152);
   VbbHcc_HPt_stack_11->SetBinError(13,0.002503512);
   VbbHcc_HPt_stack_11->SetBinError(14,0.003433056);
   VbbHcc_HPt_stack_11->SetBinError(15,0.002512861);
   VbbHcc_HPt_stack_11->SetEntries(3167);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_HPt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_11->SetLineColor(ci);
   VbbHcc_HPt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_11,"");
   
   TH1D *VbbHcc_HPt_stack_12 = new TH1D("VbbHcc_HPt_stack_12","",40,0,2000);
   VbbHcc_HPt_stack_12->SetBinContent(1,0.1467546);
   VbbHcc_HPt_stack_12->SetBinContent(2,0.5886503);
   VbbHcc_HPt_stack_12->SetBinContent(3,0.8081372);
   VbbHcc_HPt_stack_12->SetBinContent(4,0.577192);
   VbbHcc_HPt_stack_12->SetBinContent(5,0.2976511);
   VbbHcc_HPt_stack_12->SetBinContent(6,0.1562951);
   VbbHcc_HPt_stack_12->SetBinContent(7,0.07856602);
   VbbHcc_HPt_stack_12->SetBinContent(8,0.05072735);
   VbbHcc_HPt_stack_12->SetBinContent(9,0.02300677);
   VbbHcc_HPt_stack_12->SetBinContent(10,0.01743131);
   VbbHcc_HPt_stack_12->SetBinContent(11,0.008398824);
   VbbHcc_HPt_stack_12->SetBinContent(12,0.009333589);
   VbbHcc_HPt_stack_12->SetBinContent(13,0.003163243);
   VbbHcc_HPt_stack_12->SetBinContent(14,0.004375412);
   VbbHcc_HPt_stack_12->SetBinContent(15,0.001971738);
   VbbHcc_HPt_stack_12->SetBinContent(16,0.002409685);
   VbbHcc_HPt_stack_12->SetBinContent(17,0.001814755);
   VbbHcc_HPt_stack_12->SetBinContent(18,0.001392434);
   VbbHcc_HPt_stack_12->SetBinContent(19,0.0006539382);
   VbbHcc_HPt_stack_12->SetBinContent(20,0.001410014);
   VbbHcc_HPt_stack_12->SetBinContent(21,0.0006207072);
   VbbHcc_HPt_stack_12->SetBinContent(23,0.0003459241);
   VbbHcc_HPt_stack_12->SetBinContent(24,0.0002260166);
   VbbHcc_HPt_stack_12->SetBinContent(25,0.0003200774);
   VbbHcc_HPt_stack_12->SetBinContent(26,0.000337118);
   VbbHcc_HPt_stack_12->SetBinContent(30,0.0001638253);
   VbbHcc_HPt_stack_12->SetBinError(1,0.006961325);
   VbbHcc_HPt_stack_12->SetBinError(2,0.01410761);
   VbbHcc_HPt_stack_12->SetBinError(3,0.01629912);
   VbbHcc_HPt_stack_12->SetBinError(4,0.0142993);
   VbbHcc_HPt_stack_12->SetBinError(5,0.009822244);
   VbbHcc_HPt_stack_12->SetBinError(6,0.007144361);
   VbbHcc_HPt_stack_12->SetBinError(7,0.005035807);
   VbbHcc_HPt_stack_12->SetBinError(8,0.004287001);
   VbbHcc_HPt_stack_12->SetBinError(9,0.002679806);
   VbbHcc_HPt_stack_12->SetBinError(10,0.00242263);
   VbbHcc_HPt_stack_12->SetBinError(11,0.001637361);
   VbbHcc_HPt_stack_12->SetBinError(12,0.001813563);
   VbbHcc_HPt_stack_12->SetBinError(13,0.001012753);
   VbbHcc_HPt_stack_12->SetBinError(14,0.001225384);
   VbbHcc_HPt_stack_12->SetBinError(15,0.0008283655);
   VbbHcc_HPt_stack_12->SetBinError(16,0.0008238479);
   VbbHcc_HPt_stack_12->SetBinError(17,0.0007445037);
   VbbHcc_HPt_stack_12->SetBinError(18,0.0007089309);
   VbbHcc_HPt_stack_12->SetBinError(19,0.0004624315);
   VbbHcc_HPt_stack_12->SetBinError(20,0.0007112252);
   VbbHcc_HPt_stack_12->SetBinError(21,0.000438921);
   VbbHcc_HPt_stack_12->SetBinError(23,0.0003459241);
   VbbHcc_HPt_stack_12->SetBinError(24,0.0002260166);
   VbbHcc_HPt_stack_12->SetBinError(25,0.0003200774);
   VbbHcc_HPt_stack_12->SetBinError(26,0.000337118);
   VbbHcc_HPt_stack_12->SetBinError(30,0.0001638253);
   VbbHcc_HPt_stack_12->SetEntries(9458);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_HPt_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt_stack_12->SetLineColor(ci);
   VbbHcc_HPt_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HPt_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_HPt__29 = new TH1D("VbbHcc_HPt__29","",40,0,2000);
   VbbHcc_HPt__29->SetBinContent(1,39680);
   VbbHcc_HPt__29->SetBinContent(2,132286);
   VbbHcc_HPt__29->SetBinContent(3,175086);
   VbbHcc_HPt__29->SetBinContent(4,146807);
   VbbHcc_HPt__29->SetBinContent(5,91498);
   VbbHcc_HPt__29->SetBinContent(6,47728);
   VbbHcc_HPt__29->SetBinContent(7,25690);
   VbbHcc_HPt__29->SetBinContent(8,14725);
   VbbHcc_HPt__29->SetBinContent(9,8384);
   VbbHcc_HPt__29->SetBinContent(10,4706);
   VbbHcc_HPt__29->SetBinContent(11,2761);
   VbbHcc_HPt__29->SetBinContent(12,1630);
   VbbHcc_HPt__29->SetBinContent(13,1012);
   VbbHcc_HPt__29->SetBinContent(14,603);
   VbbHcc_HPt__29->SetBinContent(15,405);
   VbbHcc_HPt__29->SetBinContent(16,282);
   VbbHcc_HPt__29->SetBinContent(17,159);
   VbbHcc_HPt__29->SetBinContent(18,103);
   VbbHcc_HPt__29->SetBinContent(19,65);
   VbbHcc_HPt__29->SetBinContent(20,47);
   VbbHcc_HPt__29->SetBinContent(21,35);
   VbbHcc_HPt__29->SetBinContent(22,34);
   VbbHcc_HPt__29->SetBinContent(23,18);
   VbbHcc_HPt__29->SetBinContent(24,15);
   VbbHcc_HPt__29->SetBinContent(25,5);
   VbbHcc_HPt__29->SetBinContent(26,10);
   VbbHcc_HPt__29->SetBinContent(27,1);
   VbbHcc_HPt__29->SetBinContent(28,1);
   VbbHcc_HPt__29->SetBinContent(29,2);
   VbbHcc_HPt__29->SetBinContent(30,2);
   VbbHcc_HPt__29->SetBinContent(31,1);
   VbbHcc_HPt__29->SetBinContent(33,1);
   VbbHcc_HPt__29->SetBinContent(38,1);
   VbbHcc_HPt__29->SetEntries(693783);

   ci = TColor::GetColor("#000099");
   VbbHcc_HPt__29->SetLineColor(ci);
   VbbHcc_HPt__29->SetLineWidth(2);
   VbbHcc_HPt__29->SetMarkerStyle(20);
   VbbHcc_HPt__29->SetMarkerSize(1.2);
   VbbHcc_HPt__29->GetXaxis()->SetRange(1,2000);
   VbbHcc_HPt__29->GetXaxis()->SetLabelFont(42);
   VbbHcc_HPt__29->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HPt__29->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HPt__29->GetXaxis()->SetTitleFont(42);
   VbbHcc_HPt__29->GetYaxis()->SetLabelFont(42);
   VbbHcc_HPt__29->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HPt__29->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HPt__29->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HPt__29->GetYaxis()->SetTitleFont(42);
   VbbHcc_HPt__29->GetZaxis()->SetLabelFont(42);
   VbbHcc_HPt__29->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HPt__29->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HPt__29->GetZaxis()->SetTitleFont(42);
   VbbHcc_HPt__29->Draw("same E");
   
   Double_t Graph_from_VbbHcc_HPt_fx1029[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_HPt_fy1029[40] = {
   125883.5,
   485612.3,
   547756.2,
   306592.5,
   134423.3,
   49245.71,
   20400.69,
   8918.962,
   4569.345,
   2568.122,
   1567.416,
   1051.558,
   565.6209,
   331.726,
   220.644,
   141.6284,
   89.91122,
   61.17759,
   42.97222,
   35.80569,
   18.57414,
   13.47086,
   11.8797,
   6.410114,
   4.269762,
   3.079834,
   2.018577,
   2.015273,
   0.3958083,
   1.237148,
   0.6006827,
   0.7376516,
   0.5321781,
   0.1123319,
   0.0005946276,
   0,
   0.05057505,
   0.000287455,
   0.0002358203,
   0.0003860338};
   Double_t Graph_from_VbbHcc_HPt_fex1029[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_HPt_fey1029[40] = {
   5818.222,
   14198,
   13484.92,
   9471.949,
   5081.322,
   1611.1,
   626.1827,
   293.9686,
   170.3491,
   111.1666,
   77.89352,
   62.28785,
   39.48736,
   25.40211,
   16.60347,
   12.23506,
   5.696442,
   4.418228,
   3.857765,
   3.381807,
   1.84265,
   1.725708,
   1.552309,
   1.176217,
   0.9656437,
   0.7264006,
   0.6467502,
   0.590551,
   0.1806242,
   0.5222894,
   0.3316477,
   0.4268123,
   0.3046715,
   0.1113274,
   0.0004259517,
   0,
   0.05029587,
   0.000287455,
   0.0002358203,
   0.0003860338};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_HPt_fx1029,Graph_from_VbbHcc_HPt_fy1029,Graph_from_VbbHcc_HPt_fex1029,Graph_from_VbbHcc_HPt_fey1029);
   gre->SetName("Graph_from_VbbHcc_HPt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_HPt1029 = new TH1F("Graph_Graph_from_VbbHcc_HPt1029","",100,0,2200);
   Graph_Graph_from_VbbHcc_HPt1029->SetMinimum(-56124.11);
   Graph_Graph_from_VbbHcc_HPt1029->SetMaximum(617365.2);
   Graph_Graph_from_VbbHcc_HPt1029->SetDirectory(0);
   Graph_Graph_from_VbbHcc_HPt1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_HPt1029->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_HPt1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HPt1029->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1029->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HPt1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HPt1029->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1029->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1029->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_HPt1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HPt1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HPt1029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HPt1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_HPt1029);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_HPt","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HPt_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HPt_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HPt_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HPt_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HPt_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HPt_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HPt_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HPt_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HPt_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HPt_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HPt_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HPt_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_HPt","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   HPt_VbbHcc_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__30 = new TH1D("data_mc_ratio__30","",40,0,2000);
   data_mc_ratio__30->SetBinContent(1,0.315212);
   data_mc_ratio__30->SetBinContent(2,0.2724107);
   data_mc_ratio__30->SetBinContent(3,0.3196422);
   data_mc_ratio__30->SetBinContent(4,0.4788342);
   data_mc_ratio__30->SetBinContent(5,0.6806708);
   data_mc_ratio__30->SetBinContent(6,0.9691808);
   data_mc_ratio__30->SetBinContent(7,1.259271);
   data_mc_ratio__30->SetBinContent(8,1.650977);
   data_mc_ratio__30->SetBinContent(9,1.834836);
   data_mc_ratio__30->SetBinContent(10,1.832467);
   data_mc_ratio__30->SetBinContent(11,1.761498);
   data_mc_ratio__30->SetBinContent(12,1.550081);
   data_mc_ratio__30->SetBinContent(13,1.789184);
   data_mc_ratio__30->SetBinContent(14,1.817765);
   data_mc_ratio__30->SetBinContent(15,1.835536);
   data_mc_ratio__30->SetBinContent(16,1.991127);
   data_mc_ratio__30->SetBinContent(17,1.768411);
   data_mc_ratio__30->SetBinContent(18,1.683623);
   data_mc_ratio__30->SetBinContent(19,1.512605);
   data_mc_ratio__30->SetBinContent(20,1.312641);
   data_mc_ratio__30->SetBinContent(21,1.884341);
   data_mc_ratio__30->SetBinContent(22,2.523966);
   data_mc_ratio__30->SetBinContent(23,1.51519);
   data_mc_ratio__30->SetBinContent(24,2.340052);
   data_mc_ratio__30->SetBinContent(25,1.171025);
   data_mc_ratio__30->SetBinContent(26,3.246928);
   data_mc_ratio__30->SetBinContent(27,0.4953986);
   data_mc_ratio__30->SetBinContent(28,0.4962106);
   data_mc_ratio__30->SetBinContent(29,5.052952);
   data_mc_ratio__30->SetBinContent(30,1.616622);
   data_mc_ratio__30->SetBinContent(31,1.664772);
   data_mc_ratio__30->SetBinContent(33,1.87907);
   data_mc_ratio__30->SetBinContent(38,3478.806);
   data_mc_ratio__30->SetBinError(1,0.001582403);
   data_mc_ratio__30->SetBinError(2,0.0007489749);
   data_mc_ratio__30->SetBinError(3,0.0007639034);
   data_mc_ratio__30->SetBinError(4,0.001249717);
   data_mc_ratio__30->SetBinError(5,0.002250253);
   data_mc_ratio__30->SetBinError(6,0.004436272);
   data_mc_ratio__30->SetBinError(7,0.007856647);
   data_mc_ratio__30->SetBinError(8,0.01360546);
   data_mc_ratio__30->SetBinError(9,0.0200388);
   data_mc_ratio__30->SetBinError(10,0.02671224);
   data_mc_ratio__30->SetBinError(11,0.03352347);
   data_mc_ratio__30->SetBinError(12,0.03839376);
   data_mc_ratio__30->SetBinError(13,0.05624253);
   data_mc_ratio__30->SetBinError(14,0.07402512);
   data_mc_ratio__30->SetBinError(15,0.09120852);
   data_mc_ratio__30->SetBinError(16,0.1185699);
   data_mc_ratio__30->SetBinError(17,0.1402441);
   data_mc_ratio__30->SetBinError(18,0.1658923);
   data_mc_ratio__30->SetBinError(19,0.1876156);
   data_mc_ratio__30->SetBinError(20,0.1914683);
   data_mc_ratio__30->SetBinError(21,0.3185117);
   data_mc_ratio__30->SetBinError(22,0.4328566);
   data_mc_ratio__30->SetBinError(23,0.3571338);
   data_mc_ratio__30->SetBinError(24,0.6041989);
   data_mc_ratio__30->SetBinError(25,0.5236985);
   data_mc_ratio__30->SetBinError(26,1.026769);
   data_mc_ratio__30->SetBinError(27,0.4953986);
   data_mc_ratio__30->SetBinError(28,0.4962106);
   data_mc_ratio__30->SetBinError(29,3.572976);
   data_mc_ratio__30->SetBinError(30,1.143124);
   data_mc_ratio__30->SetBinError(31,1.664772);
   data_mc_ratio__30->SetBinError(33,1.87907);
   data_mc_ratio__30->SetBinError(38,3478.806);
   data_mc_ratio__30->SetMinimum(0.4);
   data_mc_ratio__30->SetMaximum(1.6);
   data_mc_ratio__30->SetEntries(0.5146277);
   data_mc_ratio__30->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__30->SetLineColor(ci);
   data_mc_ratio__30->SetLineWidth(2);
   data_mc_ratio__30->SetMarkerStyle(20);
   data_mc_ratio__30->SetMarkerSize(1.2);
   data_mc_ratio__30->GetXaxis()->SetTitle("H p_{T} [GeV]");
   data_mc_ratio__30->GetXaxis()->SetRange(7,30);
   data_mc_ratio__30->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__30->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__30->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__30->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__30->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__30->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__30->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__30->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__30->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__30->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__30->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__30->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__30->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__30->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__30->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__30->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__30->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1030[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1030[40] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1030[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1030[40] = {
   0.04621909,
   0.02923731,
   0.02461848,
   0.03089426,
   0.03780091,
   0.03271554,
   0.03069419,
   0.03295996,
   0.03728085,
   0.04328711,
   0.04969551,
   0.05923389,
   0.06981242,
   0.07657556,
   0.07525004,
   0.08638849,
   0.0633563,
   0.07221971,
   0.08977346,
   0.09444889,
   0.09920517,
   0.1281067,
   0.1306691,
   0.183494,
   0.2261587,
   0.2358571,
   0.3203991,
   0.2930377,
   0.4563427,
   0.4221722,
   0.5521179,
   0.5786095,
   0.5724992,
   0.9910576,
   0.7163335,
   0,
   0.9944798,
   1,
   1,
   1};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1030,Graph_from_mc_statistical_error_fy1030,Graph_from_mc_statistical_error_fex1030,Graph_from_mc_statistical_error_fey1030);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1030 = new TH1F("Graph_Graph_from_mc_statistical_error1030","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1030->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1030->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1030->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1030->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1030);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   HPt_VbbHcc_18->cd();
   HPt_VbbHcc_18->Modified();
   HPt_VbbHcc_18->cd();
   HPt_VbbHcc_18->SetSelected(HPt_VbbHcc_18);
}
