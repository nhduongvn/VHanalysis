void H_dR_tags_all()
{
//=========Macro generated from canvas: H_dR_tags_all/H_dR_tags_all
//=========  (Fri Jul 14 13:37:57 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_all = new TCanvas("H_dR_tags_all", "H_dR_tags_all",0,0,600,600);
   H_dR_tags_all->SetHighLightColor(2);
   H_dR_tags_all->Range(0,0,1,1);
   H_dR_tags_all->SetFillColor(0);
   H_dR_tags_all->SetFillStyle(4000);
   H_dR_tags_all->SetBorderMode(0);
   H_dR_tags_all->SetBorderSize(2);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-1245.235,6.525,1244289);
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
   st->SetMinimum(0.3);
   st->SetMaximum(1066415);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",30,0,6);
   st_stack_24->SetMinimum(0.3);
   st_stack_24->SetMaximum(1119736);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetRange(1,31);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetLabelSize(0.035);
   st_stack_24->GetXaxis()->SetTitleSize(0.035);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetLabelSize(0.05);
   st_stack_24->GetYaxis()->SetTitleSize(0.057);
   st_stack_24->GetYaxis()->SetTitleOffset(1.2);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetLabelSize(0.035);
   st_stack_24->GetZaxis()->SetTitleSize(0.035);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_tags_H_dR_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(2,163.1471);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(3,301300.6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(4,284181.5);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(5,214379.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(6,191405.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(7,188537.1);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(8,200057.3);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(9,196474.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(10,222544.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(11,262419.6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(12,277442.1);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(13,290917.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(14,316385.3);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(15,362712.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(16,394595);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(17,344662.8);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(18,331654.6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(19,291670.3);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(20,267164.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(21,216999.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(22,207637.6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(23,151582.8);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(24,163626);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(25,97664.91);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(26,78613.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(27,63300.35);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(28,58632.12);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(29,53353.18);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(30,32172.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(31,33219.53);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(2,56.4596);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(3,7615.591);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(4,7494.456);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(5,6501.386);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(6,6362.642);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(7,6539.669);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(8,6854.757);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(9,6310.996);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(10,7630.751);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(11,22743.5);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(12,23663.92);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(13,8697.451);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(14,7935.569);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(15,9426.314);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(16,20075.72);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(17,8975.607);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(18,8987.967);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(19,8216.824);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(20,8402.845);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(21,7054.084);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(22,15112.52);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(23,11726.77);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(24,28348.57);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(25,4702.818);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(26,4265.785);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(27,3139.643);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(28,3908.057);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(29,3719.849);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(30,2388.683);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(31,2965.06);
   VbbHcc_tags_H_dR_all_stack_1->SetEntries(488683);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(2,1.880869);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(3,2578.311);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(4,3325.601);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(5,3034.277);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(6,2728.357);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(7,2345.965);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(8,2179.018);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(9,2161.251);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(10,2296.803);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(11,2543.259);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(12,2834.512);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(13,3209.907);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(14,3583.512);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(15,3894.097);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(16,4137.66);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(17,3921.921);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(18,3612.978);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(19,3265.704);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(20,2799.253);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(21,2326.52);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(22,1925.16);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(23,1553.718);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(24,1243.455);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(25,1039.463);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(26,842.3884);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(27,720.917);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(28,587.0761);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(29,477.6009);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(30,330.9752);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(31,294.9241);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(2,0.626781);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(3,25.1283);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(4,27.61048);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(5,25.68608);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(6,23.93927);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(7,21.5959);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(8,22.08619);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(9,21.0384);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(10,21.65943);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(11,22.90965);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(12,24.11946);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(13,25.44868);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(14,26.49313);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(15,27.54332);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(16,28.12984);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(17,30.19246);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(18,25.95289);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(19,25.12233);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(20,23.00265);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(21,20.58465);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(22,18.68662);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(23,16.9134);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(24,14.9934);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(25,14.36432);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(26,17.68012);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(27,12.4478);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(28,10.8214);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(29,9.621808);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(30,8.070084);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(31,7.287258);
   VbbHcc_tags_H_dR_all_stack_2->SetEntries(822483);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_3 = new TH1D("VbbHcc_tags_H_dR_all_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(2,26.59357);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(3,30013.57);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(4,50101.04);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(5,54662.7);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(6,53459.86);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(7,47084.53);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(8,42321.12);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(9,41024.37);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(10,42969.88);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(11,47299.57);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(12,53008.89);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(13,59727.71);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(14,66730.65);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(15,72894.01);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(16,76481.58);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(17,73276.77);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(18,67898.41);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(19,60178.24);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(20,51395.57);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(21,42451.88);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(22,34108.75);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(23,27072.97);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(24,21554.86);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(25,17430.06);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(26,14526.34);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(27,12222.43);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(28,9993.148);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(29,7743.172);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(30,4868.974);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(31,4264.484);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(2,1.41391);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(3,47.70255);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(4,60.99998);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(5,63.79148);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(6,63.00209);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(7,59.14301);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(8,56.06578);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(9,55.21768);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(10,57.30273);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(11,59.30443);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(12,62.97179);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(13,66.93158);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(14,71.302);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(15,74.13244);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(16,76.22043);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(17,74.66492);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(18,72.55731);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(19,67.70966);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(20,62.82082);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(21,56.64185);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(22,50.60842);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(23,44.9882);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(24,40.35732);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(25,36.05575);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(26,32.77369);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(27,30.07486);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(28,27.21392);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(29,23.97278);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(30,19.25786);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(31,17.77159);
   VbbHcc_tags_H_dR_all_stack_3->SetEntries(1.800198e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_4 = new TH1D("VbbHcc_tags_H_dR_all_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(2,2.019554);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(3,2036.226);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(4,2291.202);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(5,2015.073);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(6,1943.157);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(7,1779.604);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(8,1685.574);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(9,1717.09);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(10,1813.753);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(11,1866.777);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(12,2122.503);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(13,2341.708);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(14,2551.629);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(15,2811.76);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(16,3005.107);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(17,2831.59);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(18,2668.831);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(19,2385.086);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(20,2088.524);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(21,1730.785);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(22,1425.607);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(23,1189.365);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(24,970.4586);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(25,732.3672);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(26,609.6343);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(27,504.6814);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(28,427.3173);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(29,391.1924);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(30,247.442);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(31,218.0291);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(2,0.5633904);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(3,29.36061);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(4,31.39277);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(5,30.97604);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(6,35.43424);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(7,33.46406);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(8,31.97964);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(9,33.74592);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(10,35.23296);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(11,32.04732);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(12,35.97418);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(13,37.71584);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(14,37.24529);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(15,37.62008);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(16,39.93883);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(17,38.25587);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(18,37.22286);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(19,35.82233);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(20,33.63361);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(21,28.58239);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(22,27.32007);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(23,29.41364);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(24,25.23288);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(25,19.07258);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(26,19.87265);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(27,17.33284);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(28,15.53186);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(29,16.05022);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(30,12.13246);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(31,10.51682);
   VbbHcc_tags_H_dR_all_stack_4->SetEntries(340933);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_5 = new TH1D("VbbHcc_tags_H_dR_all_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(2,0.8461593);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(3,1293.753);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(4,1590.244);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(5,1386.461);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(6,1291.12);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(7,1015.645);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(8,1076.848);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(9,989.2674);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(10,1004.961);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(11,1056.294);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(12,1113.951);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(13,1252.456);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(14,1304.831);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(15,1484.03);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(16,1597.777);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(17,1503.807);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(18,1422.241);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(19,1219.607);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(20,1046.006);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(21,859.8833);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(22,754.7012);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(23,575.8433);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(24,491.2259);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(25,431.6437);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(26,349.1733);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(27,307.8093);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(28,280.2845);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(29,220.2685);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(30,164.9968);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(31,124.9013);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(2,0.3131608);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(3,27.22876);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(4,40.89435);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(5,46.21914);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(6,54.4876);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(7,37.8904);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(8,47.48049);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(9,36.51828);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(10,38.44105);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(11,41.1418);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(12,40.52312);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(13,41.0451);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(14,40.05888);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(15,47.59863);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(16,49.17214);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(17,53.56763);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(18,45.05149);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(19,37.82185);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(20,39.08687);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(21,31.25411);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(22,32.78918);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(23,25.92301);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(24,27.24621);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(25,26.83759);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(26,21.60641);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(27,23.93608);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(28,20.50851);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(29,13.76814);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(30,14.85232);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(31,13.90644);
   VbbHcc_tags_H_dR_all_stack_5->SetEntries(194636);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_6 = new TH1D("VbbHcc_tags_H_dR_all_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(3,9.945534);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(4,9.951907);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(5,7.490707);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(6,6.315005);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(7,7.154833);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(8,5.139281);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(9,5.457144);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(10,5.408988);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(11,5.344781);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(12,6.461876);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(13,7.832091);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(14,8.327446);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(15,10.36091);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(16,10.10606);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(17,6.562131);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(18,7.854538);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(19,7.552565);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(20,4.254209);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(21,3.653549);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(22,4.194872);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(23,3.405887);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(24,2.433802);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(25,2.889012);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(26,1.822022);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(27,1.911612);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(28,2.090462);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(29,0.5388656);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(30,1.220517);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(31,0.09409418);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(3,1.421964);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(4,1.329263);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(5,1.25951);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(6,1.052798);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(7,1.248665);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(8,0.9877324);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(9,0.9992004);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(10,0.9189128);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(11,1.008865);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(12,1.187931);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(13,1.278693);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(14,1.37967);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(15,1.49044);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(16,1.362496);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(17,1.072698);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(18,1.181401);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(19,1.26518);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(20,0.8597499);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(21,0.7344014);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(22,0.9625228);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(23,0.7180272);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(24,0.5803109);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(25,0.8175708);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(26,0.5858684);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(27,0.6729576);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(28,0.6489882);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(29,0.2854991);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(30,0.4374453);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(31,0.09409418);
   VbbHcc_tags_H_dR_all_stack_6->SetEntries(1108);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_7 = new TH1D("VbbHcc_tags_H_dR_all_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(3,18.37001);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(4,20.99436);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(5,16.94994);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(6,11.84533);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(7,10.87646);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(8,7.878819);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(9,5.887632);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(10,6.621953);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(11,8.68545);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(12,10.39494);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(13,12.78844);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(14,12.22613);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(15,14.4537);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(16,15.83199);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(17,10.27021);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(18,12.37691);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(19,10.35816);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(20,7.424909);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(21,5.360155);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(22,6.694159);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(23,4.599846);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(24,3.767209);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(25,4.900132);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(26,2.649312);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(27,2.824217);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(28,3.925861);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(29,2.138332);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(30,1.650964);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(31,1.37459);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(3,1.583116);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(4,1.558042);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(5,1.474646);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(6,1.191016);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(7,1.325489);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(8,1.056354);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(9,0.9728176);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(10,0.9221714);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(11,1.091476);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(12,1.269702);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(13,1.37857);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(14,1.451543);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(15,1.55331);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(16,1.460837);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(17,1.150132);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(18,1.272267);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(19,1.307372);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(20,0.9526155);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(21,0.7810463);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(22,1.027237);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(23,0.745906);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(24,0.6256882);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(25,0.8913268);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(26,0.6158909);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(27,0.7088129);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(28,0.7304548);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(29,0.4338636);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(30,0.4501821);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(31,0.3081312);
   VbbHcc_tags_H_dR_all_stack_7->SetEntries(2838);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_8 = new TH1D("VbbHcc_tags_H_dR_all_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(3,22.03321);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(4,33.20685);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(5,32.54818);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(6,19.19912);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(7,13.62075);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(8,11.97355);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(9,8.188046);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(10,10.02073);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(11,12.21604);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(12,13.05089);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(13,13.75986);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(14,15.25444);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(15,22.53219);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(16,19.87738);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(17,15.56409);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(18,18.94625);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(19,18.45672);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(20,10.96089);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(21,9.447346);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(22,10.81385);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(23,5.414037);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(24,4.989124);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(25,4.547818);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(26,3.07178);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(27,4.556341);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(28,5.616256);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(29,3.637811);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(30,2.530265);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(31,1.424174);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(3,2.174005);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(4,2.694864);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(5,2.648667);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(6,2.004318);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(7,1.712115);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(8,1.598671);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(9,1.336335);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(10,1.438935);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(11,1.605889);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(12,1.676887);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(13,1.697986);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(14,1.775955);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(15,2.213056);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(16,2.066615);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(17,1.813816);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(18,2.014818);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(19,2.183106);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(20,1.515888);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(21,1.449582);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(22,1.522757);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(23,1.045705);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(24,1.055366);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(25,0.9441955);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(26,0.8055646);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(27,0.9801051);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(28,1.090446);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(29,0.9162703);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(30,0.7421658);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(31,0.5440771);
   VbbHcc_tags_H_dR_all_stack_8->SetEntries(1788);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_9 = new TH1D("VbbHcc_tags_H_dR_all_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(2,0.0182639);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(3,16.51523);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(4,23.11999);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(5,20.20743);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(6,14.24755);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(7,9.113383);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(8,7.011935);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(9,6.369092);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(10,6.483502);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(11,7.336882);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(12,8.596705);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(13,9.774457);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(14,11.49272);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(15,13.06075);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(16,13.78839);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(17,13.3262);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(18,11.40168);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(19,9.208262);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(20,7.409864);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(21,5.996702);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(22,4.62418);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(23,3.561984);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(24,2.981104);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(25,2.587479);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(26,2.339114);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(27,2.586196);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(28,2.640311);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(29,2.365056);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(30,1.479315);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(31,1.051392);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(2,0.006139168);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(3,0.1914048);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(4,0.2252226);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(5,0.2129533);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(6,0.1715683);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(7,0.1337493);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(8,0.11853);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(9,0.1113813);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(10,0.1128793);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(11,0.1266767);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(12,0.1376631);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(13,0.1406418);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(14,0.1543556);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(15,0.1650809);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(16,0.1702067);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(17,0.1681272);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(18,0.1554107);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(19,0.1395891);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(20,0.1226503);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(21,0.1230798);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(22,0.101359);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(23,0.1359319);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(24,0.07616073);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(25,0.08094747);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(26,0.0677098);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(27,0.07308125);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(28,0.07809519);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(29,0.06925284);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(30,0.06779833);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(31,0.04646148);
   VbbHcc_tags_H_dR_all_stack_9->SetEntries(135628);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_10 = new TH1D("VbbHcc_tags_H_dR_all_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(2,0.001653235);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(3,8.265604);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(4,13.48978);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(5,13.73224);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(6,11.94501);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(7,8.305037);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(8,5.865666);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(9,5.351642);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(10,5.442864);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(11,5.916816);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(12,6.723268);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(13,7.667273);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(14,8.721353);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(15,9.406066);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(16,9.719625);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(17,9.141738);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(18,8.592956);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(19,7.341051);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(20,6.328815);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(21,5.168481);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(22,4.066562);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(23,3.388247);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(24,2.723719);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(25,2.265378);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(26,2.191333);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(27,2.208524);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(28,1.897198);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(29,1.647948);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(30,1.025259);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(31,0.6943366);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(2,0.0009778577);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(3,0.06508359);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(4,0.0832031);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(5,0.0840797);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(6,0.07842009);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(7,0.0653378);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(8,0.05480808);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(9,0.0522473);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(10,0.05276054);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(11,0.05499089);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(12,0.05852798);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(13,0.06259294);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(14,0.06672051);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(15,0.06933068);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(16,0.07043622);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(17,0.06837141);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(18,0.06619486);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(19,0.06116044);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(20,0.05677046);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(21,0.05128878);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(22,0.04544082);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(23,0.041486);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(24,0.03721659);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(25,0.03400168);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(26,0.03342389);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(27,0.03361257);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(28,0.03111877);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(29,0.02907019);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(30,0.02288081);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(31,0.01879212);
   VbbHcc_tags_H_dR_all_stack_10->SetEntries(374655);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_11 = new TH1D("VbbHcc_tags_H_dR_all_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(3,0.1866347);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(4,0.4687721);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(5,0.6145901);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(6,0.7485147);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(7,0.5880123);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(8,0.4118585);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(9,0.2693999);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(10,0.2031152);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(11,0.2380899);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(12,0.2198969);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(13,0.214756);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(14,0.2385366);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(15,0.208655);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(16,0.2836122);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(17,0.2530929);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(18,0.2408352);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(19,0.2177361);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(20,0.1662746);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(21,0.1454732);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(22,0.06187743);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(23,0.09851067);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(24,0.07246901);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(25,0.08155213);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(26,0.08176787);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(27,0.1069666);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(28,0.08929718);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(29,0.07272737);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(30,0.03186085);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(31,0.02847535);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(3,0.02233525);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(4,0.03995998);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(5,0.04000487);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(6,0.0475031);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(7,0.03884482);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(8,0.03303258);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(9,0.02639705);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(10,0.02325408);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(11,0.02464271);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(12,0.02376522);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(13,0.02371326);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(14,0.02399592);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(15,0.02309292);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(16,0.02735313);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(17,0.0256175);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(18,0.02566634);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(19,0.02371419);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(20,0.02828783);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(21,0.01955048);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(22,0.01218035);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(23,0.01560002);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(24,0.01350133);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(25,0.01569864);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(26,0.01436165);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(27,0.01655564);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(28,0.01467893);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(29,0.01375116);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(30,0.009029306);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(31,0.008698403);
   VbbHcc_tags_H_dR_all_stack_11->SetEntries(2879);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_12 = new TH1D("VbbHcc_tags_H_dR_all_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(3,0.07682021);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(4,0.1649308);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(5,0.2538692);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(6,0.3228687);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(7,0.312358);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(8,0.2180196);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(9,0.1414251);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(10,0.1273043);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(11,0.1035357);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(12,0.1100193);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(13,0.1092601);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(14,0.1165638);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(15,0.1204108);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(16,0.1244083);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(17,0.1123113);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(18,0.09552403);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(19,0.1013986);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(20,0.07608746);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(21,0.07311635);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(22,0.05794745);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(23,0.0515107);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(24,0.05534372);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(25,0.06133173);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(26,0.06104805);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(27,0.05752321);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(28,0.0393499);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(29,0.0288152);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(30,0.009109355);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(31,0.01103616);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(3,0.005001918);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(4,0.007574652);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(5,0.009107044);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(6,0.01042506);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(7,0.01028846);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(8,0.008460541);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(9,0.006873424);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(10,0.006471095);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(11,0.005860416);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(12,0.006052742);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(13,0.005996324);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(14,0.006209678);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(15,0.006226084);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(16,0.006394506);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(17,0.006188713);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(18,0.005675521);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(19,0.006714366);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(20,0.00493108);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(21,0.004965994);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(22,0.004350428);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(23,0.004099825);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(24,0.004254207);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(25,0.004452861);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(26,0.004537198);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(27,0.004303681);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(28,0.003573489);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(29,0.003072056);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(30,0.001696479);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(31,0.001987768);
   VbbHcc_tags_H_dR_all_stack_12->SetEntries(10461);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_all__47 = new TH1D("VbbHcc_tags_H_dR_all__47","",30,0,6);
   VbbHcc_tags_H_dR_all__47->SetBinContent(2,207);
   VbbHcc_tags_H_dR_all__47->SetBinContent(3,202978);
   VbbHcc_tags_H_dR_all__47->SetBinContent(4,227254);
   VbbHcc_tags_H_dR_all__47->SetBinContent(5,181881);
   VbbHcc_tags_H_dR_all__47->SetBinContent(6,171389);
   VbbHcc_tags_H_dR_all__47->SetBinContent(7,165530);
   VbbHcc_tags_H_dR_all__47->SetBinContent(8,166175);
   VbbHcc_tags_H_dR_all__47->SetBinContent(9,172270);
   VbbHcc_tags_H_dR_all__47->SetBinContent(10,182673);
   VbbHcc_tags_H_dR_all__47->SetBinContent(11,199020);
   VbbHcc_tags_H_dR_all__47->SetBinContent(12,219069);
   VbbHcc_tags_H_dR_all__47->SetBinContent(13,244006);
   VbbHcc_tags_H_dR_all__47->SetBinContent(14,272629);
   VbbHcc_tags_H_dR_all__47->SetBinContent(15,297971);
   VbbHcc_tags_H_dR_all__47->SetBinContent(16,317942);
   VbbHcc_tags_H_dR_all__47->SetBinContent(17,299082);
   VbbHcc_tags_H_dR_all__47->SetBinContent(18,278723);
   VbbHcc_tags_H_dR_all__47->SetBinContent(19,254521);
   VbbHcc_tags_H_dR_all__47->SetBinContent(20,222617);
   VbbHcc_tags_H_dR_all__47->SetBinContent(21,189926);
   VbbHcc_tags_H_dR_all__47->SetBinContent(22,157162);
   VbbHcc_tags_H_dR_all__47->SetBinContent(23,127647);
   VbbHcc_tags_H_dR_all__47->SetBinContent(24,102268);
   VbbHcc_tags_H_dR_all__47->SetBinContent(25,81752);
   VbbHcc_tags_H_dR_all__47->SetBinContent(26,65775);
   VbbHcc_tags_H_dR_all__47->SetBinContent(27,53126);
   VbbHcc_tags_H_dR_all__47->SetBinContent(28,44200);
   VbbHcc_tags_H_dR_all__47->SetBinContent(29,38616);
   VbbHcc_tags_H_dR_all__47->SetBinContent(30,26382);
   VbbHcc_tags_H_dR_all__47->SetBinContent(31,25160);
   VbbHcc_tags_H_dR_all__47->SetEntries(4987951);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all__47->SetLineColor(ci);
   VbbHcc_tags_H_dR_all__47->SetLineWidth(2);
   VbbHcc_tags_H_dR_all__47->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_all__47->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_all__47->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all__47->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all__47->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all__47->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all__47->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all__47->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all__47->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all__47->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all__47->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all__47->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fx1047[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fy1047[30] = {
   0,
   194.5072,
   337297.8,
   341591,
   275569.6,
   250892.4,
   240812.9,
   247358.4,
   242397.8,
   270664.6,
   315225.4,
   336567.5,
   357501.3,
   390612.3,
   443866.4,
   479886.8,
   426252.1,
   407316.5,
   358772.2,
   324530.4,
   264398.4,
   245882.4,
   181995.2,
   187903,
   117315.8,
   94952.96,
   77070.44,
   69936.24,
   62195.84,
   37793.23};
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fex1047[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fey1047[30] = {
   0,
   56.48446,
   7615.887,
   7494.933,
   6501.989,
   6363.332,
   6540.168,
   6855.261,
   6311.469,
   7631.175,
   22743.65,
   23664.08,
   8697.925,
   7936.122,
   9426.842,
   20075.99,
   8976.21,
   8988.488,
   8217.307,
   8403.27,
   7054.468,
   15112.67,
   11726.93,
   28348.63,
   4703.094,
   4266.048,
   3139.951,
   3908.252,
   3719.999,
   2388.852};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_all_fx1047,Graph_from_VbbHcc_tags_H_dR_all_fy1047,Graph_from_VbbHcc_tags_H_dR_all_fex1047,Graph_from_VbbHcc_tags_H_dR_all_fey1047);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_all1047 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_all1047","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetMaximum(549959.1);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_all1047);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_tags_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__48 = new TH1D("data_mc_ratio__48","",30,0,6);
   data_mc_ratio__48->SetBinContent(2,1.064228);
   data_mc_ratio__48->SetBinContent(3,0.6017768);
   data_mc_ratio__48->SetBinContent(4,0.665281);
   data_mc_ratio__48->SetBinContent(5,0.6600185);
   data_mc_ratio__48->SetBinContent(6,0.6831176);
   data_mc_ratio__48->SetBinContent(7,0.6873803);
   data_mc_ratio__48->SetBinContent(8,0.6717986);
   data_mc_ratio__48->SetBinContent(9,0.7106912);
   data_mc_ratio__48->SetBinContent(10,0.6749055);
   data_mc_ratio__48->SetBinContent(11,0.6313578);
   data_mc_ratio__48->SetBinContent(12,0.6508917);
   data_mc_ratio__48->SetBinContent(13,0.6825317);
   data_mc_ratio__48->SetBinContent(14,0.6979529);
   data_mc_ratio__48->SetBinContent(15,0.6713078);
   data_mc_ratio__48->SetBinContent(16,0.6625354);
   data_mc_ratio__48->SetBinContent(17,0.7016552);
   data_mc_ratio__48->SetBinContent(18,0.6842909);
   data_mc_ratio__48->SetBinContent(19,0.7094224);
   data_mc_ratio__48->SetBinContent(20,0.6859665);
   data_mc_ratio__48->SetBinContent(21,0.7183327);
   data_mc_ratio__48->SetBinContent(22,0.6391755);
   data_mc_ratio__48->SetBinContent(23,0.7013756);
   data_mc_ratio__48->SetBinContent(24,0.5442594);
   data_mc_ratio__48->SetBinContent(25,0.6968543);
   data_mc_ratio__48->SetBinContent(26,0.6927114);
   data_mc_ratio__48->SetBinContent(27,0.6893175);
   data_mc_ratio__48->SetBinContent(28,0.6320042);
   data_mc_ratio__48->SetBinContent(29,0.6208775);
   data_mc_ratio__48->SetBinContent(30,0.6980615);
   data_mc_ratio__48->SetBinContent(31,0.6599077);
   data_mc_ratio__48->SetBinError(2,0.07396897);
   data_mc_ratio__48->SetBinError(3,0.001335706);
   data_mc_ratio__48->SetBinError(4,0.001395563);
   data_mc_ratio__48->SetBinError(5,0.001547613);
   data_mc_ratio__48->SetBinError(6,0.001650076);
   data_mc_ratio__48->SetBinError(7,0.001689502);
   data_mc_ratio__48->SetBinError(8,0.001647996);
   data_mc_ratio__48->SetBinError(9,0.001712285);
   data_mc_ratio__48->SetBinError(10,0.001579086);
   data_mc_ratio__48->SetBinError(11,0.001415231);
   data_mc_ratio__48->SetBinError(12,0.001390651);
   data_mc_ratio__48->SetBinError(13,0.001381728);
   data_mc_ratio__48->SetBinError(14,0.001336719);
   data_mc_ratio__48->SetBinError(15,0.001229801);
   data_mc_ratio__48->SetBinError(16,0.001174993);
   data_mc_ratio__48->SetBinError(17,0.001283006);
   data_mc_ratio__48->SetBinError(18,0.001296147);
   data_mc_ratio__48->SetBinError(19,0.001406187);
   data_mc_ratio__48->SetBinError(20,0.001453864);
   data_mc_ratio__48->SetBinError(21,0.001648289);
   data_mc_ratio__48->SetBinError(22,0.001612302);
   data_mc_ratio__48->SetBinError(23,0.001963113);
   data_mc_ratio__48->SetBinError(24,0.001701908);
   data_mc_ratio__48->SetBinError(25,0.002437209);
   data_mc_ratio__48->SetBinError(26,0.002700984);
   data_mc_ratio__48->SetBinError(27,0.002990651);
   data_mc_ratio__48->SetBinError(28,0.003006137);
   data_mc_ratio__48->SetBinError(29,0.003159529);
   data_mc_ratio__48->SetBinError(30,0.004297737);
   data_mc_ratio__48->SetBinError(31,0.05149063);
   data_mc_ratio__48->SetMinimum(0.4);
   data_mc_ratio__48->SetMaximum(1.6);
   data_mc_ratio__48->SetEntries(3074.944);
   data_mc_ratio__48->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__48->SetLineColor(ci);
   data_mc_ratio__48->SetLineWidth(2);
   data_mc_ratio__48->SetMarkerStyle(20);
   data_mc_ratio__48->SetMarkerSize(1.2);
   data_mc_ratio__48->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__48->GetXaxis()->SetRange(1,31);
   data_mc_ratio__48->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__48->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__48->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__48->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__48->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__48->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__48->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__48->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__48->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__48->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__48->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__48->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__48->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__48->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__48->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__48->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__48->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1048[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1048[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1048[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1048[30] = {
   0,
   0.2903978,
   0.02257912,
   0.02194125,
   0.02359473,
   0.0253628,
   0.02715872,
   0.02771389,
   0.02603765,
   0.02819422,
   0.07215043,
   0.07031005,
   0.02432977,
   0.02031713,
   0.02123801,
   0.04183484,
   0.02105845,
   0.02206758,
   0.02290397,
   0.02589363,
   0.02668121,
   0.06146302,
   0.0644354,
   0.1508684,
   0.04008918,
   0.04492802,
   0.04074132,
   0.05588306,
   0.05981106,
   0.06320846};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1048,Graph_from_mc_statistical_error_fy1048,Graph_from_mc_statistical_error_fex1048,Graph_from_mc_statistical_error_fey1048);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1048 = new TH1F("Graph_Graph_from_mc_statistical_error1048","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1048->SetMinimum(0.6515226);
   Graph_Graph_from_mc_statistical_error1048->SetMaximum(1.348477);
   Graph_Graph_from_mc_statistical_error1048->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1048->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1048);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->SetSelected(H_dR_tags_all);
}
