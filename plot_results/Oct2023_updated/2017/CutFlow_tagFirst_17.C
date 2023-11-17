#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_tagFirst_17()
{
//=========Macro generated from canvas: CutFlow_tagFirst_17/CutFlow_tagFirst_17
//=========  (Wed Nov 15 14:59:00 2023) by ROOT version 6.28/04
   TCanvas *CutFlow_tagFirst_17 = new TCanvas("CutFlow_tagFirst_17", "CutFlow_tagFirst_17",0,0,600,600);
   CutFlow_tagFirst_17->SetHighLightColor(2);
   CutFlow_tagFirst_17->Range(0,0,1,1);
   CutFlow_tagFirst_17->SetFillColor(0);
   CutFlow_tagFirst_17->SetFillStyle(4000);
   CutFlow_tagFirst_17->SetBorderMode(0);
   CutFlow_tagFirst_17->SetBorderSize(2);
   CutFlow_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_tagFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.734038e+09,6.314516,2.731303e+12);
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
   st->SetMaximum(2.4579e+12);
   
   TH1F *st_stack_8 = new TH1F("st_stack_8","",5,0,5);
   st_stack_8->SetMinimum(0.01);
   st_stack_8->SetMaximum(2.4579e+12);
   st_stack_8->SetDirectory(nullptr);
   st_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_8->SetLineColor(ci);
   st_stack_8->SetLineWidth(0);
   st_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_8->GetXaxis()->SetBinLabel(4,"triggers");
   st_stack_8->GetXaxis()->SetBinLabel(5,"tags cut");
   st_stack_8->GetXaxis()->SetRange(1,6);
   st_stack_8->GetXaxis()->SetLabelFont(42);
   st_stack_8->GetXaxis()->SetTitleOffset(1);
   st_stack_8->GetXaxis()->SetTitleFont(42);
   st_stack_8->GetYaxis()->SetTitle("Events/1.0");
   st_stack_8->GetYaxis()->SetLabelFont(42);
   st_stack_8->GetYaxis()->SetLabelSize(0.05);
   st_stack_8->GetYaxis()->SetTitleSize(0.057);
   st_stack_8->GetYaxis()->SetTitleOffset(1.2);
   st_stack_8->GetYaxis()->SetTitleFont(42);
   st_stack_8->GetZaxis()->SetLabelFont(42);
   st_stack_8->GetZaxis()->SetTitleOffset(1);
   st_stack_8->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_8);
   
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_1 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_1","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinContent(1,1.105792e+12);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinContent(2,1.105691e+12);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinContent(3,2.404423e+09);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinContent(4,2.697466e+07);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinContent(5,1437981);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinError(1,1.156096e+08);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinError(2,1.156051e+08);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinError(3,1680688);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinError(4,118307.9);
   VbbHcc_tagFirst_CutFlow_stack_1->SetBinError(5,29149.85);
   VbbHcc_tagFirst_CutFlow_stack_1->SetEntries(6.883537e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tagFirst_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_2 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_2","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinContent(1,1.060862e+07);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinContent(2,1.038581e+07);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinContent(3,861732.6);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinContent(4,59250.66);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinContent(5,14578.1);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinError(1,992.5127);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinError(2,975.7484);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinError(3,354.8514);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinError(4,93.17441);
   VbbHcc_tagFirst_CutFlow_stack_2->SetBinError(5,47.32154);
   VbbHcc_tagFirst_CutFlow_stack_2->SetEntries(4.220561e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_tagFirst_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_2,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_3 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_3","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinContent(1,3.063958e+07);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinContent(2,2.906241e+07);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinContent(3,9323660);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinContent(4,974016.9);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinContent(5,268946.5);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinError(1,1230.555);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinError(2,1205.519);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinError(3,720.6371);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinError(4,234.4508);
   VbbHcc_tagFirst_CutFlow_stack_3->SetBinError(5,124.2732);
   VbbHcc_tagFirst_CutFlow_stack_3->SetEntries(1.50621e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tagFirst_CutFlow_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_3->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_3,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_4 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_4","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinContent(1,4.250321e+07);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinContent(2,4.247064e+07);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinContent(3,3178486);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinContent(4,66997.87);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinContent(5,10665.8);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinError(1,9504.357);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinError(2,9503.191);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinError(3,1859.273);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinError(4,171.1078);
   VbbHcc_tagFirst_CutFlow_stack_4->SetBinError(5,61.91957);
   VbbHcc_tagFirst_CutFlow_stack_4->SetEntries(1.100097e+08);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tagFirst_CutFlow_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_4->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_4,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_5 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_5","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinContent(1,1.722113e+08);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinContent(2,1.679289e+08);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinContent(3,9022048);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinContent(4,64632.18);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinContent(5,5946.623);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinError(1,24832.2);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinError(2,24775.25);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinError(3,5015.92);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinError(4,287.9721);
   VbbHcc_tagFirst_CutFlow_stack_5->SetBinError(5,77.33204);
   VbbHcc_tagFirst_CutFlow_stack_5->SetEntries(3.436934e+08);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tagFirst_CutFlow_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_5->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_5,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_6 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_6","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinContent(1,4362225);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinContent(2,4291043);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinContent(3,87272.12);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinContent(4,608.8253);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinContent(5,56.92042);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinError(1,1103.248);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinError(2,1094.209);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinError(3,156.0475);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinError(4,13.03363);
   VbbHcc_tagFirst_CutFlow_stack_6->SetBinError(5,3.985227);
   VbbHcc_tagFirst_CutFlow_stack_6->SetEntries(3.132805e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tagFirst_CutFlow_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_6->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_6,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_7 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_7","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinContent(1,1730925);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinContent(2,1689960);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinContent(3,43623.08);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinContent(4,806.3315);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinContent(5,136.0342);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinError(1,616.2647);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinError(2,608.9286);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinError(3,97.83322);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinError(4,13.30102);
   VbbHcc_tagFirst_CutFlow_stack_7->SetBinError(5,5.463263);
   VbbHcc_tagFirst_CutFlow_stack_7->SetEntries(1.579441e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tagFirst_CutFlow_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_7->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_7,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_8 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_8","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinContent(1,606375);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinContent(2,590525.9);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinContent(3,15580.05);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinContent(4,524.8934);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinContent(5,108.4843);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinError(1,535.9648);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinError(2,528.9141);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinError(3,85.91125);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinError(4,15.76889);
   VbbHcc_tagFirst_CutFlow_stack_8->SetBinError(5,7.168843);
   VbbHcc_tagFirst_CutFlow_stack_8->SetEntries(2560769);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tagFirst_CutFlow_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_8->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_8,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_9 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_9","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinContent(1,13208.32);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinContent(2,13185.12);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinContent(3,1658.732);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinContent(4,226.79);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinContent(5,55.43224);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinError(1,4.481476);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinError(2,4.477615);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinError(3,1.553848);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinError(4,0.5742708);
   VbbHcc_tagFirst_CutFlow_stack_9->SetBinError(5,0.2839942);
   VbbHcc_tagFirst_CutFlow_stack_9->SetEntries(2.102906e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tagFirst_CutFlow_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_9->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_9,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_10 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_10","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinContent(1,1834.56);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinContent(2,1826.353);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinContent(3,675.3643);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinContent(4,289.6499);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinContent(5,50.33115);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinError(1,0.8204402);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinError(2,0.818603);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinError(3,0.4977944);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinError(4,0.326);
   VbbHcc_tagFirst_CutFlow_stack_10->SetBinError(5,0.1358937);
   VbbHcc_tagFirst_CutFlow_stack_10->SetEntries(1.27449e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tagFirst_CutFlow_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_10->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_10,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_11 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_11","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinContent(1,655.9875);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinContent(2,655.2967);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinContent(3,90.00114);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinContent(4,5.153111);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinContent(5,1.53964);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinError(1,0.9884396);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinError(2,0.987941);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinError(3,0.3584112);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinError(4,0.08557716);
   VbbHcc_tagFirst_CutFlow_stack_11->SetBinError(5,0.04686211);
   VbbHcc_tagFirst_CutFlow_stack_11->SetEntries(1069286);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tagFirst_CutFlow_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_11->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_11,"");
   
   TH1D *VbbHcc_tagFirst_CutFlow_stack_12 = new TH1D("VbbHcc_tagFirst_CutFlow_stack_12","",5,0,5);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinContent(1,91.14);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinContent(2,90.94085);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinContent(3,34.44825);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinContent(4,2.523879);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinContent(5,0.7758292);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinError(1,0.1293978);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinError(2,0.1292564);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinError(3,0.07955292);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinError(4,0.02153311);
   VbbHcc_tagFirst_CutFlow_stack_12->SetBinError(5,0.01193866);
   VbbHcc_tagFirst_CutFlow_stack_12->SetEntries(1196574);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tagFirst_CutFlow_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow_stack_12->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_CutFlow_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tagFirst_CutFlow__15 = new TH1D("VbbHcc_tagFirst_CutFlow__15","",5,0,5);
   VbbHcc_tagFirst_CutFlow__15->SetBinContent(1,1.016071e+08);
   VbbHcc_tagFirst_CutFlow__15->SetBinContent(2,1.004155e+08);
   VbbHcc_tagFirst_CutFlow__15->SetBinContent(3,3.456062e+07);
   VbbHcc_tagFirst_CutFlow__15->SetBinContent(4,9539147);
   VbbHcc_tagFirst_CutFlow__15->SetBinContent(5,1163782);
   VbbHcc_tagFirst_CutFlow__15->SetEntries(2.472862e+08);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_CutFlow__15->SetLineColor(ci);
   VbbHcc_tagFirst_CutFlow__15->SetLineWidth(2);
   VbbHcc_tagFirst_CutFlow__15->SetMarkerStyle(20);
   VbbHcc_tagFirst_CutFlow__15->SetMarkerSize(1.2);
   VbbHcc_tagFirst_CutFlow__15->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagFirst_CutFlow__15->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagFirst_CutFlow__15->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagFirst_CutFlow__15->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagFirst_CutFlow__15->GetXaxis()->SetBinLabel(5,"tags cut");
   VbbHcc_tagFirst_CutFlow__15->GetXaxis()->SetRange(1,5);
   VbbHcc_tagFirst_CutFlow__15->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow__15->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow__15->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow__15->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow__15->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow__15->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_CutFlow__15->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_CutFlow__15->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_CutFlow__15->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagFirst_CutFlow_fx1015[5] = { 0.5, 1.5, 2.5, 3.5, 4.5 };
   Double_t Graph_from_VbbHcc_tagFirst_CutFlow_fy1015[5] = { 1.106055e+12, 1.105947e+12, 2.426958e+09, 2.814203e+07, 1738528 };
   Double_t Graph_from_VbbHcc_tagFirst_CutFlow_fex1015[5] = { 0.5, 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_VbbHcc_tagFirst_CutFlow_fey1015[5] = { 1.156096e+08, 1.156051e+08, 1680697, 118308.7, 29150.32 };
   TGraphErrors *gre = new TGraphErrors(5,Graph_from_VbbHcc_tagFirst_CutFlow_fx1015,Graph_from_VbbHcc_tagFirst_CutFlow_fy1015,Graph_from_VbbHcc_tagFirst_CutFlow_fex1015,Graph_from_VbbHcc_tagFirst_CutFlow_fey1015);
   gre->SetName("Graph_from_VbbHcc_tagFirst_CutFlow");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015 = new TH1F("Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015","",100,0,5.5);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015->SetMinimum(1538439);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015->SetMaximum(1.216787e+12);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagFirst_CutFlow1015);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_CutFlow","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tagFirst_CutFlow","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   CutFlow_tagFirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__16 = new TH1D("data_mc_ratio__16","",5,0,5);
   data_mc_ratio__16->SetBinContent(1,9.186442e-05);
   data_mc_ratio__16->SetBinContent(2,9.079591e-05);
   data_mc_ratio__16->SetBinContent(3,0.01424031);
   data_mc_ratio__16->SetBinContent(4,0.3389645);
   data_mc_ratio__16->SetBinContent(5,0.6694067);
   data_mc_ratio__16->SetBinError(1,9.113503e-09);
   data_mc_ratio__16->SetBinError(2,9.060787e-09);
   data_mc_ratio__16->SetBinError(3,2.422303e-06);
   data_mc_ratio__16->SetBinError(4,0.0001097487);
   data_mc_ratio__16->SetBinError(5,0.0006205178);
   data_mc_ratio__16->SetMinimum(0.4);
   data_mc_ratio__16->SetMaximum(1.6);
   data_mc_ratio__16->SetEntries(8146.723);
   data_mc_ratio__16->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__16->SetLineColor(ci);
   data_mc_ratio__16->SetLineWidth(2);
   data_mc_ratio__16->SetMarkerStyle(20);
   data_mc_ratio__16->SetMarkerSize(1.2);
   data_mc_ratio__16->GetXaxis()->SetTitle(""Cut flow"");
   data_mc_ratio__16->GetXaxis()->SetBinLabel(1,"Total");
   data_mc_ratio__16->GetXaxis()->SetBinLabel(2,"MET cut");
   data_mc_ratio__16->GetXaxis()->SetBinLabel(3,"jet cuts");
   data_mc_ratio__16->GetXaxis()->SetBinLabel(4,"triggers");
   data_mc_ratio__16->GetXaxis()->SetBinLabel(5,"tags cut");
   data_mc_ratio__16->GetXaxis()->SetRange(1,6);
   data_mc_ratio__16->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__16->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__16->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__16->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__16->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__16->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__16->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__16->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__16->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__16->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__16->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__16->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__16->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1016[5] = { 0.5, 1.5, 2.5, 3.5, 4.5 };
   Double_t Graph_from_mc_statistical_error_fy1016[5] = { 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1016[5] = { 0.5, 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_mc_statistical_error_fey1016[5] = { 0.0001045243, 0.0001045304, 0.0006925117, 0.004203985, 0.01676725 };
   gre = new TGraphErrors(5,Graph_from_mc_statistical_error_fx1016,Graph_from_mc_statistical_error_fy1016,Graph_from_mc_statistical_error_fex1016,Graph_from_mc_statistical_error_fey1016);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1016 = new TH1F("Graph_Graph_from_mc_statistical_error1016","",100,0,5.5);
   Graph_Graph_from_mc_statistical_error1016->SetMinimum(0.9798793);
   Graph_Graph_from_mc_statistical_error1016->SetMaximum(1.020121);
   Graph_Graph_from_mc_statistical_error1016->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1016->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1016);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,7,1);
   line->Draw();
   bottomPad->Modified();
   CutFlow_tagFirst_17->cd();
   CutFlow_tagFirst_17->Modified();
   CutFlow_tagFirst_17->cd();
   CutFlow_tagFirst_17->SetSelected(CutFlow_tagFirst_17);
}
