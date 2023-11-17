#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_tagOnly_18()
{
//=========Macro generated from canvas: CutFlow_tagOnly_18/CutFlow_tagOnly_18
//=========  (Wed Nov 15 14:59:00 2023) by ROOT version 6.28/04
   TCanvas *CutFlow_tagOnly_18 = new TCanvas("CutFlow_tagOnly_18", "CutFlow_tagOnly_18",0,0,600,600);
   CutFlow_tagOnly_18->SetHighLightColor(2);
   CutFlow_tagOnly_18->Range(0,0,1,1);
   CutFlow_tagOnly_18->SetFillColor(0);
   CutFlow_tagOnly_18->SetFillStyle(4000);
   CutFlow_tagOnly_18->SetBorderMode(0);
   CutFlow_tagOnly_18->SetBorderSize(2);
   CutFlow_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_tagOnly_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.072578,-4.44216e+09,7.366936,4.437718e+12);
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
   st->SetMaximum(3.993502e+12);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",8,0,8);
   st_stack_3->SetMinimum(0.01);
   st_stack_3->SetMaximum(3.993502e+12);
   st_stack_3->SetDirectory(nullptr);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->SetLineWidth(0);
   st_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_3->GetXaxis()->SetBinLabel(4,"triggers");
   st_stack_3->GetXaxis()->SetBinLabel(5,"b-tag #1");
   st_stack_3->GetXaxis()->SetBinLabel(6,"b-tag #2");
   st_stack_3->GetXaxis()->SetBinLabel(7,"c-tag #1");
   st_stack_3->GetXaxis()->SetBinLabel(8,"c-tag #2");
   st_stack_3->GetXaxis()->SetRange(1,7);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetTitleOffset(1);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/1.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetLabelSize(0.05);
   st_stack_3->GetYaxis()->SetTitleSize(0.057);
   st_stack_3->GetYaxis()->SetTitleOffset(1.2);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VbbHcc_tagOnly_CutFlow_stack_1 = new TH1D("VbbHcc_tagOnly_CutFlow_stack_1","",8,0,8);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinContent(1,1.796649e+12);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinContent(2,1.796543e+12);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinContent(3,3.882291e+09);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinContent(4,3.402801e+07);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinContent(5,1.975352e+07);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinContent(6,9928449);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinContent(7,6083815);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinContent(8,1796990);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinError(1,1.838189e+08);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinError(2,1.838145e+08);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinError(3,2665041);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinError(4,101938.6);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinError(5,83957.22);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinError(6,67520.44);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinError(7,43158.92);
   VbbHcc_tagOnly_CutFlow_stack_1->SetBinError(8,17018.54);
   VbbHcc_tagOnly_CutFlow_stack_1->SetEntries(7.059808e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tagOnly_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_tagOnly_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagOnly_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagOnly_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagOnly_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagOnly_CutFlow_stack_1->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_1->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_1->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_1->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_1->GetXaxis()->SetRange(1,8);
   VbbHcc_tagOnly_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_tagOnly_CutFlow_stack_2 = new TH1D("VbbHcc_tagOnly_CutFlow_stack_2","",8,0,8);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinContent(1,1.723649e+07);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinContent(2,1.687543e+07);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinContent(3,1400622);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinContent(4,74176.47);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinContent(5,72568.47);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinContent(6,56345.61);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinContent(7,43261.42);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinContent(8,18523.28);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinError(1,1399.008);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinError(2,1375.293);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinError(3,501.2743);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinError(4,115.5819);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinError(5,114.1858);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinError(6,99.95134);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinError(7,88.30589);
   VbbHcc_tagOnly_CutFlow_stack_2->SetBinError(8,59.28058);
   VbbHcc_tagOnly_CutFlow_stack_2->SetEntries(5.713973e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_tagOnly_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_tagOnly_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagOnly_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagOnly_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagOnly_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagOnly_CutFlow_stack_2->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_2->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_2->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_2->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_2->GetXaxis()->SetRange(1,8);
   VbbHcc_tagOnly_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_CutFlow_stack_2,"");
   
   TH1D *VbbHcc_tagOnly_CutFlow_stack_3 = new TH1D("VbbHcc_tagOnly_CutFlow_stack_3","",8,0,8);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinContent(1,4.978202e+07);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinContent(2,4.722954e+07);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinContent(3,1.516e+07);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinContent(4,1281740);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinContent(5,1255524);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinContent(6,993606.5);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinContent(7,763666.3);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinContent(8,346223.7);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinError(1,1671.997);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinError(2,1637.058);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinError(3,973.539);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinError(4,284.0048);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinError(5,281.0082);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinError(6,249.5996);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinError(7,219.5378);
   VbbHcc_tagOnly_CutFlow_stack_3->SetBinError(8,149.0135);
   VbbHcc_tagOnly_CutFlow_stack_3->SetEntries(2.174638e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tagOnly_CutFlow_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_CutFlow_stack_3->SetLineColor(ci);
   VbbHcc_tagOnly_CutFlow_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagOnly_CutFlow_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagOnly_CutFlow_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagOnly_CutFlow_stack_3->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagOnly_CutFlow_stack_3->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_3->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_3->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_3->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_3->GetXaxis()->SetRange(1,8);
   VbbHcc_tagOnly_CutFlow_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_CutFlow_stack_3,"");
   
   TH1D *VbbHcc_tagOnly_CutFlow_stack_4 = new TH1D("VbbHcc_tagOnly_CutFlow_stack_4","",8,0,8);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinContent(1,6.90576e+07);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinContent(2,6.900855e+07);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinContent(3,5160393);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinContent(4,80411.11);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinContent(5,75483.64);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinContent(6,57958.91);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinContent(7,36531.88);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinContent(8,13605.23);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinError(1,15617.62);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinError(2,15616.12);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinError(3,3037.733);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinError(4,200.8106);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinError(5,194.9678);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinError(6,171.0208);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinError(7,133.7301);
   VbbHcc_tagOnly_CutFlow_stack_4->SetBinError(8,76.63427);
   VbbHcc_tagOnly_CutFlow_stack_4->SetEntries(1.181357e+08);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tagOnly_CutFlow_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_CutFlow_stack_4->SetLineColor(ci);
   VbbHcc_tagOnly_CutFlow_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagOnly_CutFlow_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagOnly_CutFlow_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagOnly_CutFlow_stack_4->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagOnly_CutFlow_stack_4->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_4->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_4->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_4->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_4->GetXaxis()->SetRange(1,8);
   VbbHcc_tagOnly_CutFlow_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_CutFlow_stack_4,"");
   
   TH1D *VbbHcc_tagOnly_CutFlow_stack_5 = new TH1D("VbbHcc_tagOnly_CutFlow_stack_5","",8,0,8);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinContent(1,2.798024e+08);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinContent(2,2.7289e+08);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinContent(3,1.463291e+07);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinContent(4,56797);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinContent(5,44139.21);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinContent(6,24004.13);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinContent(7,18300.37);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinContent(8,7112.12);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinError(1,42136.17);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinError(2,42055.82);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinError(3,8593.642);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinError(4,314.9181);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinError(5,276.295);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinError(6,202.6772);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinError(7,175.2013);
   VbbHcc_tagOnly_CutFlow_stack_5->SetBinError(8,96.9406);
   VbbHcc_tagOnly_CutFlow_stack_5->SetEntries(3.808233e+08);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tagOnly_CutFlow_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_CutFlow_stack_5->SetLineColor(ci);
   VbbHcc_tagOnly_CutFlow_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagOnly_CutFlow_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagOnly_CutFlow_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagOnly_CutFlow_stack_5->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagOnly_CutFlow_stack_5->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_5->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_5->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_5->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_5->GetXaxis()->SetRange(1,8);
   VbbHcc_tagOnly_CutFlow_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_CutFlow_stack_5,"");
   
   TH1D *VbbHcc_tagOnly_CutFlow_stack_6 = new TH1D("VbbHcc_tagOnly_CutFlow_stack_6","",8,0,8);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinContent(1,7087577);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinContent(2,6972701);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinContent(3,141386.3);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinContent(4,541.9992);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinContent(5,398.2496);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinContent(6,203.4192);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinContent(7,154.5986);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinContent(8,65.09414);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinError(1,1789.941);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinError(2,1775.376);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinError(3,252.8095);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinError(4,15.65269);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinError(5,13.41737);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinError(6,9.589273);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinError(7,8.359734);
   VbbHcc_tagOnly_CutFlow_stack_6->SetBinError(8,5.424512);
   VbbHcc_tagOnly_CutFlow_stack_6->SetEntries(3.141966e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tagOnly_CutFlow_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_CutFlow_stack_6->SetLineColor(ci);
   VbbHcc_tagOnly_CutFlow_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagOnly_CutFlow_stack_6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagOnly_CutFlow_stack_6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagOnly_CutFlow_stack_6->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagOnly_CutFlow_stack_6->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_6->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_6->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_6->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_6->GetXaxis()->SetRange(1,8);
   VbbHcc_tagOnly_CutFlow_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_CutFlow_stack_6,"");
   
   TH1D *VbbHcc_tagOnly_CutFlow_stack_7 = new TH1D("VbbHcc_tagOnly_CutFlow_stack_7","",8,0,8);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinContent(1,2812341);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinContent(2,2746083);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinContent(3,71073.24);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinContent(4,962.359);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinContent(5,870.9756);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinContent(6,631.1828);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinContent(7,484.1902);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinContent(8,181.3499);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinError(1,998.0625);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinError(2,986.2353);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinError(3,158.6634);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinError(4,18.46258);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinError(5,17.56413);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinError(6,14.95207);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinError(7,13.09579);
   VbbHcc_tagOnly_CutFlow_stack_7->SetBinError(8,8.014611);
   VbbHcc_tagOnly_CutFlow_stack_7->SetEntries(1.590243e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tagOnly_CutFlow_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_CutFlow_stack_7->SetLineColor(ci);
   VbbHcc_tagOnly_CutFlow_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagOnly_CutFlow_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagOnly_CutFlow_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagOnly_CutFlow_stack_7->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagOnly_CutFlow_stack_7->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_7->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_7->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_7->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_7->GetXaxis()->SetRange(1,8);
   VbbHcc_tagOnly_CutFlow_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_CutFlow_stack_7,"");
   
   TH1D *VbbHcc_tagOnly_CutFlow_stack_8 = new TH1D("VbbHcc_tagOnly_CutFlow_stack_8","",8,0,8);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinContent(1,985215);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinContent(2,959307.7);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinContent(3,25169.92);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinContent(4,711.3889);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinContent(5,681.771);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinContent(6,573.6377);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinContent(7,354.5768);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinContent(8,142.2219);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinError(1,524.6744);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinError(2,517.73);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinError(3,83.86202);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinError(4,14.09866);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinError(5,13.80205);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinError(6,12.66028);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinError(7,9.953585);
   VbbHcc_tagOnly_CutFlow_stack_8->SetBinError(8,6.303875);
   VbbHcc_tagOnly_CutFlow_stack_8->SetEntries(7058178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tagOnly_CutFlow_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_CutFlow_stack_8->SetLineColor(ci);
   VbbHcc_tagOnly_CutFlow_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagOnly_CutFlow_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagOnly_CutFlow_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagOnly_CutFlow_stack_8->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagOnly_CutFlow_stack_8->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_8->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_8->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_8->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_8->GetXaxis()->SetRange(1,8);
   VbbHcc_tagOnly_CutFlow_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_CutFlow_stack_8,"");
   
   TH1D *VbbHcc_tagOnly_CutFlow_stack_9 = new TH1D("VbbHcc_tagOnly_CutFlow_stack_9","",8,0,8);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinContent(1,21460.37);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinContent(2,21425);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinContent(3,2685.5);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinContent(4,339.5158);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinContent(5,336.9558);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinContent(6,304.4589);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinContent(7,164.5006);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinContent(8,73.32778);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinError(1,7.224385);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinError(2,7.218542);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinError(3,2.50043);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinError(4,0.8885772);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinError(5,0.8852488);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinError(6,0.8419519);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinError(7,0.6187202);
   VbbHcc_tagOnly_CutFlow_stack_9->SetBinError(8,0.4133153);
   VbbHcc_tagOnly_CutFlow_stack_9->SetEntries(2.170176e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tagOnly_CutFlow_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_CutFlow_stack_9->SetLineColor(ci);
   VbbHcc_tagOnly_CutFlow_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagOnly_CutFlow_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagOnly_CutFlow_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagOnly_CutFlow_stack_9->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagOnly_CutFlow_stack_9->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_9->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_9->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_9->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_9->GetXaxis()->SetRange(1,8);
   VbbHcc_tagOnly_CutFlow_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_CutFlow_stack_9,"");
   
   TH1D *VbbHcc_tagOnly_CutFlow_stack_10 = new TH1D("VbbHcc_tagOnly_CutFlow_stack_10","",8,0,8);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinContent(1,2980.723);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinContent(2,2967.389);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinContent(3,1097.306);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinContent(4,470.6121);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinContent(5,451.6135);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinContent(6,324.4529);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinContent(7,190.6232);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinContent(8,74.44952);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinError(1,1.33302);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinError(2,1.330035);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinError(3,0.8087974);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinError(4,0.5296724);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinError(5,0.5188709);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinError(6,0.4397964);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinError(7,0.3371038);
   VbbHcc_tagOnly_CutFlow_stack_10->SetBinError(8,0.210672);
   VbbHcc_tagOnly_CutFlow_stack_10->SetEntries(1.435418e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tagOnly_CutFlow_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_CutFlow_stack_10->SetLineColor(ci);
   VbbHcc_tagOnly_CutFlow_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagOnly_CutFlow_stack_10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagOnly_CutFlow_stack_10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagOnly_CutFlow_stack_10->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagOnly_CutFlow_stack_10->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_10->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_10->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_10->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_10->GetXaxis()->SetRange(1,8);
   VbbHcc_tagOnly_CutFlow_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_CutFlow_stack_10,"");
   
   TH1D *VbbHcc_tagOnly_CutFlow_stack_11 = new TH1D("VbbHcc_tagOnly_CutFlow_stack_11","",8,0,8);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinContent(1,1065.823);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinContent(2,1064.799);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinContent(3,145.3825);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinContent(4,6.114972);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinContent(5,5.639338);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinContent(6,4.18285);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinContent(7,3.607083);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinContent(8,1.98674);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinError(1,1.608294);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinError(2,1.607521);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinError(3,0.5808278);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinError(4,0.1192768);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinError(5,0.1146044);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinError(6,0.09872716);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinError(7,0.09179533);
   VbbHcc_tagOnly_CutFlow_stack_11->SetBinError(8,0.06838655);
   VbbHcc_tagOnly_CutFlow_stack_11->SetEntries(1073220);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tagOnly_CutFlow_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_CutFlow_stack_11->SetLineColor(ci);
   VbbHcc_tagOnly_CutFlow_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagOnly_CutFlow_stack_11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagOnly_CutFlow_stack_11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagOnly_CutFlow_stack_11->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagOnly_CutFlow_stack_11->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_11->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_11->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_11->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_11->GetXaxis()->SetRange(1,8);
   VbbHcc_tagOnly_CutFlow_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_CutFlow_stack_11,"");
   
   TH1D *VbbHcc_tagOnly_CutFlow_stack_12 = new TH1D("VbbHcc_tagOnly_CutFlow_stack_12","",8,0,8);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinContent(1,148.0808);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinContent(2,147.7778);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinContent(3,55.86831);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinContent(4,2.99477);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinContent(5,2.768529);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinContent(6,2.089807);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinContent(7,1.818317);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinContent(8,0.9996551);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinError(1,0.21065);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinError(2,0.2104344);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinError(3,0.1293883);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinError(4,0.02995669);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinError(5,0.02880293);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinError(6,0.02502448);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinError(7,0.02334248);
   VbbHcc_tagOnly_CutFlow_stack_12->SetBinError(8,0.01730761);
   VbbHcc_tagOnly_CutFlow_stack_12->SetEntries(1209377);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tagOnly_CutFlow_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_CutFlow_stack_12->SetLineColor(ci);
   VbbHcc_tagOnly_CutFlow_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagOnly_CutFlow_stack_12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagOnly_CutFlow_stack_12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagOnly_CutFlow_stack_12->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagOnly_CutFlow_stack_12->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_12->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_12->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_tagOnly_CutFlow_stack_12->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_tagOnly_CutFlow_stack_12->GetXaxis()->SetRange(1,8);
   VbbHcc_tagOnly_CutFlow_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagOnly_CutFlow_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tagOnly_CutFlow__5 = new TH1D("VbbHcc_tagOnly_CutFlow__5","",8,0,8);
   VbbHcc_tagOnly_CutFlow__5->SetBinContent(1,6.229517e+08);
   VbbHcc_tagOnly_CutFlow__5->SetBinContent(2,6.08307e+08);
   VbbHcc_tagOnly_CutFlow__5->SetBinContent(3,1.716969e+08);
   VbbHcc_tagOnly_CutFlow__5->SetBinContent(4,2.112727e+07);
   VbbHcc_tagOnly_CutFlow__5->SetBinContent(5,1.749662e+07);
   VbbHcc_tagOnly_CutFlow__5->SetBinContent(6,1.097685e+07);
   VbbHcc_tagOnly_CutFlow__5->SetBinContent(7,7509916);
   VbbHcc_tagOnly_CutFlow__5->SetBinContent(8,2898475);
   VbbHcc_tagOnly_CutFlow__5->SetEntries(1.462965e+09);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagOnly_CutFlow__5->SetLineColor(ci);
   VbbHcc_tagOnly_CutFlow__5->SetLineWidth(2);
   VbbHcc_tagOnly_CutFlow__5->SetMarkerStyle(20);
   VbbHcc_tagOnly_CutFlow__5->SetMarkerSize(1.2);
   VbbHcc_tagOnly_CutFlow__5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tagOnly_CutFlow__5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tagOnly_CutFlow__5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tagOnly_CutFlow__5->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_tagOnly_CutFlow__5->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_tagOnly_CutFlow__5->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_tagOnly_CutFlow__5->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_tagOnly_CutFlow__5->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_tagOnly_CutFlow__5->GetXaxis()->SetRange(1,8);
   VbbHcc_tagOnly_CutFlow__5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow__5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow__5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow__5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow__5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow__5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagOnly_CutFlow__5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagOnly_CutFlow__5->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagOnly_CutFlow__5->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagOnly_CutFlow_fx1005[8] = { 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5 };
   Double_t Graph_from_VbbHcc_tagOnly_CutFlow_fy1005[8] = { 1.797076e+12, 1.79696e+12, 3.918887e+09, 3.552417e+07, 2.120399e+07, 1.106241e+07, 6946929, 2182993 };
   Double_t Graph_from_VbbHcc_tagOnly_CutFlow_fex1005[8] = { 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_VbbHcc_tagOnly_CutFlow_fey1005[8] = { 1.838189e+08, 1.838145e+08, 2665057, 101939.8, 83958.46, 67521.5, 43160.14, 17019.75 };
   TGraphErrors *gre = new TGraphErrors(8,Graph_from_VbbHcc_tagOnly_CutFlow_fx1005,Graph_from_VbbHcc_tagOnly_CutFlow_fy1005,Graph_from_VbbHcc_tagOnly_CutFlow_fex1005,Graph_from_VbbHcc_tagOnly_CutFlow_fey1005);
   gre->SetName("Graph_from_VbbHcc_tagOnly_CutFlow");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005 = new TH1F("Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005","",100,0,8.8);
   Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005->SetMinimum(1949376);
   Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005->SetMaximum(1.976985e+12);
   Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagOnly_CutFlow1005);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagOnly_CutFlow","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagOnly_CutFlow","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_CutFlow","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_CutFlow","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_CutFlow","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_CutFlow","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_CutFlow","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_CutFlow","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_CutFlow","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_CutFlow","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_CutFlow","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_CutFlow","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tagOnly_CutFlow","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tagOnly_CutFlow","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   CutFlow_tagOnly_18->cd();
  
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
   
   TH1D *data_mc_ratio__6 = new TH1D("data_mc_ratio__6","",8,0,8);
   data_mc_ratio__6->SetBinContent(1,0.0003466474);
   data_mc_ratio__6->SetBinContent(2,0.0003385201);
   data_mc_ratio__6->SetBinContent(3,0.04381268);
   data_mc_ratio__6->SetBinContent(4,0.5947294);
   data_mc_ratio__6->SetBinContent(5,0.8251573);
   data_mc_ratio__6->SetBinContent(6,0.992266);
   data_mc_ratio__6->SetBinContent(7,1.081041);
   data_mc_ratio__6->SetBinContent(8,1.327753);
   data_mc_ratio__6->SetBinError(1,1.388867e-08);
   data_mc_ratio__6->SetBinError(2,1.372534e-08);
   data_mc_ratio__6->SetBinError(3,3.343633e-06);
   data_mc_ratio__6->SetBinError(4,0.0001293891);
   data_mc_ratio__6->SetBinError(5,0.0001972694);
   data_mc_ratio__6->SetBinError(6,0.0002994948);
   data_mc_ratio__6->SetBinError(7,0.0003944797);
   data_mc_ratio__6->SetBinError(8,0.0007798882);
   data_mc_ratio__6->SetMinimum(0.4);
   data_mc_ratio__6->SetMaximum(1.6);
   data_mc_ratio__6->SetEntries(116356.5);
   data_mc_ratio__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__6->SetLineColor(ci);
   data_mc_ratio__6->SetLineWidth(2);
   data_mc_ratio__6->SetMarkerStyle(20);
   data_mc_ratio__6->SetMarkerSize(1.2);
   data_mc_ratio__6->GetXaxis()->SetTitle(""Cut flow"");
   data_mc_ratio__6->GetXaxis()->SetBinLabel(1,"Total");
   data_mc_ratio__6->GetXaxis()->SetBinLabel(2,"MET cut");
   data_mc_ratio__6->GetXaxis()->SetBinLabel(3,"jet cuts");
   data_mc_ratio__6->GetXaxis()->SetBinLabel(4,"triggers");
   data_mc_ratio__6->GetXaxis()->SetBinLabel(5,"b-tag #1");
   data_mc_ratio__6->GetXaxis()->SetBinLabel(6,"b-tag #2");
   data_mc_ratio__6->GetXaxis()->SetBinLabel(7,"c-tag #1");
   data_mc_ratio__6->GetXaxis()->SetBinLabel(8,"c-tag #2");
   data_mc_ratio__6->GetXaxis()->SetRange(1,7);
   data_mc_ratio__6->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__6->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__6->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__6->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__6->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__6->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__6->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1006[8] = { 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5 };
   Double_t Graph_from_mc_statistical_error_fy1006[8] = { 1, 1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1006[8] = { 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_mc_statistical_error_fey1006[8] = { 0.0001022878, 0.0001022919, 0.0006800546, 0.00286959, 0.00395956, 0.006103689, 0.006212837, 0.007796519 };
   gre = new TGraphErrors(8,Graph_from_mc_statistical_error_fx1006,Graph_from_mc_statistical_error_fy1006,Graph_from_mc_statistical_error_fex1006,Graph_from_mc_statistical_error_fey1006);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1006 = new TH1F("Graph_Graph_from_mc_statistical_error1006","",100,0,8.8);
   Graph_Graph_from_mc_statistical_error1006->SetMinimum(0.9906442);
   Graph_Graph_from_mc_statistical_error1006->SetMaximum(1.009356);
   Graph_Graph_from_mc_statistical_error1006->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1006->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1006);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,7,1);
   line->Draw();
   bottomPad->Modified();
   CutFlow_tagOnly_18->cd();
   CutFlow_tagOnly_18->Modified();
   CutFlow_tagOnly_18->cd();
   CutFlow_tagOnly_18->SetSelected(CutFlow_tagOnly_18);
}
