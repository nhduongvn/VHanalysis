void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug  3 12:26:22 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(0,0,1,1);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetFillStyle(4000);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-323.934,1.052419,323620.1);
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
   st->SetMaximum(277357.8);
   
   TH1F *st_stack_254 = new TH1F("st_stack_254","",50,0,1);
   st_stack_254->SetMinimum(0.01);
   st_stack_254->SetMaximum(291225.7);
   st_stack_254->SetDirectory(0);
   st_stack_254->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_254->SetLineColor(ci);
   st_stack_254->GetXaxis()->SetRange(1,50);
   st_stack_254->GetXaxis()->SetLabelFont(42);
   st_stack_254->GetXaxis()->SetLabelSize(0.035);
   st_stack_254->GetXaxis()->SetTitleSize(0.035);
   st_stack_254->GetXaxis()->SetTitleFont(42);
   st_stack_254->GetYaxis()->SetTitle("Events/0.02");
   st_stack_254->GetYaxis()->SetLabelFont(42);
   st_stack_254->GetYaxis()->SetLabelSize(0.05);
   st_stack_254->GetYaxis()->SetTitleSize(0.057);
   st_stack_254->GetYaxis()->SetTitleOffset(1.2);
   st_stack_254->GetYaxis()->SetTitleFont(42);
   st_stack_254->GetZaxis()->SetLabelFont(42);
   st_stack_254->GetZaxis()->SetLabelSize(0.035);
   st_stack_254->GetZaxis()->SetTitleSize(0.035);
   st_stack_254->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_254);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,110711.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,33838.37);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,29459.96);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,6894.402);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,20491.26);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,3251.347);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,1917.651);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1615.92);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,949.4346);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,433.7788);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,499.0974);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,357.0798);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,32.38748);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,122.0593);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,4.090463);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,44.36009);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,6.808747);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,4.090463);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,290.3847);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,4216.588);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,2531.43);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,14891.03);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,996.4432);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,14847.31);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,726.4821);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,551.409);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,545.2453);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,389.1047);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,272.1956);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,276.1002);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,271.2808);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,14.2384);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,42.65615);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,4.090463);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,31.21581);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,6.808747);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,4.090463);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,269.2187);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(10822);

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
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,629.8782);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,190.0397);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,83.84309);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,45.60185);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,34.03392);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,18.92925);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,14.00495);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,11.838);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,6.46201);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,4.357645);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,2.423748);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,1.702763);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,1.019839);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.7007938);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.4568201);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.3142877);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.09424774);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.04712387);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.2635671);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,0.04712387);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,9.817326);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,5.42195);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,3.597613);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,2.711367);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,2.391464);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,1.716505);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.466766);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,1.407459);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,1.022562);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.882102);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.5865229);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.5012568);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.4028348);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.3004265);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.2807513);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.267486);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.06664322);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.04712387);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.2635671);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,0.04712387);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(12820);

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
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,11716.9);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,3863.934);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,1885.856);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,1088.703);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,667.3671);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,454.0282);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,288.5372);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,196.9796);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,142.5152);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,97.2473);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,62.85001);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,47.35535);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,31.10034);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,21.70291);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,12.65477);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,8.750043);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,5.131482);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,3.56713);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,1.571366);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.4502646);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.1149227);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(23,0.04456635);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,27.0655);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,15.55573);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,10.8651);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,8.254077);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,6.467056);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,5.343986);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,4.253826);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,3.518299);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,2.99858);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,2.478953);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,1.983846);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,1.724131);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.403251);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.164188);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,0.8876744);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.7459133);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.5610645);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.4686929);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.314741);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.1642966);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.08328373);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(23,0.04456635);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(345543);

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
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,1512.11);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,430.5418);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,189.7988);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,118.7531);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,63.37857);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,53.30532);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,28.44735);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,20.96689);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,13.86637);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,10.65799);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,3.981589);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.318491);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,3.101888);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.363297);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,1.146694);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.1326196);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.1746112);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(19,0.1083014);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,24.67439);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,13.99424);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,8.299835);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,8.249067);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,5.287608);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,6.258686);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,3.607598);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,3.434561);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,1.861167);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,3.012561);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,0.9535356);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.9301936);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,0.9174976);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.5540636);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,0.5324735);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.09377623);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.1269889);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(19,0.1083014);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(17765);

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
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,167.805);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,47.19625);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,16.34841);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,10.02525);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,7.76644);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,3.18472);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,4.817026);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,1.339252);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.5914153);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,0.6891494);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.5832546);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,0.08120236);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,0.09281656);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.2436071);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.1624047);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(18,0.08120236);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,11.91411);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,5.079588);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,2.420714);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,2.090938);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,2.208538);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,0.8573974);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,1.756131);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.4644854);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.2561698);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.2978555);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.2787127);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,0.08120236);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.08202873);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.1406466);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.1148375);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(18,0.08120236);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(2446);

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
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(1,0.9459177);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(6,0.3153059);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(1,0.5461258);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(4,0.3153059);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(6,0.3153059);
   VbbHcc_both_Aplanarity_stack_6->SetEntries(5);

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
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,3.719133);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,1.239711);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,0.4958844);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,0.7438266);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,0.2479422);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,0.960276);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,0.5544156);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,0.3506432);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.4294485);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.2479422);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(26);

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
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,27.85482);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,9.622573);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,4.05161);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,2.025805);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,0.5064512);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,0.7596768);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,1.012902);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,0.5064512);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(10,0.2532256);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,2.655853);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,1.560987);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,1.012902);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,0.7162302);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.3581151);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.4385996);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.5064512);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.3581151);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(10,0.2532256);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(184);

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
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,28.16764);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,8.521357);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,4.065249);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,2.433981);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.544052);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,0.885084);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.5879025);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.3876281);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.2745699);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1744326);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.1372849);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.07268026);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.04360816);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.02422675);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.02261164);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.008075584);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.01292094);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.004845351);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.001615117);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.2132933);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.1173158);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.08102995);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.062699);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.0499382);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.03780892);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.03081447);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.02502128);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.02105855);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.01678479);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.01489064);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01083453);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.008392393);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.006255321);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.006043214);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.003611511);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.00456824);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.002797464);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.001615117);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(29329);

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
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,11.55852);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,3.877163);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,2.005129);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.184171);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.7338872);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.4780632);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.3225787);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.2292879);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.1426312);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.09660775);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.06136458);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.04560881);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.03151154);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.02238978);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.00746326);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.006219383);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.007048634);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.002073128);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001658502);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0008292511);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.06922757);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.04009453);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.02883362);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.02215823);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.01744386);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.01407896);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.01156501);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.009750314);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.007690158);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.006328984);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.005044137);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.004348629);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.003614622);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.003046863);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.001759107);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001605838);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001709545);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0009271309);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0008292511);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0005863691);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(50200);

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
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,0.08849406);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.03002477);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.007901256);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.009481507);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(5,0.003160502);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(7,0.003160502);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(8,0.004740753);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(10,0.003160502);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.01182552);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.006888155);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.003533549);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.003870809);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(5,0.002234813);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(7,0.002234813);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(8,0.002737075);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(10,0.002234813);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(95);

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
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.03529296);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.01204113);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.007058592);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.004152113);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.002283662);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.001038028);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.0004152113);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0004152113);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(9,0.0004152113);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0004152113);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(11,0.0004152113);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.002706847);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.001581078);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.001210539);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.0009284407);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.0006885501);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.0004642204);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.0002935987);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0002935987);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(9,0.0002935987);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.0002935987);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(11,0.0002935987);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(308);

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
   
   TH1D *VbbHcc_both_Aplanarity__697 = new TH1D("VbbHcc_both_Aplanarity__697","",50,0,1);
   VbbHcc_both_Aplanarity__697->SetBinContent(1,44332);
   VbbHcc_both_Aplanarity__697->SetBinContent(2,12959);
   VbbHcc_both_Aplanarity__697->SetBinContent(3,5986);
   VbbHcc_both_Aplanarity__697->SetBinContent(4,3399);
   VbbHcc_both_Aplanarity__697->SetBinContent(5,2068);
   VbbHcc_both_Aplanarity__697->SetBinContent(6,1349);
   VbbHcc_both_Aplanarity__697->SetBinContent(7,875);
   VbbHcc_both_Aplanarity__697->SetBinContent(8,602);
   VbbHcc_both_Aplanarity__697->SetBinContent(9,403);
   VbbHcc_both_Aplanarity__697->SetBinContent(10,255);
   VbbHcc_both_Aplanarity__697->SetBinContent(11,187);
   VbbHcc_both_Aplanarity__697->SetBinContent(12,129);
   VbbHcc_both_Aplanarity__697->SetBinContent(13,82);
   VbbHcc_both_Aplanarity__697->SetBinContent(14,54);
   VbbHcc_both_Aplanarity__697->SetBinContent(15,47);
   VbbHcc_both_Aplanarity__697->SetBinContent(16,22);
   VbbHcc_both_Aplanarity__697->SetBinContent(17,14);
   VbbHcc_both_Aplanarity__697->SetBinContent(18,8);
   VbbHcc_both_Aplanarity__697->SetBinContent(19,6);
   VbbHcc_both_Aplanarity__697->SetBinContent(20,2);
   VbbHcc_both_Aplanarity__697->SetEntries(72828);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity__697->SetLineColor(ci);
   VbbHcc_both_Aplanarity__697->SetLineWidth(2);
   VbbHcc_both_Aplanarity__697->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity__697->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity__697->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity__697->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__697->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__697->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__697->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__697->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__697->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__697->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__697->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity__697->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__697->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__697->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__697->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__697->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__697->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_fx1507[50] = {
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
   Double_t Graph_from_VbbHcc_both_Aplanarity_fy1507[50] = {
   124811,
   38393.38,
   31646.44,
   8164.202,
   21266.84,
   3783.233,
   2255.385,
   1848.172,
   1113.287,
   547.2588,
   569.1351,
   409.6559,
   67.77749,
   146.1165,
   18.54123,
   53.57134,
   12.22906,
   7.792837,
   292.3312,
   0.4502646,
   0.1628759,
   0,
   0.04456635,
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
   0,
   0};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fex1507[50] = {
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
   Double_t Graph_from_VbbHcc_both_Aplanarity_fey1507[50] = {
   4216.776,
   2531.528,
   14891.03,
   996.5178,
   14847.31,
   726.5314,
   551.4422,
   545.2696,
   389.1221,
   272.2252,
   276.1097,
   271.2884,
   14.34266,
   42.67692,
   4.230299,
   31.226,
   6.833331,
   4.118298,
   269.219,
   0.1642966,
   0.09569317,
   0,
   0.04456635,
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_fx1507,Graph_from_VbbHcc_both_Aplanarity_fy1507,Graph_from_VbbHcc_both_Aplanarity_fex1507,Graph_from_VbbHcc_both_Aplanarity_fey1507);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity1507 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity1507","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetMaximum(141930.5);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity1507);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__698 = new TH1D("data_mc_ratio__698","",50,0,1);
   data_mc_ratio__698->SetBinContent(1,0.3551931);
   data_mc_ratio__698->SetBinContent(2,0.3375321);
   data_mc_ratio__698->SetBinContent(3,0.1891524);
   data_mc_ratio__698->SetBinContent(4,0.4163297);
   data_mc_ratio__698->SetBinContent(5,0.09724057);
   data_mc_ratio__698->SetBinContent(6,0.3565733);
   data_mc_ratio__698->SetBinContent(7,0.3879604);
   data_mc_ratio__698->SetBinContent(8,0.3257272);
   data_mc_ratio__698->SetBinContent(9,0.3619911);
   data_mc_ratio__698->SetBinContent(10,0.4659587);
   data_mc_ratio__698->SetBinContent(11,0.3285687);
   data_mc_ratio__698->SetBinContent(12,0.3148984);
   data_mc_ratio__698->SetBinContent(13,1.209841);
   data_mc_ratio__698->SetBinContent(14,0.369568);
   data_mc_ratio__698->SetBinContent(15,2.534891);
   data_mc_ratio__698->SetBinContent(16,0.4106674);
   data_mc_ratio__698->SetBinContent(17,1.144814);
   data_mc_ratio__698->SetBinContent(18,1.026584);
   data_mc_ratio__698->SetBinContent(19,0.02052466);
   data_mc_ratio__698->SetBinContent(20,4.441832);
   data_mc_ratio__698->SetBinError(1,0.001686964);
   data_mc_ratio__698->SetBinError(2,0.002965032);
   data_mc_ratio__698->SetBinError(3,0.002444801);
   data_mc_ratio__698->SetBinError(4,0.007141046);
   data_mc_ratio__698->SetBinError(5,0.002138318);
   data_mc_ratio__698->SetBinError(6,0.009708293);
   data_mc_ratio__698->SetBinError(7,0.01311546);
   data_mc_ratio__698->SetBinError(8,0.01327565);
   data_mc_ratio__698->SetBinError(9,0.01803206);
   data_mc_ratio__698->SetBinError(10,0.02917947);
   data_mc_ratio__698->SetBinError(11,0.02402733);
   data_mc_ratio__698->SetBinError(12,0.02772526);
   data_mc_ratio__698->SetBinError(13,0.1336046);
   data_mc_ratio__698->SetBinError(14,0.05029184);
   data_mc_ratio__698->SetBinError(15,0.3697518);
   data_mc_ratio__698->SetBinError(16,0.08755458);
   data_mc_ratio__698->SetBinError(17,0.3059645);
   data_mc_ratio__698->SetBinError(18,0.3629522);
   data_mc_ratio__698->SetBinError(19,0.008379159);
   data_mc_ratio__698->SetBinError(20,3.14085);
   data_mc_ratio__698->SetMinimum(0.4);
   data_mc_ratio__698->SetMaximum(1.6);
   data_mc_ratio__698->SetEntries(16.00847);
   data_mc_ratio__698->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__698->SetLineColor(ci);
   data_mc_ratio__698->SetLineWidth(2);
   data_mc_ratio__698->SetMarkerStyle(20);
   data_mc_ratio__698->SetMarkerSize(1.2);
   data_mc_ratio__698->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__698->GetXaxis()->SetRange(1,50);
   data_mc_ratio__698->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__698->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__698->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__698->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__698->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__698->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__698->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__698->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__698->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__698->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__698->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__698->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__698->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__698->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__698->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__698->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__698->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1508[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1508[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1508[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1508[50] = {
   0.03378529,
   0.06593656,
   0.4705436,
   0.1220594,
   0.6981438,
   0.1920398,
   0.2445003,
   0.2950318,
   0.3495254,
   0.4974342,
   0.4851391,
   0.6622348,
   0.211614,
   0.2920746,
   0.2281563,
   0.5828864,
   0.5587783,
   0.5284723,
   0.9209383,
   0.364889,
   0.5875221,
   0,
   1,
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
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1508,Graph_from_mc_statistical_error_fy1508,Graph_from_mc_statistical_error_fex1508,Graph_from_mc_statistical_error_fey1508);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1508 = new TH1F("Graph_Graph_from_mc_statistical_error1508","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1508->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1508->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1508->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1508->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1508->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1508->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1508->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1508->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1508->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1508->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1508->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1508->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1508);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
