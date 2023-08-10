void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug 10 12:25:08 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.1532254,-354.3575,1.052419,354013.1);
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
   st->SetMaximum(303406);
   
   TH1F *st_stack_254 = new TH1F("st_stack_254","",50,0,1);
   st_stack_254->SetMinimum(0.01);
   st_stack_254->SetMaximum(318576.3);
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
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,121235.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,36532.03);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,31736.01);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,7644.254);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,28008.56);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,3666.247);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,2148.096);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1805.63);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,1088.598);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,500.5518);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,598.8349);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,434.7106);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,29.1362);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,133.1597);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,4.989256);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,58.47237);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,8.239505);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,5.243291);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,363.4301);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,4893.729);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,2595.64);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,15365.85);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,1160.586);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,21692.45);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,817.14);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,626.0595);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,609.7485);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,478.0222);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,316.6741);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,347.6359);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,343.541);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,14.30458);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,47.85714);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,4.989256);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,42.82564);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,8.239505);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,5.243291);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,338.0657);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(10320);

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
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,622.5101);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,189.5276);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,85.26295);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,46.71048);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,36.07807);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,19.70801);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,13.73572);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,12.24698);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,6.854997);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,4.192027);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,2.423998);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,1.835722);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.891274);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.5720514);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.5730332);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.371769);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.06742158);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.06715488);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.3349459);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,0.06619855);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,11.02639);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,6.109001);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,4.070922);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,3.03893);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,2.779244);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,2.000578);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.597244);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,1.626361);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,1.20294);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,1.033982);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.6025466);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.6386759);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.4410112);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.2702389);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.3570525);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.3059373);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.06742158);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.06715488);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.3349459);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,0.06619855);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(12006);

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
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,12731.74);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,4219.232);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,2062.957);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,1198.6);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,737.7111);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,499.9568);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,318.8488);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,216.3751);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,156.836);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,107.0318);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,69.5829);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,52.5789);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,33.78711);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,23.94392);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,13.46005);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,9.476102);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,5.45079);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,3.770941);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,1.802041);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.5327989);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.1519827);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,30.72193);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,17.71551);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,12.38833);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,9.45383);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,7.415727);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,6.122662);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,4.888754);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,4.012646);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,3.429976);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,2.829529);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,2.269446);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,1.980729);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.59185);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.327418);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,0.9880152);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.8396121);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.6298133);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.5177564);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.3666947);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.1990909);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.1091529);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(333938);

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
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,1681.936);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,480.1415);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,211.5391);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,131.9676);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,71.65351);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,57.71871);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,32.44531);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,22.34501);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,15.01694);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,10.85231);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,4.144378);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.768674);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,3.505408);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.231899);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,1.48793);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.1343389);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.2028067);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(19,0.1106342);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,28.3588);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,15.94724);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,9.609088);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,10.00547);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,6.454021);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,6.717277);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,4.179171);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,3.648391);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,2.121996);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,2.726893);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,0.9655714);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,1.104281);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,1.060577);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.5717653);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,0.7401436);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.09522872);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.1458761);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(19,0.1106342);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(18216);

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
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,181.6935);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,50.48903);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,17.1055);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,10.0437);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,7.372084);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,3.719157);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,5.583477);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,1.558728);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.6564362);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,0.7341364);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.6743052);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,0.09984777);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,0.08003359);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.2485356);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.2090616);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,12.7421);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,5.601446);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,2.4831);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,2.129293);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,2.262404);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,1.039145);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,2.095157);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.5156921);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.286375);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.3123696);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.3171502);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,0.09984777);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.06793535);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.1448641);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.1478399);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(2376);

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
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(1,0.9136867);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(4,0.3402984);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(6,0.3608682);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(1,0.540107);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(4,0.3402984);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(6,0.3608682);
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
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,4.233592);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,1.460184);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,0.4828447);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,0.6955963);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,0.2572919);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,1.105837);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,0.6546012);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,0.3496829);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.4140203);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.2572919);
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
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,30.78824);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,10.28812);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,4.516378);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,2.344081);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,0.5137881);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,0.8509589);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,0.9898294);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,0.6427813);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(10,0.211376);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,3.005787);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,1.717701);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,1.142114);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,0.842116);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.3748335);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.4993017);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.5672663);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.4545162);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(10,0.211376);
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
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,30.74277);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,9.363683);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,4.442454);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,2.662652);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.691383);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,0.9720357);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.6389835);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.4267264);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.3011676);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1936319);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.1477862);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.08427049);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.05324458);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.0246394);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.02426782);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.009686653);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.01509429);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.005451246);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.002037323);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.2474951);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.1371133);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.09426994);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.07350518);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.05845537);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.04366163);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.03579517);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.02907189);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.02444226);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.01928566);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.01687545);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01280683);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.01054207);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.00683447);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.006671565);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.004413152);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.005385409);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.00322302);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.002037323);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(28446);

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
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,12.28421);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,4.126289);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,2.136107);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.259483);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.7830234);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.505937);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.3445787);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.2446414);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.151503);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.1018877);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.06486934);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.04906012);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.03359313);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.02325972);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.008082393);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.006651363);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.007309729);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.002222841);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001872616);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0008912589);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.07419259);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.04302854);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.03097533);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.0237609);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.01875903);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.0150697);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.01244424);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.01049168);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.008242337);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.006775832);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.005392874);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.004712586);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.003878304);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.003219336);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.001907259);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001722741);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001792853);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0009946838);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0009368752);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0006302152);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(50073);

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
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,0.1004031);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.03458284);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.009223171);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.01031457);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(5,0.003753843);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(7,0.004374861);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(8,0.005896416);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(10,0.003316574);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.01367913);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.008042103);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.004162663);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.004258781);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(5,0.002660181);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(7,0.003103752);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(8,0.003404736);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(10,0.002578627);
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
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.03919752);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.01379995);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.007835472);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.004824929);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.002481328);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.00126093);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.000495228);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0005176986);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(9,0.0005068187);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0005244952);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(11,0.0004731699);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.003060387);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.00184745);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.001380155);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.001089507);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.0007820696);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.0005770048);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.0003509291);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0003661393);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(9,0.0003586849);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.0003708753);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(11,0.0003535887);
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
   VbbHcc_both_Aplanarity__697->SetBinContent(1,41225);
   VbbHcc_both_Aplanarity__697->SetBinContent(2,12071);
   VbbHcc_both_Aplanarity__697->SetBinContent(3,5535);
   VbbHcc_both_Aplanarity__697->SetBinContent(4,3173);
   VbbHcc_both_Aplanarity__697->SetBinContent(5,1939);
   VbbHcc_both_Aplanarity__697->SetBinContent(6,1257);
   VbbHcc_both_Aplanarity__697->SetBinContent(7,823);
   VbbHcc_both_Aplanarity__697->SetBinContent(8,547);
   VbbHcc_both_Aplanarity__697->SetBinContent(9,371);
   VbbHcc_both_Aplanarity__697->SetBinContent(10,238);
   VbbHcc_both_Aplanarity__697->SetBinContent(11,171);
   VbbHcc_both_Aplanarity__697->SetBinContent(12,114);
   VbbHcc_both_Aplanarity__697->SetBinContent(13,77);
   VbbHcc_both_Aplanarity__697->SetBinContent(14,49);
   VbbHcc_both_Aplanarity__697->SetBinContent(15,45);
   VbbHcc_both_Aplanarity__697->SetBinContent(16,21);
   VbbHcc_both_Aplanarity__697->SetBinContent(17,13);
   VbbHcc_both_Aplanarity__697->SetBinContent(18,8);
   VbbHcc_both_Aplanarity__697->SetBinContent(19,5);
   VbbHcc_both_Aplanarity__697->SetBinContent(20,2);
   VbbHcc_both_Aplanarity__697->SetEntries(67733);

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
   136532.7,
   41496.71,
   34124.47,
   9038.892,
   28864.62,
   4250.04,
   2520.688,
   2059.476,
   1268.415,
   623.8727,
   675.8736,
   493.1271,
   67.48686,
   159.204,
   20.75169,
   68.47091,
   13.98293,
   9.08906,
   365.6816,
   0.5327989,
   0.2190725,
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
   4893.937,
   2595.764,
   15365.86,
   1160.674,
   21692.45,
   817.1938,
   626.0984,
   609.7752,
   478.0408,
   316.7004,
   347.6453,
   343.5491,
   14.4388,
   47.87994,
   5.154227,
   42.83507,
   8.265105,
   5.269221,
   338.0661,
   0.1990909,
   0.1276597,
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
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetMaximum(155569.3);
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
   data_mc_ratio__698->SetBinContent(1,0.3019423);
   data_mc_ratio__698->SetBinContent(2,0.2908906);
   data_mc_ratio__698->SetBinContent(3,0.1622003);
   data_mc_ratio__698->SetBinContent(4,0.3510386);
   data_mc_ratio__698->SetBinContent(5,0.06717566);
   data_mc_ratio__698->SetBinContent(6,0.2957619);
   data_mc_ratio__698->SetBinContent(7,0.3264982);
   data_mc_ratio__698->SetBinContent(8,0.2656016);
   data_mc_ratio__698->SetBinContent(9,0.292491);
   data_mc_ratio__698->SetBinContent(10,0.3814881);
   data_mc_ratio__698->SetBinContent(11,0.2530059);
   data_mc_ratio__698->SetBinContent(12,0.2311777);
   data_mc_ratio__698->SetBinContent(13,1.140963);
   data_mc_ratio__698->SetBinContent(14,0.3077811);
   data_mc_ratio__698->SetBinContent(15,2.168499);
   data_mc_ratio__698->SetBinContent(16,0.3066996);
   data_mc_ratio__698->SetBinContent(17,0.9297052);
   data_mc_ratio__698->SetBinContent(18,0.880179);
   data_mc_ratio__698->SetBinContent(19,0.0136731);
   data_mc_ratio__698->SetBinContent(20,3.753762);
   data_mc_ratio__698->SetBinError(1,0.001487112);
   data_mc_ratio__698->SetBinError(2,0.002647634);
   data_mc_ratio__698->SetBinError(3,0.002180183);
   data_mc_ratio__698->SetBinError(4,0.006231891);
   data_mc_ratio__698->SetBinError(5,0.001525538);
   data_mc_ratio__698->SetBinError(6,0.008342085);
   data_mc_ratio__698->SetBinError(7,0.01138101);
   data_mc_ratio__698->SetBinError(8,0.0113563);
   data_mc_ratio__698->SetBinError(9,0.01518537);
   data_mc_ratio__698->SetBinError(10,0.0247282);
   data_mc_ratio__698->SetBinError(11,0.01934784);
   data_mc_ratio__698->SetBinError(12,0.02165178);
   data_mc_ratio__698->SetBinError(13,0.1300248);
   data_mc_ratio__698->SetBinError(14,0.04396873);
   data_mc_ratio__698->SetBinError(15,0.3232607);
   data_mc_ratio__698->SetBinError(16,0.06692733);
   data_mc_ratio__698->SetBinError(17,0.2578538);
   data_mc_ratio__698->SetBinError(18,0.3111903);
   data_mc_ratio__698->SetBinError(19,0.006114795);
   data_mc_ratio__698->SetBinError(20,2.65431);
   data_mc_ratio__698->SetMinimum(0.4);
   data_mc_ratio__698->SetMaximum(1.6);
   data_mc_ratio__698->SetEntries(15.58497);
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
   0.03584443,
   0.06255348,
   0.4502885,
   0.1284088,
   0.7515239,
   0.1922791,
   0.2483839,
   0.2960827,
   0.3768804,
   0.5076362,
   0.5143644,
   0.6966746,
   0.2139498,
   0.3007457,
   0.2483763,
   0.6255951,
   0.5910855,
   0.5797322,
   0.924482,
   0.3736699,
   0.5827282,
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
   Graph_Graph_from_mc_statistical_error1508->SetMinimum(0.0679662);
   Graph_Graph_from_mc_statistical_error1508->SetMaximum(2.109378);
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
