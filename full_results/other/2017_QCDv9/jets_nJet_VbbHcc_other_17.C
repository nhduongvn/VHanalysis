void jets_nJet_VbbHcc_other_17()
{
//=========Macro generated from canvas: jets_nJet_VbbHcc_other_17/jets_nJet_VbbHcc_other_17
//=========  (Tue Nov 22 09:30:36 2022) by ROOT version 6.14/09
   TCanvas *jets_nJet_VbbHcc_other_17 = new TCanvas("jets_nJet_VbbHcc_other_17", "jets_nJet_VbbHcc_other_17",0,0,600,600);
   jets_nJet_VbbHcc_other_17->SetHighLightColor(2);
   jets_nJet_VbbHcc_other_17->Range(0,0,1,1);
   jets_nJet_VbbHcc_other_17->SetFillColor(0);
   jets_nJet_VbbHcc_other_17->SetFillStyle(4000);
   jets_nJet_VbbHcc_other_17->SetBorderMode(0);
   jets_nJet_VbbHcc_other_17->SetBorderSize(2);
   jets_nJet_VbbHcc_other_17->SetFrameFillStyle(1000);
   jets_nJet_VbbHcc_other_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-2.645156,-8.043416e+07,14.23387,8.035372e+10);
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
   st->SetMaximum(6.886696e+10);
   
   TH1F *st_stack_6 = new TH1F("st_stack_6","",14,-0.5,13.5);
   st_stack_6->SetMinimum(0.01);
   st_stack_6->SetMaximum(7.231031e+10);
   st_stack_6->SetDirectory(0);
   st_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_6->SetLineColor(ci);
   st_stack_6->GetXaxis()->SetRange(1,14);
   st_stack_6->GetXaxis()->SetLabelFont(42);
   st_stack_6->GetXaxis()->SetLabelSize(0.035);
   st_stack_6->GetXaxis()->SetTitleSize(0.035);
   st_stack_6->GetXaxis()->SetTitleFont(42);
   st_stack_6->GetYaxis()->SetTitle("Events/1.0");
   st_stack_6->GetYaxis()->SetLabelFont(42);
   st_stack_6->GetYaxis()->SetLabelSize(0.05);
   st_stack_6->GetYaxis()->SetTitleSize(0.057);
   st_stack_6->GetYaxis()->SetTitleOffset(1.2);
   st_stack_6->GetYaxis()->SetTitleFont(42);
   st_stack_6->GetZaxis()->SetLabelFont(42);
   st_stack_6->GetZaxis()->SetLabelSize(0.035);
   st_stack_6->GetZaxis()->SetTitleSize(0.035);
   st_stack_6->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_6);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,1.196374e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,1.092379e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,3.097802e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,2.127053e+10);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,6.191413e+09);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,9.410886e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,1.117479e+08);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,1.155321e+07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,1110849);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,114067);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,6417.786);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,2778.746);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,1209982);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,3717001);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,6358445);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,5282730);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,2851251);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,1110588);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,382222);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,122734.7);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,37930.58);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,12106.81);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,2958.733);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,1946.812);
   VbbHcc_jets_nJet_stack_1->SetEntries(5.748671e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,604472.7);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,2332429);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,3734788);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,3314630);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,1880580);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,780244.2);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,270535.8);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,81371);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,21954.47);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,5345.406);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,1220.329);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,282.5178);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,57.20796);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,13.82798);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,3.277494);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,222.9468);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,459.5084);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,619.8977);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,638.916);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,537.4019);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,382.8878);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,237.0097);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,132.2222);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,68.74081);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,33.54867);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,15.75745);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,7.542276);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,3.266121);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,1.608472);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,0.8040339);
   VbbHcc_jets_nJet_stack_2->SetEntries(2.031885e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   
   TH1D *VbbHcc_jets_nJet_stack_3 = new TH1D("VbbHcc_jets_nJet_stack_3","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_3->SetBinContent(1,205260);
   VbbHcc_jets_nJet_stack_3->SetBinContent(2,1396585);
   VbbHcc_jets_nJet_stack_3->SetBinContent(3,4341438);
   VbbHcc_jets_nJet_stack_3->SetBinContent(4,7823608);
   VbbHcc_jets_nJet_stack_3->SetBinContent(5,9141353);
   VbbHcc_jets_nJet_stack_3->SetBinContent(6,7168343);
   VbbHcc_jets_nJet_stack_3->SetBinContent(7,3904900);
   VbbHcc_jets_nJet_stack_3->SetBinContent(8,1568446);
   VbbHcc_jets_nJet_stack_3->SetBinContent(9,519059.5);
   VbbHcc_jets_nJet_stack_3->SetBinContent(10,149809.2);
   VbbHcc_jets_nJet_stack_3->SetBinContent(11,39076.04);
   VbbHcc_jets_nJet_stack_3->SetBinContent(12,9483.037);
   VbbHcc_jets_nJet_stack_3->SetBinContent(13,2167.984);
   VbbHcc_jets_nJet_stack_3->SetBinContent(14,468.139);
   VbbHcc_jets_nJet_stack_3->SetBinContent(15,119.3999);
   VbbHcc_jets_nJet_stack_3->SetBinError(1,99.59887);
   VbbHcc_jets_nJet_stack_3->SetBinError(2,263.8665);
   VbbHcc_jets_nJet_stack_3->SetBinError(3,483.0885);
   VbbHcc_jets_nJet_stack_3->SetBinError(4,682.8985);
   VbbHcc_jets_nJet_stack_3->SetBinError(5,777.7043);
   VbbHcc_jets_nJet_stack_3->SetBinError(6,716.5762);
   VbbHcc_jets_nJet_stack_3->SetBinError(7,539.802);
   VbbHcc_jets_nJet_stack_3->SetBinError(8,345.061);
   VbbHcc_jets_nJet_stack_3->SetBinError(9,199.3187);
   VbbHcc_jets_nJet_stack_3->SetBinError(10,107.2956);
   VbbHcc_jets_nJet_stack_3->SetBinError(11,54.85441);
   VbbHcc_jets_nJet_stack_3->SetBinError(12,27.01833);
   VbbHcc_jets_nJet_stack_3->SetBinError(13,12.90252);
   VbbHcc_jets_nJet_stack_3->SetBinError(14,6.002158);
   VbbHcc_jets_nJet_stack_3->SetBinError(15,3.030184);
   VbbHcc_jets_nJet_stack_3->SetEntries(6.313335e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_jets_nJet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_3->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_3->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_3,"");
   
   TH1D *VbbHcc_jets_nJet_stack_4 = new TH1D("VbbHcc_jets_nJet_stack_4","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_4->SetBinContent(1,7186.605);
   VbbHcc_jets_nJet_stack_4->SetBinContent(2,110408.2);
   VbbHcc_jets_nJet_stack_4->SetBinContent(3,693151.5);
   VbbHcc_jets_nJet_stack_4->SetBinContent(4,1607193);
   VbbHcc_jets_nJet_stack_4->SetBinContent(5,1519504);
   VbbHcc_jets_nJet_stack_4->SetBinContent(6,789554.1);
   VbbHcc_jets_nJet_stack_4->SetBinContent(7,262286.4);
   VbbHcc_jets_nJet_stack_4->SetBinContent(8,60149.33);
   VbbHcc_jets_nJet_stack_4->SetBinContent(9,11054.24);
   VbbHcc_jets_nJet_stack_4->SetBinContent(10,1665.603);
   VbbHcc_jets_nJet_stack_4->SetBinContent(11,241.0065);
   VbbHcc_jets_nJet_stack_4->SetBinContent(12,26.6777);
   VbbHcc_jets_nJet_stack_4->SetBinContent(13,3.287363);
   VbbHcc_jets_nJet_stack_4->SetBinContent(14,0.7706581);
   VbbHcc_jets_nJet_stack_4->SetBinError(1,43.195);
   VbbHcc_jets_nJet_stack_4->SetBinError(2,186.2033);
   VbbHcc_jets_nJet_stack_4->SetBinError(3,504.3391);
   VbbHcc_jets_nJet_stack_4->SetBinError(4,785.077);
   VbbHcc_jets_nJet_stack_4->SetBinError(5,768.1906);
   VbbHcc_jets_nJet_stack_4->SetBinError(6,555.0918);
   VbbHcc_jets_nJet_stack_4->SetBinError(7,320.1948);
   VbbHcc_jets_nJet_stack_4->SetBinError(8,153.27);
   VbbHcc_jets_nJet_stack_4->SetBinError(9,65.63304);
   VbbHcc_jets_nJet_stack_4->SetBinError(10,25.50492);
   VbbHcc_jets_nJet_stack_4->SetBinError(11,9.659297);
   VbbHcc_jets_nJet_stack_4->SetBinError(12,3.167159);
   VbbHcc_jets_nJet_stack_4->SetBinError(13,1.111508);
   VbbHcc_jets_nJet_stack_4->SetBinError(14,0.5451182);
   VbbHcc_jets_nJet_stack_4->SetEntries(1.399448e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_jets_nJet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_4->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_4->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_4,"");
   
   TH1D *VbbHcc_jets_nJet_stack_5 = new TH1D("VbbHcc_jets_nJet_stack_5","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_5->SetBinContent(1,18938.26);
   VbbHcc_jets_nJet_stack_5->SetBinContent(2,287178.2);
   VbbHcc_jets_nJet_stack_5->SetBinContent(3,1689903);
   VbbHcc_jets_nJet_stack_5->SetBinContent(4,3919243);
   VbbHcc_jets_nJet_stack_5->SetBinContent(5,3674897);
   VbbHcc_jets_nJet_stack_5->SetBinContent(6,1842216);
   VbbHcc_jets_nJet_stack_5->SetBinContent(7,579138);
   VbbHcc_jets_nJet_stack_5->SetBinContent(8,137023.3);
   VbbHcc_jets_nJet_stack_5->SetBinContent(9,26666.24);
   VbbHcc_jets_nJet_stack_5->SetBinContent(10,4422.169);
   VbbHcc_jets_nJet_stack_5->SetBinContent(11,618.2779);
   VbbHcc_jets_nJet_stack_5->SetBinContent(12,83.26065);
   VbbHcc_jets_nJet_stack_5->SetBinContent(13,13.84341);
   VbbHcc_jets_nJet_stack_5->SetBinContent(14,2.290748);
   VbbHcc_jets_nJet_stack_5->SetBinError(1,128.4095);
   VbbHcc_jets_nJet_stack_5->SetBinError(2,552.6671);
   VbbHcc_jets_nJet_stack_5->SetBinError(3,1450.157);
   VbbHcc_jets_nJet_stack_5->SetBinError(4,2262.873);
   VbbHcc_jets_nJet_stack_5->SetBinError(5,2206.9);
   VbbHcc_jets_nJet_stack_5->SetBinError(6,1566.052);
   VbbHcc_jets_nJet_stack_5->SetBinError(7,878.3232);
   VbbHcc_jets_nJet_stack_5->SetBinError(8,427.2657);
   VbbHcc_jets_nJet_stack_5->SetBinError(9,188.0877);
   VbbHcc_jets_nJet_stack_5->SetBinError(10,76.58128);
   VbbHcc_jets_nJet_stack_5->SetBinError(11,28.71045);
   VbbHcc_jets_nJet_stack_5->SetBinError(12,10.55838);
   VbbHcc_jets_nJet_stack_5->SetBinError(13,4.333885);
   VbbHcc_jets_nJet_stack_5->SetBinError(14,1.676492);
   VbbHcc_jets_nJet_stack_5->SetEntries(9914549);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_jets_nJet_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_5->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_5->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_5,"");
   
   TH1D *VbbHcc_jets_nJet_stack_6 = new TH1D("VbbHcc_jets_nJet_stack_6","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_6->SetBinContent(1,664599.1);
   VbbHcc_jets_nJet_stack_6->SetBinContent(2,1031815);
   VbbHcc_jets_nJet_stack_6->SetBinContent(3,952130);
   VbbHcc_jets_nJet_stack_6->SetBinContent(4,534936.2);
   VbbHcc_jets_nJet_stack_6->SetBinContent(5,205833.2);
   VbbHcc_jets_nJet_stack_6->SetBinContent(6,54045.7);
   VbbHcc_jets_nJet_stack_6->SetBinContent(7,11932.67);
   VbbHcc_jets_nJet_stack_6->SetBinContent(8,2425.92);
   VbbHcc_jets_nJet_stack_6->SetBinContent(9,451.4247);
   VbbHcc_jets_nJet_stack_6->SetBinContent(10,83.73906);
   VbbHcc_jets_nJet_stack_6->SetBinContent(11,13.27633);
   VbbHcc_jets_nJet_stack_6->SetBinContent(12,1.464243);
   VbbHcc_jets_nJet_stack_6->SetBinContent(13,0.5952898);
   VbbHcc_jets_nJet_stack_6->SetBinError(1,394.1129);
   VbbHcc_jets_nJet_stack_6->SetBinError(2,491.7101);
   VbbHcc_jets_nJet_stack_6->SetBinError(3,472.9927);
   VbbHcc_jets_nJet_stack_6->SetBinError(4,354.711);
   VbbHcc_jets_nJet_stack_6->SetBinError(5,220.0001);
   VbbHcc_jets_nJet_stack_6->SetBinError(6,112.5924);
   VbbHcc_jets_nJet_stack_6->SetBinError(7,52.84087);
   VbbHcc_jets_nJet_stack_6->SetBinError(8,23.8306);
   VbbHcc_jets_nJet_stack_6->SetBinError(9,10.19172);
   VbbHcc_jets_nJet_stack_6->SetBinError(10,4.37265);
   VbbHcc_jets_nJet_stack_6->SetBinError(11,1.741241);
   VbbHcc_jets_nJet_stack_6->SetBinError(12,0.5675543);
   VbbHcc_jets_nJet_stack_6->SetBinError(13,0.354752);
   VbbHcc_jets_nJet_stack_6->SetEntries(1.537889e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_jets_nJet_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_6->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_6->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_6,"");
   
   TH1D *VbbHcc_jets_nJet_stack_7 = new TH1D("VbbHcc_jets_nJet_stack_7","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_7->SetBinContent(1,220005.2);
   VbbHcc_jets_nJet_stack_7->SetBinContent(2,362473.1);
   VbbHcc_jets_nJet_stack_7->SetBinContent(3,347604.4);
   VbbHcc_jets_nJet_stack_7->SetBinContent(4,202022.6);
   VbbHcc_jets_nJet_stack_7->SetBinContent(5,84768.68);
   VbbHcc_jets_nJet_stack_7->SetBinContent(6,23638.59);
   VbbHcc_jets_nJet_stack_7->SetBinContent(7,5457.666);
   VbbHcc_jets_nJet_stack_7->SetBinContent(8,1115.17);
   VbbHcc_jets_nJet_stack_7->SetBinContent(9,211.7918);
   VbbHcc_jets_nJet_stack_7->SetBinContent(10,35.73832);
   VbbHcc_jets_nJet_stack_7->SetBinContent(11,6.662024);
   VbbHcc_jets_nJet_stack_7->SetBinContent(12,1.649437);
   VbbHcc_jets_nJet_stack_7->SetBinContent(13,0.2845963);
   VbbHcc_jets_nJet_stack_7->SetBinError(1,192.7107);
   VbbHcc_jets_nJet_stack_7->SetBinError(2,247.4004);
   VbbHcc_jets_nJet_stack_7->SetBinError(3,242.3614);
   VbbHcc_jets_nJet_stack_7->SetBinError(4,184.7895);
   VbbHcc_jets_nJet_stack_7->SetBinError(5,119.7181);
   VbbHcc_jets_nJet_stack_7->SetBinError(6,63.12499);
   VbbHcc_jets_nJet_stack_7->SetBinError(7,30.29475);
   VbbHcc_jets_nJet_stack_7->SetBinError(8,13.66246);
   VbbHcc_jets_nJet_stack_7->SetBinError(9,5.95356);
   VbbHcc_jets_nJet_stack_7->SetBinError(10,2.441589);
   VbbHcc_jets_nJet_stack_7->SetBinError(11,1.028915);
   VbbHcc_jets_nJet_stack_7->SetBinError(12,0.5301737);
   VbbHcc_jets_nJet_stack_7->SetBinError(13,0.2073912);
   VbbHcc_jets_nJet_stack_7->SetEntries(7702296);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_jets_nJet_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_7->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_7->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_7,"");
   
   TH1D *VbbHcc_jets_nJet_stack_8 = new TH1D("VbbHcc_jets_nJet_stack_8","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_8->SetBinContent(1,100620);
   VbbHcc_jets_nJet_stack_8->SetBinContent(2,144975.3);
   VbbHcc_jets_nJet_stack_8->SetBinContent(3,151627.9);
   VbbHcc_jets_nJet_stack_8->SetBinContent(4,96240.95);
   VbbHcc_jets_nJet_stack_8->SetBinContent(5,42280.83);
   VbbHcc_jets_nJet_stack_8->SetBinContent(6,11272.7);
   VbbHcc_jets_nJet_stack_8->SetBinContent(7,2425.916);
   VbbHcc_jets_nJet_stack_8->SetBinContent(8,488.2676);
   VbbHcc_jets_nJet_stack_8->SetBinContent(9,87.42473);
   VbbHcc_jets_nJet_stack_8->SetBinContent(10,17.48322);
   VbbHcc_jets_nJet_stack_8->SetBinContent(11,2.597022);
   VbbHcc_jets_nJet_stack_8->SetBinContent(13,0.4288911);
   VbbHcc_jets_nJet_stack_8->SetBinError(1,147.8893);
   VbbHcc_jets_nJet_stack_8->SetBinError(2,177.4944);
   VbbHcc_jets_nJet_stack_8->SetBinError(3,181.7124);
   VbbHcc_jets_nJet_stack_8->SetBinError(4,144.8616);
   VbbHcc_jets_nJet_stack_8->SetBinError(5,96.04347);
   VbbHcc_jets_nJet_stack_8->SetBinError(6,49.53213);
   VbbHcc_jets_nJet_stack_8->SetBinError(7,22.98127);
   VbbHcc_jets_nJet_stack_8->SetBinError(8,10.30317);
   VbbHcc_jets_nJet_stack_8->SetBinError(9,4.302104);
   VbbHcc_jets_nJet_stack_8->SetBinError(10,1.917247);
   VbbHcc_jets_nJet_stack_8->SetBinError(11,0.7376752);
   VbbHcc_jets_nJet_stack_8->SetBinError(13,0.3073833);
   VbbHcc_jets_nJet_stack_8->SetEntries(2634912);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_jets_nJet_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_8->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_8->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_8,"");
   
   TH1D *VbbHcc_jets_nJet_stack_9 = new TH1D("VbbHcc_jets_nJet_stack_9","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_9->SetBinContent(1,728.6841);
   VbbHcc_jets_nJet_stack_9->SetBinContent(2,1817.046);
   VbbHcc_jets_nJet_stack_9->SetBinContent(3,3775.656);
   VbbHcc_jets_nJet_stack_9->SetBinContent(4,4881.89);
   VbbHcc_jets_nJet_stack_9->SetBinContent(5,3450.034);
   VbbHcc_jets_nJet_stack_9->SetBinContent(6,1295.547);
   VbbHcc_jets_nJet_stack_9->SetBinContent(7,414.9002);
   VbbHcc_jets_nJet_stack_9->SetBinContent(8,122.5856);
   VbbHcc_jets_nJet_stack_9->SetBinContent(9,33.78059);
   VbbHcc_jets_nJet_stack_9->SetBinContent(10,8.861768);
   VbbHcc_jets_nJet_stack_9->SetBinContent(11,2.264479);
   VbbHcc_jets_nJet_stack_9->SetBinContent(12,0.5493148);
   VbbHcc_jets_nJet_stack_9->SetBinContent(13,0.1304666);
   VbbHcc_jets_nJet_stack_9->SetBinContent(14,0.03236824);
   VbbHcc_jets_nJet_stack_9->SetBinContent(15,0.01016319);
   VbbHcc_jets_nJet_stack_9->SetBinError(1,1.260611);
   VbbHcc_jets_nJet_stack_9->SetBinError(2,1.935818);
   VbbHcc_jets_nJet_stack_9->SetBinError(3,2.754974);
   VbbHcc_jets_nJet_stack_9->SetBinError(4,3.110196);
   VbbHcc_jets_nJet_stack_9->SetBinError(5,2.594309);
   VbbHcc_jets_nJet_stack_9->SetBinError(6,1.567513);
   VbbHcc_jets_nJet_stack_9->SetBinError(7,0.8824885);
   VbbHcc_jets_nJet_stack_9->SetBinError(8,0.4782138);
   VbbHcc_jets_nJet_stack_9->SetBinError(9,0.2505737);
   VbbHcc_jets_nJet_stack_9->SetBinError(10,0.127836);
   VbbHcc_jets_nJet_stack_9->SetBinError(11,0.06460884);
   VbbHcc_jets_nJet_stack_9->SetBinError(12,0.0318661);
   VbbHcc_jets_nJet_stack_9->SetBinError(13,0.01569208);
   VbbHcc_jets_nJet_stack_9->SetBinError(14,0.007729775);
   VbbHcc_jets_nJet_stack_9->SetBinError(15,0.004241009);
   VbbHcc_jets_nJet_stack_9->SetEntries(9814626);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_jets_nJet_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_9->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_9->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_9,"");
   
   TH1D *VbbHcc_jets_nJet_stack_10 = new TH1D("VbbHcc_jets_nJet_stack_10","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_10->SetBinContent(1,5.225075);
   VbbHcc_jets_nJet_stack_10->SetBinContent(2,44.98504);
   VbbHcc_jets_nJet_stack_10->SetBinContent(3,224.9511);
   VbbHcc_jets_nJet_stack_10->SetBinContent(4,551.0572);
   VbbHcc_jets_nJet_stack_10->SetBinContent(5,680.2396);
   VbbHcc_jets_nJet_stack_10->SetBinContent(6,421.7644);
   VbbHcc_jets_nJet_stack_10->SetBinContent(7,173.1077);
   VbbHcc_jets_nJet_stack_10->SetBinContent(8,55.72863);
   VbbHcc_jets_nJet_stack_10->SetBinContent(9,15.21086);
   VbbHcc_jets_nJet_stack_10->SetBinContent(10,3.732488);
   VbbHcc_jets_nJet_stack_10->SetBinContent(11,0.8577502);
   VbbHcc_jets_nJet_stack_10->SetBinContent(12,0.1881563);
   VbbHcc_jets_nJet_stack_10->SetBinContent(13,0.03496506);
   VbbHcc_jets_nJet_stack_10->SetBinContent(14,0.009110245);
   VbbHcc_jets_nJet_stack_10->SetBinContent(15,0.0008601192);
   VbbHcc_jets_nJet_stack_10->SetBinError(1,0.04746917);
   VbbHcc_jets_nJet_stack_10->SetBinError(2,0.1398054);
   VbbHcc_jets_nJet_stack_10->SetBinError(3,0.3153702);
   VbbHcc_jets_nJet_stack_10->SetBinError(4,0.4953975);
   VbbHcc_jets_nJet_stack_10->SetBinError(5,0.5508855);
   VbbHcc_jets_nJet_stack_10->SetBinError(6,0.4334713);
   VbbHcc_jets_nJet_stack_10->SetBinError(7,0.2774045);
   VbbHcc_jets_nJet_stack_10->SetBinError(8,0.1571907);
   VbbHcc_jets_nJet_stack_10->SetBinError(9,0.0820263);
   VbbHcc_jets_nJet_stack_10->SetBinError(10,0.04057864);
   VbbHcc_jets_nJet_stack_10->SetBinError(11,0.01945918);
   VbbHcc_jets_nJet_stack_10->SetBinError(12,0.009073303);
   VbbHcc_jets_nJet_stack_10->SetBinError(13,0.003893344);
   VbbHcc_jets_nJet_stack_10->SetBinError(14,0.001987419);
   VbbHcc_jets_nJet_stack_10->SetBinError(15,0.0006082013);
   VbbHcc_jets_nJet_stack_10->SetEntries(4977633);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_jets_nJet_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_10->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_10->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_10,"");
   
   TH1D *VbbHcc_jets_nJet_stack_11 = new TH1D("VbbHcc_jets_nJet_stack_11","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_11->SetBinContent(1,27.65204);
   VbbHcc_jets_nJet_stack_11->SetBinContent(2,70.83744);
   VbbHcc_jets_nJet_stack_11->SetBinContent(3,152.9184);
   VbbHcc_jets_nJet_stack_11->SetBinContent(4,214.2052);
   VbbHcc_jets_nJet_stack_11->SetBinContent(5,162.4626);
   VbbHcc_jets_nJet_stack_11->SetBinContent(6,62.26793);
   VbbHcc_jets_nJet_stack_11->SetBinContent(7,20.09871);
   VbbHcc_jets_nJet_stack_11->SetBinContent(8,6.180149);
   VbbHcc_jets_nJet_stack_11->SetBinContent(9,1.650179);
   VbbHcc_jets_nJet_stack_11->SetBinContent(10,0.3915146);
   VbbHcc_jets_nJet_stack_11->SetBinContent(11,0.1216632);
   VbbHcc_jets_nJet_stack_11->SetBinContent(12,0.0253551);
   VbbHcc_jets_nJet_stack_11->SetBinContent(13,0.009327633);
   VbbHcc_jets_nJet_stack_11->SetBinError(1,0.2361144);
   VbbHcc_jets_nJet_stack_11->SetBinError(2,0.3703217);
   VbbHcc_jets_nJet_stack_11->SetBinError(3,0.536431);
   VbbHcc_jets_nJet_stack_11->SetBinError(4,0.6306065);
   VbbHcc_jets_nJet_stack_11->SetBinError(5,0.5454039);
   VbbHcc_jets_nJet_stack_11->SetBinError(6,0.3326931);
   VbbHcc_jets_nJet_stack_11->SetBinError(7,0.1876949);
   VbbHcc_jets_nJet_stack_11->SetBinError(8,0.1040305);
   VbbHcc_jets_nJet_stack_11->SetBinError(9,0.0533637);
   VbbHcc_jets_nJet_stack_11->SetBinError(10,0.02571355);
   VbbHcc_jets_nJet_stack_11->SetBinError(11,0.01466117);
   VbbHcc_jets_nJet_stack_11->SetBinError(12,0.006862831);
   VbbHcc_jets_nJet_stack_11->SetBinError(13,0.004138877);
   VbbHcc_jets_nJet_stack_11->SetEntries(495304);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nJet_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_11->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_11->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_11,"");
   
   TH1D *VbbHcc_jets_nJet_stack_12 = new TH1D("VbbHcc_jets_nJet_stack_12","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_12->SetBinContent(1,4410.01);
   VbbHcc_jets_nJet_stack_12->SetBinContent(2,37676.93);
   VbbHcc_jets_nJet_stack_12->SetBinContent(3,193337);
   VbbHcc_jets_nJet_stack_12->SetBinContent(4,515620.3);
   VbbHcc_jets_nJet_stack_12->SetBinContent(5,685038.3);
   VbbHcc_jets_nJet_stack_12->SetBinContent(6,432064.2);
   VbbHcc_jets_nJet_stack_12->SetBinContent(7,175569.7);
   VbbHcc_jets_nJet_stack_12->SetBinContent(8,54495.99);
   VbbHcc_jets_nJet_stack_12->SetBinContent(9,14610.96);
   VbbHcc_jets_nJet_stack_12->SetBinContent(10,3350.297);
   VbbHcc_jets_nJet_stack_12->SetBinContent(11,732.9088);
   VbbHcc_jets_nJet_stack_12->SetBinContent(12,141.577);
   VbbHcc_jets_nJet_stack_12->SetBinContent(13,21.77896);
   VbbHcc_jets_nJet_stack_12->SetBinError(1,146.479);
   VbbHcc_jets_nJet_stack_12->SetBinError(2,431.1835);
   VbbHcc_jets_nJet_stack_12->SetBinError(3,994.5399);
   VbbHcc_jets_nJet_stack_12->SetBinError(4,1636.894);
   VbbHcc_jets_nJet_stack_12->SetBinError(5,1889.299);
   VbbHcc_jets_nJet_stack_12->SetBinError(6,1498.589);
   VbbHcc_jets_nJet_stack_12->SetBinError(7,953.4224);
   VbbHcc_jets_nJet_stack_12->SetBinError(8,529.7411);
   VbbHcc_jets_nJet_stack_12->SetBinError(9,273.4168);
   VbbHcc_jets_nJet_stack_12->SetBinError(10,130.6577);
   VbbHcc_jets_nJet_stack_12->SetBinError(11,61.60642);
   VbbHcc_jets_nJet_stack_12->SetBinError(12,25.94386);
   VbbHcc_jets_nJet_stack_12->SetBinError(13,9.552511);
   VbbHcc_jets_nJet_stack_12->SetEntries(465395);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nJet_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_12->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_12->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_jets_nJet__11 = new TH1D("VbbHcc_jets_nJet__11","",14,-0.5,13.5);
   VbbHcc_jets_nJet__11->SetBinContent(1,4.153501e+07);
   VbbHcc_jets_nJet__11->SetBinContent(2,3.977265e+07);
   VbbHcc_jets_nJet__11->SetBinContent(3,6.270998e+07);
   VbbHcc_jets_nJet__11->SetBinContent(4,5.924927e+07);
   VbbHcc_jets_nJet__11->SetBinContent(5,4.187226e+07);
   VbbHcc_jets_nJet__11->SetBinContent(6,2.517285e+07);
   VbbHcc_jets_nJet__11->SetBinContent(7,1.808156e+07);
   VbbHcc_jets_nJet__11->SetBinContent(8,9228620);
   VbbHcc_jets_nJet__11->SetBinContent(9,3450770);
   VbbHcc_jets_nJet__11->SetBinContent(10,1065511);
   VbbHcc_jets_nJet__11->SetBinContent(11,293441);
   VbbHcc_jets_nJet__11->SetBinContent(12,75370);
   VbbHcc_jets_nJet__11->SetBinContent(13,18555);
   VbbHcc_jets_nJet__11->SetBinContent(14,4410);
   VbbHcc_jets_nJet__11->SetBinContent(15,1393);
   VbbHcc_jets_nJet__11->SetEntries(3.025317e+08);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet__11->SetLineColor(ci);
   VbbHcc_jets_nJet__11->SetLineWidth(2);
   VbbHcc_jets_nJet__11->SetMarkerStyle(20);
   VbbHcc_jets_nJet__11->SetMarkerSize(1.2);
   VbbHcc_jets_nJet__11->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet__11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet__11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet__11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet__11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet__11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet__11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet__11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet__11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_nJet__11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet__11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet__11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_nJet__11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_nJet__11->GetZaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet__11->Draw("same E");
   
   Double_t Graph_from_VbbHcc_jets_nJet_fx1011[14] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13};
   Double_t Graph_from_VbbHcc_jets_nJet_fy1011[14] = {
   1.1982e+09,
   1.092949e+10,
   3.099013e+10,
   2.128855e+10,
   6.208652e+09,
   9.521918e+08,
   1.169607e+08,
   1.345891e+07,
   1704995,
   278809.6,
   48332.13,
   12799.69,
   2265.585,
   485.0698};
   Double_t Graph_from_VbbHcc_jets_nJet_fex1011[14] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_VbbHcc_jets_nJet_fey1011[14] = {
   1209982,
   3717001,
   6358445,
   5282730,
   2851253,
   1110590,
   382224.8,
   122737.3,
   37932.68,
   12108.31,
   2960.08,
   1947.218,
   16.99043,
   6.459174};
   TGraphErrors *gre = new TGraphErrors(14,Graph_from_VbbHcc_jets_nJet_fx1011,Graph_from_VbbHcc_jets_nJet_fy1011,Graph_from_VbbHcc_jets_nJet_fex1011,Graph_from_VbbHcc_jets_nJet_fey1011);
   gre->SetName("Graph_from_VbbHcc_jets_nJet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_jets_nJet1011 = new TH1F("Graph_Graph_from_VbbHcc_jets_nJet1011","",100,-1.9,14.9);
   Graph_Graph_from_VbbHcc_jets_nJet1011->SetMinimum(430.7496);
   Graph_Graph_from_VbbHcc_jets_nJet1011->SetMaximum(3.409614e+10);
   Graph_Graph_from_VbbHcc_jets_nJet1011->SetDirectory(0);
   Graph_Graph_from_VbbHcc_jets_nJet1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_jets_nJet1011->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_jets_nJet1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet1011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet1011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1011->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_jets_nJet1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_jets_nJet1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_jets_nJet1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_jets_nJet1011);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_jets_nJet","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   jets_nJet_VbbHcc_other_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-2.645156,-0.2774193,14.23387,1.658065);
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
   
   TH1D *data_mc_ratio__12 = new TH1D("data_mc_ratio__12","",14,-0.5,13.5);
   data_mc_ratio__12->SetBinContent(1,0.03466449);
   data_mc_ratio__12->SetBinContent(2,0.003639021);
   data_mc_ratio__12->SetBinContent(3,0.002023547);
   data_mc_ratio__12->SetBinContent(4,0.002783152);
   data_mc_ratio__12->SetBinContent(5,0.00674418);
   data_mc_ratio__12->SetBinContent(6,0.02643674);
   data_mc_ratio__12->SetBinContent(7,0.1545951);
   data_mc_ratio__12->SetBinContent(8,0.6856884);
   data_mc_ratio__12->SetBinContent(9,2.023918);
   data_mc_ratio__12->SetBinContent(10,3.821644);
   data_mc_ratio__12->SetBinContent(11,6.071344);
   data_mc_ratio__12->SetBinContent(12,5.888423);
   data_mc_ratio__12->SetBinContent(13,8.189938);
   data_mc_ratio__12->SetBinContent(14,9.091474);
   data_mc_ratio__12->SetBinContent(15,11.35396);
   data_mc_ratio__12->SetBinError(1,5.378705e-06);
   data_mc_ratio__12->SetBinError(2,5.770218e-07);
   data_mc_ratio__12->SetBinError(3,2.555318e-07);
   data_mc_ratio__12->SetBinError(4,3.615725e-07);
   data_mc_ratio__12->SetBinError(5,1.042236e-06);
   data_mc_ratio__12->SetBinError(6,5.269164e-06);
   data_mc_ratio__12->SetBinError(7,3.635615e-05);
   data_mc_ratio__12->SetBinError(8,0.000225714);
   data_mc_ratio__12->SetBinError(9,0.001089519);
   data_mc_ratio__12->SetBinError(10,0.003702297);
   data_mc_ratio__12->SetBinError(11,0.01120791);
   data_mc_ratio__12->SetBinError(12,0.02144864);
   data_mc_ratio__12->SetBinError(13,0.06012431);
   data_mc_ratio__12->SetBinError(14,0.1369036);
   data_mc_ratio__12->SetBinError(15,0.4203765);
   data_mc_ratio__12->SetMinimum(0.4);
   data_mc_ratio__12->SetMaximum(1.6);
   data_mc_ratio__12->SetEntries(1281.21);
   data_mc_ratio__12->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__12->SetLineColor(ci);
   data_mc_ratio__12->SetLineWidth(2);
   data_mc_ratio__12->SetMarkerStyle(20);
   data_mc_ratio__12->SetMarkerSize(1.2);
   data_mc_ratio__12->GetXaxis()->SetTitle("Jet multiplicity");
   data_mc_ratio__12->GetXaxis()->SetRange(1,14);
   data_mc_ratio__12->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__12->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__12->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__12->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__12->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__12->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__12->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__12->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__12->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__12->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__12->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__12->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__12->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__12->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__12->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__12->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__12->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1012[14] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13};
   Double_t Graph_from_mc_statistical_error_fy1012[14] = {
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
   Double_t Graph_from_mc_statistical_error_fex1012[14] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_mc_statistical_error_fey1012[14] = {
   0.001009833,
   0.000340089,
   0.0002051764,
   0.0002481489,
   0.0004592387,
   0.001166351,
   0.003267976,
   0.009119405,
   0.02224796,
   0.04342859,
   0.06124455,
   0.1521301,
   0.007499356,
   0.01331597};
   gre = new TGraphErrors(14,Graph_from_mc_statistical_error_fx1012,Graph_from_mc_statistical_error_fy1012,Graph_from_mc_statistical_error_fex1012,Graph_from_mc_statistical_error_fey1012);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1012 = new TH1F("Graph_Graph_from_mc_statistical_error1012","",100,-1.9,14.9);
   Graph_Graph_from_mc_statistical_error1012->SetMinimum(0.8174439);
   Graph_Graph_from_mc_statistical_error1012->SetMaximum(1.182556);
   Graph_Graph_from_mc_statistical_error1012->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1012->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1012);
   
   gre->Draw("e2");
   TLine *line = new TLine(-0.5,1,13.5,1);
   line->Draw();
   bottomPad->Modified();
   jets_nJet_VbbHcc_other_17->cd();
   jets_nJet_VbbHcc_other_17->Modified();
   jets_nJet_VbbHcc_other_17->cd();
   jets_nJet_VbbHcc_other_17->SetSelected(jets_nJet_VbbHcc_other_17);
}
