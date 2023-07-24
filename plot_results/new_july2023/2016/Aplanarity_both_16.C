void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Mon Jul 24 10:12:22 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(0,0,1,1);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-5742.626,1.052419,5736893);
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
   st->SetMaximum(4916790);
   
   TH1F *st_stack_253 = new TH1F("st_stack_253","",50,0,1);
   st_stack_253->SetMinimum(0.01);
   st_stack_253->SetMaximum(5162630);
   st_stack_253->SetDirectory(0);
   st_stack_253->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_253->SetLineColor(ci);
   st_stack_253->GetXaxis()->SetRange(1,50);
   st_stack_253->GetXaxis()->SetLabelFont(42);
   st_stack_253->GetXaxis()->SetLabelSize(0.035);
   st_stack_253->GetXaxis()->SetTitleSize(0.035);
   st_stack_253->GetXaxis()->SetTitleFont(42);
   st_stack_253->GetYaxis()->SetTitle("Events/0.02");
   st_stack_253->GetYaxis()->SetLabelFont(42);
   st_stack_253->GetYaxis()->SetLabelSize(0.05);
   st_stack_253->GetYaxis()->SetTitleSize(0.057);
   st_stack_253->GetYaxis()->SetTitleOffset(1.2);
   st_stack_253->GetYaxis()->SetTitleFont(42);
   st_stack_253->GetZaxis()->SetLabelFont(42);
   st_stack_253->GetZaxis()->SetLabelSize(0.035);
   st_stack_253->GetZaxis()->SetTitleSize(0.035);
   st_stack_253->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_253);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,1863839);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,523094.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,192594.2);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,97557.56);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,63452.34);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,31115.38);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,25172.89);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,14782.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,9372.449);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,6789.184);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,4021.404);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,3277.62);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,3249.18);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,1760.605);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,1178.657);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,722.2639);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,416.0576);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,112.2429);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,19.37732);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,8.146095);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,32262.48);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,33446.04);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,7927.671);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,5183.215);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,4745.598);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,2340.082);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,2920.003);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,2164.786);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,1315.501);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,1176.932);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,850.0065);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,829.1324);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,876.1991);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,590.4036);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,532.7835);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,431.7018);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,242.4489);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,44.41019);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,11.64762);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,7.413752);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(182810);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,18455.48);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,4938.562);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,2208.995);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,1166.255);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,706.8714);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,429.1003);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,274.4828);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,178.5396);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,125.8375);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,81.85043);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,56.36635);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,35.05751);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,25.5775);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,14.62365);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,11.15041);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,5.388917);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,3.186629);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,2.948459);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,2.163485);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.8753315);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,0.7016558);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,0.04716519);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,56.81076);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,29.74649);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,20.17912);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,14.82074);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,11.78229);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,9.192401);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,7.416511);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,5.952207);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,5.098522);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,3.997134);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,3.368755);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,2.674898);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,2.174823);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,1.576752);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,1.417046);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.9945963);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.7147667);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.8158122);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.689553);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.3740263);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,0.4290195);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,0.04716519);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(401943);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,306938.9);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,91409.2);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,41560.74);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,22424.26);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,13368.96);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,8334.137);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,5448.261);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,3615.087);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,2452.335);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,1681.175);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,1132.144);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,759.1934);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,507.8022);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,339.8886);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,218.5281);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,141.2369);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,86.135);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,50.46403);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,27.52266);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,14.76689);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,5.291672);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,2.372595);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(23,0.4086265);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(24,0.04295345);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,143.4936);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,78.47514);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,52.97813);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,38.95478);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,30.08734);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,23.76622);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,19.21471);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,15.66116);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,12.88822);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,10.68933);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,8.773566);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,7.180701);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,5.872619);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,4.803149);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,3.864323);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,3.097395);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,2.418885);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,1.849129);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,1.36577);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.9986116);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.601969);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.4070975);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(23,0.1691556);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(24,0.04295345);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(7926175);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,14356.8);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,3530.998);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,1570.615);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,881.9626);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,510.4275);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,309.53);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,200.0289);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,137.2363);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,101.1703);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,64.94655);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,51.64451);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,26.79173);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,29.85921);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,20.17351);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,9.609211);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,5.914167);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,5.122253);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,1.029795);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(19,1.012493);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(20,0.3532852);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(21,0.152385);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(23,0.0855621);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(24,0.08144662);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,86.78997);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,48.69857);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,33.84596);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,26.80001);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,21.65672);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,16.89748);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,12.10429);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,10.29005);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,10.67236);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,7.678981);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,7.615478);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,4.839857);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,7.184447);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,5.248544);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,3.344661);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,1.903825);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,2.922246);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.3762504);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(19,0.4836588);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(20,0.1659836);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(21,0.1078524);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(23,0.0855621);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(24,0.08144662);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(171964);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,8601.994);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,1949.45);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,828.8801);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,460.2698);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,215.993);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,159.7761);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,104.2035);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,71.99554);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,46.83112);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,24.43433);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,20.44682);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,15.2381);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,7.791276);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,4.03138);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,1.73293);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(16,2.983002);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(17,6.905242);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(18,0.1591626);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(19,1.358653);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,104.8775);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,56.16812);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,35.59838);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,30.10117);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,16.3431);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,15.14476);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,12.87022);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,12.27167);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,10.84994);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,3.760928);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,7.565602);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,6.079103);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,2.054513);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,1.319395);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.4691183);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(16,1.225034);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(17,6.54907);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(18,0.1591626);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(19,1.128157);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(118385);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_6 = new TH1D("VbbHcc_both_Aplanarity_stack_6","",50,0,1);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(1,44.44378);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(2,13.97661);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(3,4.658984);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(4,2.359681);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(5,2.129978);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(6,0.8343156);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(7,0.3661182);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(8,0.2812813);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(9,0.09698894);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(10,0.1931756);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(12,0.09099472);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(15,0.09139225);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(17,0.1037721);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(1,2.006298);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(2,1.131709);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(3,0.6554347);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(4,0.4528232);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(5,0.4458436);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(6,0.2790151);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(7,0.1832242);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(8,0.1628129);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(9,0.09698894);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(10,0.1369002);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(12,0.09099472);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(15,0.09139225);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(17,0.1037721);
   VbbHcc_both_Aplanarity_stack_6->SetEntries(777);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_7 = new TH1D("VbbHcc_both_Aplanarity_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,113.772);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,27.63806);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,11.81936);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,7.216177);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,3.623566);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(6,2.431932);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(7,1.91818);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(8,0.604621);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(9,0.6046708);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(10,0.4923117);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(11,0.06696561);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(12,0.1955904);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(13,0.3239962);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(14,0.2128015);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(16,0.06696561);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(17,0.06369501);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,2.782364);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,1.374876);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,0.8999611);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.7056309);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.4992877);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(6,0.4039258);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(7,0.3612612);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(8,0.2015956);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(9,0.1965317);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(10,0.1865087);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(11,0.06696561);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(12,0.1132607);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(13,0.1450008);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(14,0.1229839);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(16,0.06696561);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(17,0.06369501);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(2557);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_8 = new TH1D("VbbHcc_both_Aplanarity_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,106.7656);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,25.21662);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,12.71422);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,7.412421);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,4.37349);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,2.603431);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,0.6151559);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,2.007375);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(10,0.3974451);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(11,0.7862253);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(12,0.1881822);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(13,0.1908088);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,4.511756);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,2.199962);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,1.567454);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,1.204612);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.9133114);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.7062013);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.3557504);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.635775);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(10,0.2811783);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(11,0.3936385);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(12,0.1881822);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(13,0.1908088);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(868);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,64.36059);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,18.26553);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,8.387078);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,4.495757);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,2.784053);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,1.804468);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,1.189617);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.7718053);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.4415727);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.3480333);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.2313169);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.1625949);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.09503342);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.06117035);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.05380236);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.0267001);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.02120152);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.01252179);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.004451508);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.3112524);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.1659112);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.1123599);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.08246363);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.06493301);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.05221482);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.04228203);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.03403805);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.02601683);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.02308242);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.0185362);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01565194);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.0121845);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.009543107);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.008985207);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.006623847);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.005672307);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.004429967);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.002570457);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(72695);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,32.3124);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,8.849909);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,4.079893);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,2.310411);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,1.373098);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.8522025);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.5774038);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.3852685);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.2565126);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.1578173);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.1188307);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.08002369);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.05440491);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.02798491);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.0213175);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.01140418);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.009729565);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.004004658);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001067026);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(20,0.0003533183);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.1110101);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.05825779);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.03958381);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.02976603);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.02299474);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.01808742);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.0149139);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.01216639);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.009958526);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.007764694);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.006761536);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.005564135);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.004541736);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.003275601);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.002876122);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.002122122);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001950966);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.001222845);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0006258658);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(20,0.0003533183);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_11 = new TH1D("VbbHcc_both_Aplanarity_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,1.563551);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.4345164);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.213029);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.1419799);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(5,0.08274516);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(6,0.06352339);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(7,0.03272717);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(8,0.02100033);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(9,0.003218024);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(11,0.01013068);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(12,0.003721862);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(13,0.009246623);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.06790227);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.03612634);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.02495262);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.02064619);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(5,0.01609308);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(6,0.01357961);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(7,0.01070111);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(8,0.00794564);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(9,0.003218024);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(11,0.005237964);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(12,0.002996799);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(13,0.005339603);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_12 = new TH1D("VbbHcc_both_Aplanarity_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.6873883);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.2105351);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.1105461);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.06100967);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.03618981);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.01899489);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.01959337);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0135183);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(9,0.005573849);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.005618617);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(11,0.004584273);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(12,0.004607023);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(13,0.001859297);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(14,0.0006360598);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(15,0.0003296168);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.01615678);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.008955497);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.006489314);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.004861562);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.003722526);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.002695748);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.002732206);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.002265298);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(9,0.001445103);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.001455947);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(11,0.0013284);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(12,0.001331809);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(13,0.0008428664);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(14,0.0004570462);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(15,0.0003296168);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(3163);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Aplanarity__505 = new TH1D("VbbHcc_both_Aplanarity__505","",50,0,1);
   VbbHcc_both_Aplanarity__505->SetBinContent(1,1089263);
   VbbHcc_both_Aplanarity__505->SetBinContent(2,250427);
   VbbHcc_both_Aplanarity__505->SetBinContent(3,107706);
   VbbHcc_both_Aplanarity__505->SetBinContent(4,57204);
   VbbHcc_both_Aplanarity__505->SetBinContent(5,33103);
   VbbHcc_both_Aplanarity__505->SetBinContent(6,20309);
   VbbHcc_both_Aplanarity__505->SetBinContent(7,13088);
   VbbHcc_both_Aplanarity__505->SetBinContent(8,8637);
   VbbHcc_both_Aplanarity__505->SetBinContent(9,5767);
   VbbHcc_both_Aplanarity__505->SetBinContent(10,3920);
   VbbHcc_both_Aplanarity__505->SetBinContent(11,2672);
   VbbHcc_both_Aplanarity__505->SetBinContent(12,1759);
   VbbHcc_both_Aplanarity__505->SetBinContent(13,1145);
   VbbHcc_both_Aplanarity__505->SetBinContent(14,795);
   VbbHcc_both_Aplanarity__505->SetBinContent(15,476);
   VbbHcc_both_Aplanarity__505->SetBinContent(16,300);
   VbbHcc_both_Aplanarity__505->SetBinContent(17,188);
   VbbHcc_both_Aplanarity__505->SetBinContent(18,131);
   VbbHcc_both_Aplanarity__505->SetBinContent(19,54);
   VbbHcc_both_Aplanarity__505->SetBinContent(20,35);
   VbbHcc_both_Aplanarity__505->SetBinContent(21,12);
   VbbHcc_both_Aplanarity__505->SetBinContent(22,7);
   VbbHcc_both_Aplanarity__505->SetBinContent(23,4);
   VbbHcc_both_Aplanarity__505->SetEntries(1597051);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity__505->SetLineColor(ci);
   VbbHcc_both_Aplanarity__505->SetLineWidth(2);
   VbbHcc_both_Aplanarity__505->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity__505->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity__505->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity__505->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__505->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__505->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__505->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__505->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__505->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__505->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__505->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity__505->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__505->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__505->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__505->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__505->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__505->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_fx1505[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fy1505[50] = {
   2212556,
   625017.5,
   238805.4,
   122514.3,
   78268.99,
   40356.53,
   31204.59,
   18789.34,
   12100.03,
   8643.185,
   5283.225,
   4114.626,
   3820.886,
   2139.625,
   1419.845,
   877.8919,
   517.6051,
   166.8609,
   51.44014,
   15.99586,
   14.29181,
   2.372595,
   0.5413537,
   0.1244001,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fex1505[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fey1505[50] = {
   32263.13,
   33446.22,
   7928.026,
   5183.54,
   4745.786,
   2340.331,
   2920.129,
   2164.911,
   1315.662,
   1177.019,
   850.1263,
   829.2043,
   876.2534,
   590.4501,
   532.8102,
   431.72,
   242.5681,
   44.45803,
   11.81162,
   1.079199,
   7.451294,
   0.4070975,
   0.1953434,
   0.09207904,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_fx1505,Graph_from_VbbHcc_both_Aplanarity_fy1505,Graph_from_VbbHcc_both_Aplanarity_fex1505,Graph_from_VbbHcc_both_Aplanarity_fey1505);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity1505 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity1505","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetMaximum(2469301);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity1505);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Aplanarity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_both_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__506 = new TH1D("data_mc_ratio__506","",50,0,1);
   data_mc_ratio__506->SetBinContent(1,0.4923099);
   data_mc_ratio__506->SetBinContent(2,0.400672);
   data_mc_ratio__506->SetBinContent(3,0.45102);
   data_mc_ratio__506->SetBinContent(4,0.4669169);
   data_mc_ratio__506->SetBinContent(5,0.4229389);
   data_mc_ratio__506->SetBinContent(6,0.5032395);
   data_mc_ratio__506->SetBinContent(7,0.4194255);
   data_mc_ratio__506->SetBinContent(8,0.4596755);
   data_mc_ratio__506->SetBinContent(9,0.4766103);
   data_mc_ratio__506->SetBinContent(10,0.4535365);
   data_mc_ratio__506->SetBinContent(11,0.5057517);
   data_mc_ratio__506->SetBinContent(12,0.4274994);
   data_mc_ratio__506->SetBinContent(13,0.2996687);
   data_mc_ratio__506->SetBinContent(14,0.3715604);
   data_mc_ratio__506->SetBinContent(15,0.3352479);
   data_mc_ratio__506->SetBinContent(16,0.3417277);
   data_mc_ratio__506->SetBinContent(17,0.3632112);
   data_mc_ratio__506->SetBinContent(18,0.7850851);
   data_mc_ratio__506->SetBinContent(19,1.049764);
   data_mc_ratio__506->SetBinContent(20,2.188067);
   data_mc_ratio__506->SetBinContent(21,0.8396419);
   data_mc_ratio__506->SetBinContent(22,2.950357);
   data_mc_ratio__506->SetBinContent(23,7.388884);
   data_mc_ratio__506->SetBinError(1,0.0004717068);
   data_mc_ratio__506->SetBinError(2,0.0008006605);
   data_mc_ratio__506->SetBinError(3,0.001374282);
   data_mc_ratio__506->SetBinError(4,0.001952209);
   data_mc_ratio__506->SetBinError(5,0.002324577);
   data_mc_ratio__506->SetBinError(6,0.003531266);
   data_mc_ratio__506->SetBinError(7,0.003666217);
   data_mc_ratio__506->SetBinError(8,0.00494618);
   data_mc_ratio__506->SetBinError(9,0.00627608);
   data_mc_ratio__506->SetBinError(10,0.007243846);
   data_mc_ratio__506->SetBinError(11,0.009784061);
   data_mc_ratio__506->SetBinError(12,0.01019301);
   data_mc_ratio__506->SetBinError(13,0.008856022);
   data_mc_ratio__506->SetBinError(14,0.01317789);
   data_mc_ratio__506->SetBinError(15,0.01536606);
   data_mc_ratio__506->SetBinError(16,0.01972966);
   data_mc_ratio__506->SetBinError(17,0.0264899);
   data_mc_ratio__506->SetBinError(18,0.0685932);
   data_mc_ratio__506->SetBinError(19,0.1428548);
   data_mc_ratio__506->SetBinError(20,0.3698508);
   data_mc_ratio__506->SetBinError(21,0.2423837);
   data_mc_ratio__506->SetBinError(22,1.11513);
   data_mc_ratio__506->SetBinError(23,3.694442);
   data_mc_ratio__506->SetMinimum(0.4);
   data_mc_ratio__506->SetMaximum(1.6);
   data_mc_ratio__506->SetEntries(21.88624);
   data_mc_ratio__506->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__506->SetLineColor(ci);
   data_mc_ratio__506->SetLineWidth(2);
   data_mc_ratio__506->SetMarkerStyle(20);
   data_mc_ratio__506->SetMarkerSize(1.2);
   data_mc_ratio__506->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__506->GetXaxis()->SetRange(1,50);
   data_mc_ratio__506->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__506->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__506->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__506->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__506->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__506->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__506->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__506->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__506->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__506->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__506->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__506->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__506->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__506->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__506->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__506->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__506->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1506[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1506[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1506[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1506[50] = {
   0.01458184,
   0.05351246,
   0.03319869,
   0.04230967,
   0.06063431,
   0.05799139,
   0.09358011,
   0.1152201,
   0.1087321,
   0.1361788,
   0.1609105,
   0.201526,
   0.2293325,
   0.2759596,
   0.3752594,
   0.491769,
   0.4686354,
   0.2664377,
   0.2296188,
   0.06746743,
   0.5213682,
   0.1715832,
   0.3608425,
   0.7401848,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1506,Graph_from_mc_statistical_error_fy1506,Graph_from_mc_statistical_error_fex1506,Graph_from_mc_statistical_error_fey1506);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1506 = new TH1F("Graph_Graph_from_mc_statistical_error1506","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1506->SetMinimum(0.1117782);
   Graph_Graph_from_mc_statistical_error1506->SetMaximum(1.888222);
   Graph_Graph_from_mc_statistical_error1506->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1506->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1506->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1506->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1506->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1506->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1506->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1506->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1506->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1506->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1506);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
