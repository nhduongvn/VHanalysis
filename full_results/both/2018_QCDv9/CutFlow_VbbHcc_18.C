void CutFlow_VbbHcc_18()
{
//=========Macro generated from canvas: CutFlow_VbbHcc_18/CutFlow_VbbHcc_18
//=========  (Mon Nov 21 13:07:02 2022) by ROOT version 6.14/09
   TCanvas *CutFlow_VbbHcc_18 = new TCanvas("CutFlow_VbbHcc_18", "CutFlow_VbbHcc_18",0,0,600,600);
   CutFlow_VbbHcc_18->SetHighLightColor(2);
   CutFlow_VbbHcc_18->Range(0,0,1,1);
   CutFlow_VbbHcc_18->SetFillColor(0);
   CutFlow_VbbHcc_18->SetFillStyle(4000);
   CutFlow_VbbHcc_18->SetBorderMode(0);
   CutFlow_VbbHcc_18->SetBorderSize(2);
   CutFlow_VbbHcc_18->SetFrameFillStyle(1000);
   CutFlow_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-3.183384,6.314516,28.32132);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(2.361895e+24);
   
   TH1F *st_stack_35 = new TH1F("st_stack_35","",5,0,5);
   st_stack_35->SetMinimum(0.000704889);
   st_stack_35->SetMaximum(1.482007e+25);
   st_stack_35->SetDirectory(0);
   st_stack_35->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_35->SetLineColor(ci);
   st_stack_35->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_35->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_35->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_35->GetXaxis()->SetBinLabel(4,"b-tags");
   st_stack_35->GetXaxis()->SetBinLabel(5,"c-tags");
   st_stack_35->GetXaxis()->SetRange(1,6);
   st_stack_35->GetXaxis()->SetLabelFont(42);
   st_stack_35->GetXaxis()->SetLabelSize(0.035);
   st_stack_35->GetXaxis()->SetTitleSize(0.035);
   st_stack_35->GetXaxis()->SetTitleFont(42);
   st_stack_35->GetYaxis()->SetTitle("Events/1.0");
   st_stack_35->GetYaxis()->SetLabelFont(42);
   st_stack_35->GetYaxis()->SetLabelSize(0.05);
   st_stack_35->GetYaxis()->SetTitleSize(0.057);
   st_stack_35->GetYaxis()->SetTitleOffset(1.2);
   st_stack_35->GetYaxis()->SetTitleFont(42);
   st_stack_35->GetZaxis()->SetLabelFont(42);
   st_stack_35->GetZaxis()->SetLabelSize(0.035);
   st_stack_35->GetZaxis()->SetTitleSize(0.035);
   st_stack_35->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_35);
   
   
   TH1D *VbbHcc_duong_CutFlow_stack_1 = new TH1D("VbbHcc_duong_CutFlow_stack_1","",5,0,5);
   VbbHcc_duong_CutFlow_stack_1->SetBinContent(1,9.278934e+10);
   VbbHcc_duong_CutFlow_stack_1->SetBinContent(2,9.278075e+10);
   VbbHcc_duong_CutFlow_stack_1->SetBinContent(3,9.096041e+09);
   VbbHcc_duong_CutFlow_stack_1->SetBinContent(4,2.486858e+07);
   VbbHcc_duong_CutFlow_stack_1->SetBinContent(5,2.486858e+07);
   VbbHcc_duong_CutFlow_stack_1->SetBinError(1,1.182801e+07);
   VbbHcc_duong_CutFlow_stack_1->SetBinError(2,1.182746e+07);
   VbbHcc_duong_CutFlow_stack_1->SetBinError(3,3703298);
   VbbHcc_duong_CutFlow_stack_1->SetBinError(4,193636.8);
   VbbHcc_duong_CutFlow_stack_1->SetBinError(5,193636.8);
   VbbHcc_duong_CutFlow_stack_1->SetEntries(1.291446e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_2 = new TH1D("VbbHcc_duong_CutFlow_stack_2","",5,0,5);
   VbbHcc_duong_CutFlow_stack_2->SetBinContent(1,1.723649e+07);
   VbbHcc_duong_CutFlow_stack_2->SetBinContent(2,1.687543e+07);
   VbbHcc_duong_CutFlow_stack_2->SetBinContent(3,3908194);
   VbbHcc_duong_CutFlow_stack_2->SetBinContent(4,274484.5);
   VbbHcc_duong_CutFlow_stack_2->SetBinContent(5,274484.5);
   VbbHcc_duong_CutFlow_stack_2->SetBinError(1,1373.002);
   VbbHcc_duong_CutFlow_stack_2->SetBinError(2,1349.898);
   VbbHcc_duong_CutFlow_stack_2->SetBinError(3,768.8912);
   VbbHcc_duong_CutFlow_stack_2->SetBinError(4,206.7337);
   VbbHcc_duong_CutFlow_stack_2->SetBinError(5,206.7337);
   VbbHcc_duong_CutFlow_stack_2->SetEntries(6.204986e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_2,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_3 = new TH1D("VbbHcc_duong_CutFlow_stack_3","",5,0,5);
   VbbHcc_duong_CutFlow_stack_3->SetBinContent(1,4.964886e+07);
   VbbHcc_duong_CutFlow_stack_3->SetBinContent(2,4.710352e+07);
   VbbHcc_duong_CutFlow_stack_3->SetBinContent(3,2.905504e+07);
   VbbHcc_duong_CutFlow_stack_3->SetBinContent(4,4056129);
   VbbHcc_duong_CutFlow_stack_3->SetBinContent(5,4056129);
   VbbHcc_duong_CutFlow_stack_3->SetBinError(1,1671.907);
   VbbHcc_duong_CutFlow_stack_3->SetBinError(2,1636.591);
   VbbHcc_duong_CutFlow_stack_3->SetBinError(3,1327.347);
   VbbHcc_duong_CutFlow_stack_3->SetBinError(4,503.4205);
   VbbHcc_duong_CutFlow_stack_3->SetBinError(5,503.4205);
   VbbHcc_duong_CutFlow_stack_3->SetEntries(2.464825e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_CutFlow_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_3->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_3,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_4 = new TH1D("VbbHcc_duong_CutFlow_stack_4","",5,0,5);
   VbbHcc_duong_CutFlow_stack_4->SetBinContent(1,6818882);
   VbbHcc_duong_CutFlow_stack_4->SetBinContent(2,6808645);
   VbbHcc_duong_CutFlow_stack_4->SetBinContent(3,3445178);
   VbbHcc_duong_CutFlow_stack_4->SetBinContent(4,66262.79);
   VbbHcc_duong_CutFlow_stack_4->SetBinContent(5,66262.79);
   VbbHcc_duong_CutFlow_stack_4->SetBinError(1,1826.965);
   VbbHcc_duong_CutFlow_stack_4->SetBinError(2,1825.593);
   VbbHcc_duong_CutFlow_stack_4->SetBinError(3,1298.612);
   VbbHcc_duong_CutFlow_stack_4->SetBinError(4,180.0978);
   VbbHcc_duong_CutFlow_stack_4->SetBinError(5,180.0978);
   VbbHcc_duong_CutFlow_stack_4->SetEntries(3.514902e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_CutFlow_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_4->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_4,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_5 = new TH1D("VbbHcc_duong_CutFlow_stack_5","",5,0,5);
   VbbHcc_duong_CutFlow_stack_5->SetBinContent(1,1.650982e+07);
   VbbHcc_duong_CutFlow_stack_5->SetBinContent(2,1.648927e+07);
   VbbHcc_duong_CutFlow_stack_5->SetBinContent(3,8186633);
   VbbHcc_duong_CutFlow_stack_5->SetBinContent(4,38115.1);
   VbbHcc_duong_CutFlow_stack_5->SetBinContent(5,38115.1);
   VbbHcc_duong_CutFlow_stack_5->SetBinError(1,5984.41);
   VbbHcc_duong_CutFlow_stack_5->SetBinError(2,5980.685);
   VbbHcc_duong_CutFlow_stack_5->SetBinError(3,4214.081);
   VbbHcc_duong_CutFlow_stack_5->SetBinError(4,287.5403);
   VbbHcc_duong_CutFlow_stack_5->SetBinError(5,287.5403);
   VbbHcc_duong_CutFlow_stack_5->SetEntries(1.902169e+07);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_CutFlow_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_5->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_5,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_6 = new TH1D("VbbHcc_duong_CutFlow_stack_6","",5,0,5);
   VbbHcc_duong_CutFlow_stack_6->SetBinContent(1,4531989);
   VbbHcc_duong_CutFlow_stack_6->SetBinContent(2,4458452);
   VbbHcc_duong_CutFlow_stack_6->SetBinContent(3,348710.5);
   VbbHcc_duong_CutFlow_stack_6->SetBinContent(4,1217.731);
   VbbHcc_duong_CutFlow_stack_6->SetBinContent(5,1217.731);
   VbbHcc_duong_CutFlow_stack_6->SetBinError(1,1221.787);
   VbbHcc_duong_CutFlow_stack_6->SetBinError(2,1211.834);
   VbbHcc_duong_CutFlow_stack_6->SetBinError(3,338.9093);
   VbbHcc_duong_CutFlow_stack_6->SetBinError(4,20.0275);
   VbbHcc_duong_CutFlow_stack_6->SetBinError(5,20.0275);
   VbbHcc_duong_CutFlow_stack_6->SetEntries(2.836082e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_CutFlow_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_6->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_6,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_7 = new TH1D("VbbHcc_duong_CutFlow_stack_7","",5,0,5);
   VbbHcc_duong_CutFlow_stack_7->SetBinContent(1,1646205);
   VbbHcc_duong_CutFlow_stack_7->SetBinContent(2,1607420);
   VbbHcc_duong_CutFlow_stack_7->SetBinContent(3,146933.3);
   VbbHcc_duong_CutFlow_stack_7->SetBinContent(4,2300.747);
   VbbHcc_duong_CutFlow_stack_7->SetBinContent(5,2300.747);
   VbbHcc_duong_CutFlow_stack_7->SetBinError(1,584.2162);
   VbbHcc_duong_CutFlow_stack_7->SetBinError(2,577.2932);
   VbbHcc_duong_CutFlow_stack_7->SetBinError(3,174.5387);
   VbbHcc_duong_CutFlow_stack_7->SetBinError(4,21.84068);
   VbbHcc_duong_CutFlow_stack_7->SetBinError(5,21.84068);
   VbbHcc_duong_CutFlow_stack_7->SetEntries(1.642382e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_CutFlow_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_7->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_7,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_8 = new TH1D("VbbHcc_duong_CutFlow_stack_8","",5,0,5);
   VbbHcc_duong_CutFlow_stack_8->SetBinContent(1,726670.7);
   VbbHcc_duong_CutFlow_stack_8->SetBinContent(2,707562.1);
   VbbHcc_duong_CutFlow_stack_8->SetBinContent(3,71613.34);
   VbbHcc_duong_CutFlow_stack_8->SetBinContent(4,2219.581);
   VbbHcc_duong_CutFlow_stack_8->SetBinContent(5,2219.581);
   VbbHcc_duong_CutFlow_stack_8->SetBinError(1,386.9871);
   VbbHcc_duong_CutFlow_stack_8->SetBinError(2,381.8651);
   VbbHcc_duong_CutFlow_stack_8->SetBinError(3,121.4855);
   VbbHcc_duong_CutFlow_stack_8->SetBinError(4,21.38766);
   VbbHcc_duong_CutFlow_stack_8->SetBinError(5,21.38766);
   VbbHcc_duong_CutFlow_stack_8->SetEntries(7328307);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_CutFlow_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_8->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_8,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_9 = new TH1D("VbbHcc_duong_CutFlow_stack_9","",5,0,5);
   VbbHcc_duong_CutFlow_stack_9->SetBinContent(1,21460.37);
   VbbHcc_duong_CutFlow_stack_9->SetBinContent(2,21425);
   VbbHcc_duong_CutFlow_stack_9->SetBinContent(3,6802.672);
   VbbHcc_duong_CutFlow_stack_9->SetBinContent(4,789.8988);
   VbbHcc_duong_CutFlow_stack_9->SetBinContent(5,789.8988);
   VbbHcc_duong_CutFlow_stack_9->SetBinError(1,7.224385);
   VbbHcc_duong_CutFlow_stack_9->SetBinError(2,7.218542);
   VbbHcc_duong_CutFlow_stack_9->SetBinError(3,3.991838);
   VbbHcc_duong_CutFlow_stack_9->SetBinError(4,1.359577);
   VbbHcc_duong_CutFlow_stack_9->SetBinError(5,1.359577);
   VbbHcc_duong_CutFlow_stack_9->SetEntries(2.371978e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_CutFlow_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_9->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_9,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_10 = new TH1D("VbbHcc_duong_CutFlow_stack_10","",5,0,5);
   VbbHcc_duong_CutFlow_stack_10->SetBinContent(1,2980.723);
   VbbHcc_duong_CutFlow_stack_10->SetBinContent(2,2967.389);
   VbbHcc_duong_CutFlow_stack_10->SetBinContent(3,1837.606);
   VbbHcc_duong_CutFlow_stack_10->SetBinContent(4,241.0779);
   VbbHcc_duong_CutFlow_stack_10->SetBinContent(5,241.0779);
   VbbHcc_duong_CutFlow_stack_10->SetBinError(1,1.33302);
   VbbHcc_duong_CutFlow_stack_10->SetBinError(2,1.330035);
   VbbHcc_duong_CutFlow_stack_10->SetBinError(3,1.046651);
   VbbHcc_duong_CutFlow_stack_10->SetBinError(4,0.3791007);
   VbbHcc_duong_CutFlow_stack_10->SetBinError(5,0.3791007);
   VbbHcc_duong_CutFlow_stack_10->SetEntries(1.386891e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_CutFlow_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_10->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_10,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_11 = new TH1D("VbbHcc_duong_CutFlow_stack_11","",5,0,5);
   VbbHcc_duong_CutFlow_stack_11->SetBinContent(1,1065.823);
   VbbHcc_duong_CutFlow_stack_11->SetBinContent(2,1064.704);
   VbbHcc_duong_CutFlow_stack_11->SetBinContent(3,374.8702);
   VbbHcc_duong_CutFlow_stack_11->SetBinContent(4,15.26256);
   VbbHcc_duong_CutFlow_stack_11->SetBinContent(5,15.26256);
   VbbHcc_duong_CutFlow_stack_11->SetBinError(1,1.622075);
   VbbHcc_duong_CutFlow_stack_11->SetBinError(2,1.621259);
   VbbHcc_duong_CutFlow_stack_11->SetBinError(3,0.9449904);
   VbbHcc_duong_CutFlow_stack_11->SetBinError(4,0.1907613);
   VbbHcc_duong_CutFlow_stack_11->SetBinError(5,0.1907613);
   VbbHcc_duong_CutFlow_stack_11->SetEntries(1153216);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_CutFlow_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_11->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_11,"");
   
   TH1D *VbbHcc_duong_CutFlow_stack_12 = new TH1D("VbbHcc_duong_CutFlow_stack_12","",5,0,5);
   VbbHcc_duong_CutFlow_stack_12->SetBinContent(1,3153091);
   VbbHcc_duong_CutFlow_stack_12->SetBinContent(2,3143066);
   VbbHcc_duong_CutFlow_stack_12->SetBinContent(3,2058662);
   VbbHcc_duong_CutFlow_stack_12->SetBinContent(4,103321.4);
   VbbHcc_duong_CutFlow_stack_12->SetBinContent(5,103321.4);
   VbbHcc_duong_CutFlow_stack_12->SetBinError(1,4465.848);
   VbbHcc_duong_CutFlow_stack_12->SetBinError(2,4458.743);
   VbbHcc_duong_CutFlow_stack_12->SetBinError(3,3608.512);
   VbbHcc_duong_CutFlow_stack_12->SetBinError(4,808.4086);
   VbbHcc_duong_CutFlow_stack_12->SetBinError(5,808.4086);
   VbbHcc_duong_CutFlow_stack_12->SetEntries(1353557);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_CutFlow_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow_stack_12->SetLineColor(ci);
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_CutFlow_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_CutFlow__69 = new TH1D("VbbHcc_duong_CutFlow__69","",5,0,5);
   VbbHcc_duong_CutFlow__69->SetBinContent(1,6.348219e+08);
   VbbHcc_duong_CutFlow__69->SetBinContent(2,6.199315e+08);
   VbbHcc_duong_CutFlow__69->SetBinContent(3,2.514592e+08);
   VbbHcc_duong_CutFlow__69->SetBinContent(4,1.338585e+07);
   VbbHcc_duong_CutFlow__69->SetBinContent(5,1.338585e+07);
   VbbHcc_duong_CutFlow__69->SetEntries(1.532984e+09);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_CutFlow__69->SetLineColor(ci);
   VbbHcc_duong_CutFlow__69->SetLineWidth(2);
   VbbHcc_duong_CutFlow__69->SetMarkerStyle(20);
   VbbHcc_duong_CutFlow__69->SetMarkerSize(1.2);
   VbbHcc_duong_CutFlow__69->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_duong_CutFlow__69->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_duong_CutFlow__69->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_duong_CutFlow__69->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_duong_CutFlow__69->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_duong_CutFlow__69->GetXaxis()->SetRange(1,5);
   VbbHcc_duong_CutFlow__69->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow__69->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow__69->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow__69->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow__69->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow__69->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow__69->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow__69->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_CutFlow__69->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow__69->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_CutFlow__69->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_CutFlow__69->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_CutFlow__69->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_CutFlow__69->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_CutFlow_fx1069[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t Graph_from_VbbHcc_duong_CutFlow_fy1069[5] = {
   9.288964e+10,
   9.287797e+10,
   9.143271e+09,
   2.941368e+07,
   2.941368e+07};
   Double_t Graph_from_VbbHcc_duong_CutFlow_fex1069[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_VbbHcc_duong_CutFlow_fey1069[5] = {
   1.182801e+07,
   1.182746e+07,
   3703303,
   193639.6,
   193639.6};
   TGraphErrors *gre = new TGraphErrors(5,Graph_from_VbbHcc_duong_CutFlow_fx1069,Graph_from_VbbHcc_duong_CutFlow_fy1069,Graph_from_VbbHcc_duong_CutFlow_fex1069,Graph_from_VbbHcc_duong_CutFlow_fey1069);
   gre->SetName("Graph_from_VbbHcc_duong_CutFlow");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_CutFlow1069 = new TH1F("Graph_Graph_from_VbbHcc_duong_CutFlow1069","",100,0,5.5);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->SetMinimum(2.629803e+07);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->SetMaximum(1.021887e+11);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_CutFlow1069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_CutFlow1069);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_CutFlow","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_CutFlow_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_CutFlow","MC unc. (stat.)","fl");

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
   CutFlow_VbbHcc_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__70 = new TH1D("data_mc_ratio__70","",5,0,5);
   data_mc_ratio__70->SetBinContent(1,0.006834152);
   data_mc_ratio__70->SetBinContent(2,0.006674688);
   data_mc_ratio__70->SetBinContent(3,0.02750211);
   data_mc_ratio__70->SetBinContent(4,0.4550895);
   data_mc_ratio__70->SetBinContent(5,0.4550895);
   data_mc_ratio__70->SetBinError(1,2.712431e-07);
   data_mc_ratio__70->SetBinError(2,2.680767e-07);
   data_mc_ratio__70->SetBinError(3,1.734332e-06);
   data_mc_ratio__70->SetBinError(4,0.0001243866);
   data_mc_ratio__70->SetBinError(5,0.0001243866);
   data_mc_ratio__70->SetMinimum(0.4);
   data_mc_ratio__70->SetMaximum(1.6);
   data_mc_ratio__70->SetEntries(50311.83);
   data_mc_ratio__70->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__70->SetLineColor(ci);
   data_mc_ratio__70->SetLineWidth(2);
   data_mc_ratio__70->SetMarkerStyle(20);
   data_mc_ratio__70->SetMarkerSize(1.2);
   data_mc_ratio__70->GetXaxis()->SetTitle(""Cut flow"");
   data_mc_ratio__70->GetXaxis()->SetBinLabel(1,"Total");
   data_mc_ratio__70->GetXaxis()->SetBinLabel(2,"MET cut");
   data_mc_ratio__70->GetXaxis()->SetBinLabel(3,"jet cuts");
   data_mc_ratio__70->GetXaxis()->SetBinLabel(4,"b-tags");
   data_mc_ratio__70->GetXaxis()->SetBinLabel(5,"c-tags");
   data_mc_ratio__70->GetXaxis()->SetRange(1,6);
   data_mc_ratio__70->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__70->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__70->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__70->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__70->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__70->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__70->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__70->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__70->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__70->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__70->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__70->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__70->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__70->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__70->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__70->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__70->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1070[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t Graph_from_mc_statistical_error_fy1070[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1070[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_mc_statistical_error_fey1070[5] = {
   0.000127334,
   0.0001273441,
   0.0004050304,
   0.006583318,
   0.006583318};
   gre = new TGraphErrors(5,Graph_from_mc_statistical_error_fx1070,Graph_from_mc_statistical_error_fy1070,Graph_from_mc_statistical_error_fex1070,Graph_from_mc_statistical_error_fey1070);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1070 = new TH1F("Graph_Graph_from_mc_statistical_error1070","",100,0,5.5);
   Graph_Graph_from_mc_statistical_error1070->SetMinimum(0.9921);
   Graph_Graph_from_mc_statistical_error1070->SetMaximum(1.0079);
   Graph_Graph_from_mc_statistical_error1070->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1070->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1070->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1070);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,7,1);
   line->Draw();
   bottomPad->Modified();
   CutFlow_VbbHcc_18->cd();
   CutFlow_VbbHcc_18->Modified();
   CutFlow_VbbHcc_18->cd();
   CutFlow_VbbHcc_18->SetSelected(CutFlow_VbbHcc_18);
}
