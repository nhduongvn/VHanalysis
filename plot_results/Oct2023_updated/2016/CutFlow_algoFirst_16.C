#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_algoFirst_16()
{
//=========Macro generated from canvas: CutFlow_algoFirst_16/CutFlow_algoFirst_16
//=========  (Wed Nov 15 14:59:00 2023) by ROOT version 6.28/04
   TCanvas *CutFlow_algoFirst_16 = new TCanvas("CutFlow_algoFirst_16", "CutFlow_algoFirst_16",0,0,600,600);
   CutFlow_algoFirst_16->SetHighLightColor(2);
   CutFlow_algoFirst_16->Range(0,0,1,1);
   CutFlow_algoFirst_16->SetFillColor(0);
   CutFlow_algoFirst_16->SetFillStyle(4000);
   CutFlow_algoFirst_16->SetBorderMode(0);
   CutFlow_algoFirst_16->SetBorderSize(2);
   CutFlow_algoFirst_16->SetFrameFillStyle(1000);
   CutFlow_algoFirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.072578,-2.667974e+09,7.366936,2.665306e+12);
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
   st->SetMaximum(2.398509e+12);
   
   TH1F *st_stack_4 = new TH1F("st_stack_4","",8,0,8);
   st_stack_4->SetMinimum(0.01);
   st_stack_4->SetMaximum(2.398509e+12);
   st_stack_4->SetDirectory(nullptr);
   st_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_4->SetLineColor(ci);
   st_stack_4->SetLineWidth(0);
   st_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_4->GetXaxis()->SetBinLabel(4,"triggers");
   st_stack_4->GetXaxis()->SetBinLabel(5,"b-tag #1");
   st_stack_4->GetXaxis()->SetBinLabel(6,"b-tag #2");
   st_stack_4->GetXaxis()->SetBinLabel(7,"c-tag #1");
   st_stack_4->GetXaxis()->SetBinLabel(8,"c-tag #2");
   st_stack_4->GetXaxis()->SetRange(1,7);
   st_stack_4->GetXaxis()->SetLabelFont(42);
   st_stack_4->GetXaxis()->SetTitleOffset(1);
   st_stack_4->GetXaxis()->SetTitleFont(42);
   st_stack_4->GetYaxis()->SetTitle("Events/1.0");
   st_stack_4->GetYaxis()->SetLabelFont(42);
   st_stack_4->GetYaxis()->SetLabelSize(0.05);
   st_stack_4->GetYaxis()->SetTitleSize(0.057);
   st_stack_4->GetYaxis()->SetTitleOffset(1.2);
   st_stack_4->GetYaxis()->SetTitleFont(42);
   st_stack_4->GetZaxis()->SetLabelFont(42);
   st_stack_4->GetZaxis()->SetTitleOffset(1);
   st_stack_4->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_4);
   
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_1 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_1","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(1,1.079073e+12);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(2,1.079054e+12);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(3,2.306133e+09);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(4,1.526599e+08);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(5,2.230552e+07);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(6,5075415);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(7,1476407);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(8,403004.5);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(1,1.442534e+08);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(2,1.442527e+08);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(3,1899173);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(4,362843.8);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(5,130895.4);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(6,54873.8);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(7,36307.51);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(8,23682.03);
   VbbHcc_algoFirst_CutFlow_stack_1->SetEntries(5.583707e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algoFirst_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_2 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_2","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(1,1.035228e+07);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(2,1.015222e+07);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(3,838721.6);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(4,236973.6);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(5,82971.69);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(6,18452.01);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(7,6928.429);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(8,2309.169);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(1,1035.39);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(2,1018.702);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(3,372.6278);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(4,196.438);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(5,113.9211);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(6,51.5391);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(7,31.64725);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(8,18.36729);
   VbbHcc_algoFirst_CutFlow_stack_2->SetEntries(3.913346e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_algoFirst_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_2,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_3 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_3","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(1,2.989923e+07);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(2,2.844793e+07);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(3,9067321);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(4,3238553);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(5,1181061);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(6,236865);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(7,80428.62);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(8,26078.17);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(1,1299.153);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(2,1272.557);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(3,749.3068);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(4,449.297);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(5,270.0018);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(6,119.7096);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(7,69.90044);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(8,39.88153);
   VbbHcc_algoFirst_CutFlow_stack_3->SetEntries(1.31988e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algoFirst_CutFlow_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_3->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_3,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_4 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_4","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(1,4.14762e+07);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(2,4.145526e+07);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(3,3097458);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(4,403479.3);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(5,90721.56);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(6,27967.4);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(7,8969.763);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(8,2479.435);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(1,9358.096);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(2,9357.724);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(3,1812.731);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(4,539.6424);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(5,257.484);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(6,149.3973);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(7,80.90927);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(8,41.88312);
   VbbHcc_algoFirst_CutFlow_stack_4->SetEntries(1.167775e+08);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algoFirst_CutFlow_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_4->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_4,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_5 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_5","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(1,1.680501e+08);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(2,1.641396e+08);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(3,8804598);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(4,774652.4);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(5,76058.09);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(6,10200.9);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(7,3937.325);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(8,1349.249);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(1,25040.4);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(2,24984.66);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(3,5024.056);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(4,1295.23);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(5,384.0578);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(6,140.2826);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(7,80.41192);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(8,49.28991);
   VbbHcc_algoFirst_CutFlow_stack_5->SetEntries(3.282662e+08);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algoFirst_CutFlow_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_5->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_5,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_6 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_6","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(1,4256819);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(2,4192757);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(3,84693.24);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(4,7712.395);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(5,712.6948);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(6,67.72213);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(7,24.32084);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(8,7.65905);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(1,756.2975);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(2,750.585);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(3,106.6779);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(4,32.19175);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(5,9.785923);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(6,3.016583);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(7,1.807754);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(8,1.014466);
   VbbHcc_algoFirst_CutFlow_stack_6->SetEntries(6.357698e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algoFirst_CutFlow_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_6->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_6,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_7 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_7","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(1,1689100);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(2,1651562);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(3,42464.32);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(4,5343.241);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(5,1148.553);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(6,386.7744);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(7,153.9905);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(8,49.91341);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(1,429.0457);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(2,424.2514);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(3,68.02804);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(4,24.13116);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(5,11.18797);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(6,6.492392);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(7,4.096593);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(8,2.3323);
   VbbHcc_algoFirst_CutFlow_stack_7->SetEntries(3.110819e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algoFirst_CutFlow_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_7->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_7,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_8 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_8","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(1,591723);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(2,576919.5);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(3,14992.5);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(4,2397.536);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(5,734.2424);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(6,317.6285);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(7,105.5519);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(8,37.94032);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(1,379.3564);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(2,374.581);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(3,60.38447);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(4,24.14742);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(5,13.36312);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(6,8.789171);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(7,5.066654);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(8,3.037656);
   VbbHcc_algoFirst_CutFlow_stack_8->SetEntries(4881550);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algoFirst_CutFlow_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_8->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_8,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_9 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_9","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(1,12889.16);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(2,12871.73);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(3,1603.022);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(4,610.1293);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(5,279.4418);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(6,136.6366);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(7,43.73348);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(8,14.22562);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(1,4.348819);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(2,4.34593);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(3,1.500728);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(4,0.9257539);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(5,0.6274833);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(6,0.4399792);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(7,0.2489441);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(8,0.1422509);
   VbbHcc_algoFirst_CutFlow_stack_9->SetEntries(2.185203e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algoFirst_CutFlow_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_9->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_9,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_10 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_10","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(1,1790.231);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(2,1782.223);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(3,659.0453);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(4,282.651);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(5,127.323);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(6,60.92586);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(7,19.06166);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(8,5.788533);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(1,0.8006157);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(2,0.7988229);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(3,0.4857661);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(4,0.3181228);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(5,0.2135124);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(6,0.1476966);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(7,0.0826133);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(8,0.0455254);
   VbbHcc_algoFirst_CutFlow_stack_10->SetEntries(1.32029e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algoFirst_CutFlow_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_10->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_10,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_11 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_11","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(1,640.1367);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(2,639.628);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(3,86.77358);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(4,20.48794);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(5,5.057029);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(6,1.909035);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(7,1.135028);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(8,0.6017016);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(1,1.365306);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(2,1.36478);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(3,0.4924912);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(4,0.2390747);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(5,0.1192476);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(6,0.07359152);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(7,0.0562508);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(8,0.04075069);
   VbbHcc_algoFirst_CutFlow_stack_11->SetEntries(541538);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algoFirst_CutFlow_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_11->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_11,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_12 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_12","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(1,88.93776);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(2,88.80772);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(3,33.4951);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(4,8.652979);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(5,2.137164);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(6,0.7777677);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(7,0.434078);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(8,0.2215048);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(1,0.1782538);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(2,0.1781235);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(3,0.1093922);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(4,0.05560048);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(5,0.02763215);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(6,0.01666943);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(7,0.01245316);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(8,0.008895848);
   VbbHcc_algoFirst_CutFlow_stack_12->SetEntries(625484);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algoFirst_CutFlow_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_12->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algoFirst_CutFlow__7 = new TH1D("VbbHcc_algoFirst_CutFlow__7","",8,0,8);
   VbbHcc_algoFirst_CutFlow__7->SetBinContent(1,3.640182e+08);
   VbbHcc_algoFirst_CutFlow__7->SetBinContent(2,3.626658e+08);
   VbbHcc_algoFirst_CutFlow__7->SetBinContent(3,1.225992e+08);
   VbbHcc_algoFirst_CutFlow__7->SetBinContent(4,5.394683e+07);
   VbbHcc_algoFirst_CutFlow__7->SetBinContent(5,1.219456e+07);
   VbbHcc_algoFirst_CutFlow__7->SetBinContent(6,3264781);
   VbbHcc_algoFirst_CutFlow__7->SetBinContent(7,1143736);
   VbbHcc_algoFirst_CutFlow__7->SetBinContent(8,357342);
   VbbHcc_algoFirst_CutFlow__7->SetEntries(9.201904e+08);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow__7->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow__7->SetLineWidth(2);
   VbbHcc_algoFirst_CutFlow__7->SetMarkerStyle(20);
   VbbHcc_algoFirst_CutFlow__7->SetMarkerSize(1.2);
   VbbHcc_algoFirst_CutFlow__7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow__7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow__7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow__7->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow__7->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow__7->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow__7->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow__7->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow__7->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow__7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow__7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow__7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow__7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow__7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow__7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow__7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow__7->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow__7->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algoFirst_CutFlow_fx1007[8] = { 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5 };
   Double_t Graph_from_VbbHcc_algoFirst_CutFlow_fy1007[8] = { 1.079329e+12, 1.079305e+12, 2.328086e+09, 1.5733e+08, 2.373934e+07, 5369873, 1577019, 435336.9 };
   Double_t Graph_from_VbbHcc_algoFirst_CutFlow_fex1007[8] = { 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_VbbHcc_algoFirst_CutFlow_fey1007[8] = { 1.442534e+08, 1.442527e+08, 1899181, 362846.9, 130896.5, 54874.34, 36307.78, 23682.16 };
   TGraphErrors *gre = new TGraphErrors(8,Graph_from_VbbHcc_algoFirst_CutFlow_fx1007,Graph_from_VbbHcc_algoFirst_CutFlow_fy1007,Graph_from_VbbHcc_algoFirst_CutFlow_fex1007,Graph_from_VbbHcc_algoFirst_CutFlow_fey1007);
   gre->SetName("Graph_from_VbbHcc_algoFirst_CutFlow");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007 = new TH1F("Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007","",100,0,8.8);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007->SetMinimum(370489.3);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007->SetMaximum(1.18742e+12);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algoFirst_CutFlow1007);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algoFirst_CutFlow","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   CutFlow_algoFirst_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.072578,-0.2774193,7.366936,1.658065);
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
   
   TH1D *data_mc_ratio__8 = new TH1D("data_mc_ratio__8","",8,0,8);
   data_mc_ratio__8->SetBinContent(1,0.0003372635);
   data_mc_ratio__8->SetBinContent(2,0.0003360179);
   data_mc_ratio__8->SetBinContent(3,0.05266094);
   data_mc_ratio__8->SetBinContent(4,0.3428897);
   data_mc_ratio__8->SetBinContent(5,0.5136856);
   data_mc_ratio__8->SetBinContent(6,0.607981);
   data_mc_ratio__8->SetBinContent(7,0.7252517);
   data_mc_ratio__8->SetBinContent(8,0.8208402);
   data_mc_ratio__8->SetBinError(1,1.767697e-08);
   data_mc_ratio__8->SetBinError(2,1.764449e-08);
   data_mc_ratio__8->SetBinError(3,4.756033e-06);
   data_mc_ratio__8->SetBinError(4,4.668437e-05);
   data_mc_ratio__8->SetBinError(5,0.0001471006);
   data_mc_ratio__8->SetBinError(6,0.0003364829);
   data_mc_ratio__8->SetBinError(7,0.0006781501);
   data_mc_ratio__8->SetBinError(8,0.001373146);
   data_mc_ratio__8->SetMinimum(0.4);
   data_mc_ratio__8->SetMaximum(1.6);
   data_mc_ratio__8->SetEntries(4042.253);
   data_mc_ratio__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__8->SetLineColor(ci);
   data_mc_ratio__8->SetLineWidth(2);
   data_mc_ratio__8->SetMarkerStyle(20);
   data_mc_ratio__8->SetMarkerSize(1.2);
   data_mc_ratio__8->GetXaxis()->SetTitle(""Cut flow"");
   data_mc_ratio__8->GetXaxis()->SetBinLabel(1,"Total");
   data_mc_ratio__8->GetXaxis()->SetBinLabel(2,"MET cut");
   data_mc_ratio__8->GetXaxis()->SetBinLabel(3,"jet cuts");
   data_mc_ratio__8->GetXaxis()->SetBinLabel(4,"triggers");
   data_mc_ratio__8->GetXaxis()->SetBinLabel(5,"b-tag #1");
   data_mc_ratio__8->GetXaxis()->SetBinLabel(6,"b-tag #2");
   data_mc_ratio__8->GetXaxis()->SetBinLabel(7,"c-tag #1");
   data_mc_ratio__8->GetXaxis()->SetBinLabel(8,"c-tag #2");
   data_mc_ratio__8->GetXaxis()->SetRange(1,7);
   data_mc_ratio__8->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__8->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__8->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__8->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__8->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__8->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__8->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1008[8] = { 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5 };
   Double_t Graph_from_mc_statistical_error_fy1008[8] = { 1, 1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1008[8] = { 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_mc_statistical_error_fey1008[8] = { 0.000133651, 0.0001336533, 0.0008157694, 0.002306279, 0.005513906, 0.01021893, 0.02302304, 0.05439962 };
   gre = new TGraphErrors(8,Graph_from_mc_statistical_error_fx1008,Graph_from_mc_statistical_error_fy1008,Graph_from_mc_statistical_error_fex1008,Graph_from_mc_statistical_error_fey1008);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1008 = new TH1F("Graph_Graph_from_mc_statistical_error1008","",100,0,8.8);
   Graph_Graph_from_mc_statistical_error1008->SetMinimum(0.9347205);
   Graph_Graph_from_mc_statistical_error1008->SetMaximum(1.06528);
   Graph_Graph_from_mc_statistical_error1008->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1008->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1008);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,7,1);
   line->Draw();
   bottomPad->Modified();
   CutFlow_algoFirst_16->cd();
   CutFlow_algoFirst_16->Modified();
   CutFlow_algoFirst_16->cd();
   CutFlow_algoFirst_16->SetSelected(CutFlow_algoFirst_16);
}
