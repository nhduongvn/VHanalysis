void CutFlow_VbbHcc_16()
{
//=========Macro generated from canvas: CutFlow_VbbHcc_16/CutFlow_VbbHcc_16
//=========  (Tue Nov 22 09:15:10 2022) by ROOT version 6.14/09
   TCanvas *CutFlow_VbbHcc_16 = new TCanvas("CutFlow_VbbHcc_16", "CutFlow_VbbHcc_16",0,0,600,600);
   CutFlow_VbbHcc_16->SetHighLightColor(2);
   CutFlow_VbbHcc_16->Range(0,0,1,1);
   CutFlow_VbbHcc_16->SetFillColor(0);
   CutFlow_VbbHcc_16->SetFillStyle(4000);
   CutFlow_VbbHcc_16->SetBorderMode(0);
   CutFlow_VbbHcc_16->SetBorderSize(2);
   CutFlow_VbbHcc_16->SetFrameFillStyle(1000);
   CutFlow_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-3.175223,6.314516,27.76609);
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
   st->SetMaximum(7.607337e+23);
   
   TH1F *st_stack_33 = new TH1F("st_stack_33","",5,0,5);
   st_stack_33->SetMinimum(0.0007173284);
   st_stack_33->SetMaximum(4.698479e+24);
   st_stack_33->SetDirectory(0);
   st_stack_33->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_33->SetLineColor(ci);
   st_stack_33->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_33->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_33->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_33->GetXaxis()->SetBinLabel(4,"b-tags");
   st_stack_33->GetXaxis()->SetBinLabel(5,"c-tags");
   st_stack_33->GetXaxis()->SetRange(1,6);
   st_stack_33->GetXaxis()->SetLabelFont(42);
   st_stack_33->GetXaxis()->SetLabelSize(0.035);
   st_stack_33->GetXaxis()->SetTitleSize(0.035);
   st_stack_33->GetXaxis()->SetTitleFont(42);
   st_stack_33->GetYaxis()->SetTitle("Events/1.0");
   st_stack_33->GetYaxis()->SetLabelFont(42);
   st_stack_33->GetYaxis()->SetLabelSize(0.05);
   st_stack_33->GetYaxis()->SetTitleSize(0.057);
   st_stack_33->GetYaxis()->SetTitleOffset(1.2);
   st_stack_33->GetYaxis()->SetTitleFont(42);
   st_stack_33->GetZaxis()->SetLabelFont(42);
   st_stack_33->GetZaxis()->SetLabelSize(0.035);
   st_stack_33->GetZaxis()->SetTitleSize(0.035);
   st_stack_33->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_33);
   
   
   TH1D *VbbHcc_tags_CutFlow_stack_1 = new TH1D("VbbHcc_tags_CutFlow_stack_1","",5,0,5);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(1,5.572955e+10);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(2,5.572848e+10);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(3,5.387062e+09);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(4,1.515612e+08);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(5,1.260209e+07);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(1,8471090);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(2,8471008);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(3,2633738);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(4,441764.2);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(5,127384.9);
   VbbHcc_tags_CutFlow_stack_1->SetEntries(9.087138e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_2 = new TH1D("VbbHcc_tags_CutFlow_stack_2","",5,0,5);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(1,1.035228e+07);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(2,1.015225e+07);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(3,2340385);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(4,706957.4);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(5,143265.1);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(1,1034.78);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(2,1018.087);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(3,583.2034);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(4,304.9405);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(5,145.5674);
   VbbHcc_tags_CutFlow_stack_2->SetEntries(4.248135e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_2,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_3 = new TH1D("VbbHcc_tags_CutFlow_stack_3","",5,0,5);
   VbbHcc_tags_CutFlow_stack_3->SetBinContent(1,2.981925e+07);
   VbbHcc_tags_CutFlow_stack_3->SetBinContent(2,2.837201e+07);
   VbbHcc_tags_CutFlow_stack_3->SetBinContent(3,1.745421e+07);
   VbbHcc_tags_CutFlow_stack_3->SetBinContent(4,8007707);
   VbbHcc_tags_CutFlow_stack_3->SetBinContent(5,2086703);
   VbbHcc_tags_CutFlow_stack_3->SetBinError(1,1292.715);
   VbbHcc_tags_CutFlow_stack_3->SetBinError(2,1266.199);
   VbbHcc_tags_CutFlow_stack_3->SetBinError(3,1022.11);
   VbbHcc_tags_CutFlow_stack_3->SetBinError(4,689.3672);
   VbbHcc_tags_CutFlow_stack_3->SetBinError(5,358.111);
   VbbHcc_tags_CutFlow_stack_3->SetEntries(1.571935e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_CutFlow_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_3->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_3,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_4 = new TH1D("VbbHcc_tags_CutFlow_stack_4","",5,0,5);
   VbbHcc_tags_CutFlow_stack_4->SetBinContent(1,4095440);
   VbbHcc_tags_CutFlow_stack_4->SetBinContent(2,4091236);
   VbbHcc_tags_CutFlow_stack_4->SetBinContent(3,2074511);
   VbbHcc_tags_CutFlow_stack_4->SetBinContent(4,219743.4);
   VbbHcc_tags_CutFlow_stack_4->SetBinContent(5,35172.47);
   VbbHcc_tags_CutFlow_stack_4->SetBinError(1,1069.928);
   VbbHcc_tags_CutFlow_stack_4->SetBinError(2,1069.378);
   VbbHcc_tags_CutFlow_stack_4->SetBinError(3,761.4862);
   VbbHcc_tags_CutFlow_stack_4->SetBinError(4,247.8347);
   VbbHcc_tags_CutFlow_stack_4->SetBinError(5,99.15293);
   VbbHcc_tags_CutFlow_stack_4->SetEntries(3.762241e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_CutFlow_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_4->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_4,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_5 = new TH1D("VbbHcc_tags_CutFlow_stack_5","",5,0,5);
   VbbHcc_tags_CutFlow_stack_5->SetBinContent(1,9915843);
   VbbHcc_tags_CutFlow_stack_5->SetBinContent(2,9907940);
   VbbHcc_tags_CutFlow_stack_5->SetBinContent(3,4930094);
   VbbHcc_tags_CutFlow_stack_5->SetBinContent(4,96614.41);
   VbbHcc_tags_CutFlow_stack_5->SetBinContent(5,20157.88);
   VbbHcc_tags_CutFlow_stack_5->SetBinError(1,3198.752);
   VbbHcc_tags_CutFlow_stack_5->SetBinError(2,3197.477);
   VbbHcc_tags_CutFlow_stack_5->SetBinError(3,2255.503);
   VbbHcc_tags_CutFlow_stack_5->SetBinError(4,315.7452);
   VbbHcc_tags_CutFlow_stack_5->SetBinError(5,144.2242);
   VbbHcc_tags_CutFlow_stack_5->SetEntries(2.410214e+07);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_CutFlow_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_5->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_5,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_6 = new TH1D("VbbHcc_tags_CutFlow_stack_6","",5,0,5);
   VbbHcc_tags_CutFlow_stack_6->SetBinContent(1,2721926);
   VbbHcc_tags_CutFlow_stack_6->SetBinContent(2,2680963);
   VbbHcc_tags_CutFlow_stack_6->SetBinContent(3,207649.3);
   VbbHcc_tags_CutFlow_stack_6->SetBinContent(4,3408.679);
   VbbHcc_tags_CutFlow_stack_6->SetBinContent(5,599.0299);
   VbbHcc_tags_CutFlow_stack_6->SetBinError(1,483.5971);
   VbbHcc_tags_CutFlow_stack_6->SetBinError(2,479.9444);
   VbbHcc_tags_CutFlow_stack_6->SetBinError(3,133.5706);
   VbbHcc_tags_CutFlow_stack_6->SetBinError(4,17.11349);
   VbbHcc_tags_CutFlow_stack_6->SetBinError(5,7.174139);
   VbbHcc_tags_CutFlow_stack_6->SetEntries(6.534667e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_CutFlow_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_6->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_6,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_7 = new TH1D("VbbHcc_tags_CutFlow_stack_7","",5,0,5);
   VbbHcc_tags_CutFlow_stack_7->SetBinContent(1,988715.3);
   VbbHcc_tags_CutFlow_stack_7->SetBinContent(2,966744);
   VbbHcc_tags_CutFlow_stack_7->SetBinContent(3,87547.31);
   VbbHcc_tags_CutFlow_stack_7->SetBinContent(4,7454.868);
   VbbHcc_tags_CutFlow_stack_7->SetBinContent(5,1159.469);
   VbbHcc_tags_CutFlow_stack_7->SetBinError(1,250.9883);
   VbbHcc_tags_CutFlow_stack_7->SetBinError(2,248.1838);
   VbbHcc_tags_CutFlow_stack_7->SetBinError(3,74.68599);
   VbbHcc_tags_CutFlow_stack_7->SetBinError(4,21.79404);
   VbbHcc_tags_CutFlow_stack_7->SetBinError(5,8.595029);
   VbbHcc_tags_CutFlow_stack_7->SetEntries(3.220043e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_CutFlow_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_7->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_7,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_8 = new TH1D("VbbHcc_tags_CutFlow_stack_8","",5,0,5);
   VbbHcc_tags_CutFlow_stack_8->SetBinContent(1,436440.5);
   VbbHcc_tags_CutFlow_stack_8->SetBinContent(2,425521.8);
   VbbHcc_tags_CutFlow_stack_8->SetBinContent(3,42590.71);
   VbbHcc_tags_CutFlow_stack_8->SetBinContent(4,6826.985);
   VbbHcc_tags_CutFlow_stack_8->SetBinContent(5,1127.068);
   VbbHcc_tags_CutFlow_stack_8->SetBinError(1,279.8041);
   VbbHcc_tags_CutFlow_stack_8->SetBinError(2,276.2819);
   VbbHcc_tags_CutFlow_stack_8->SetBinError(3,87.40755);
   VbbHcc_tags_CutFlow_stack_8->SetBinError(4,34.995);
   VbbHcc_tags_CutFlow_stack_8->SetBinError(5,14.21892);
   VbbHcc_tags_CutFlow_stack_8->SetEntries(5086901);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_CutFlow_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_8->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_8,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_9 = new TH1D("VbbHcc_tags_CutFlow_stack_9","",5,0,5);
   VbbHcc_tags_CutFlow_stack_9->SetBinContent(1,12889.16);
   VbbHcc_tags_CutFlow_stack_9->SetBinContent(2,12871.73);
   VbbHcc_tags_CutFlow_stack_9->SetBinContent(3,4059.265);
   VbbHcc_tags_CutFlow_stack_9->SetBinContent(4,2210.5);
   VbbHcc_tags_CutFlow_stack_9->SetBinContent(5,405.6246);
   VbbHcc_tags_CutFlow_stack_9->SetBinError(1,4.340257);
   VbbHcc_tags_CutFlow_stack_9->SetBinError(2,4.337374);
   VbbHcc_tags_CutFlow_stack_9->SetBinError(3,2.390571);
   VbbHcc_tags_CutFlow_stack_9->SetBinError(4,1.766423);
   VbbHcc_tags_CutFlow_stack_9->SetBinError(5,0.7556917);
   VbbHcc_tags_CutFlow_stack_9->SetEntries(2.492757e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_CutFlow_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_9->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_9,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_10 = new TH1D("VbbHcc_tags_CutFlow_stack_10","",5,0,5);
   VbbHcc_tags_CutFlow_stack_10->SetBinContent(1,1790.231);
   VbbHcc_tags_CutFlow_stack_10->SetBinContent(2,1782.223);
   VbbHcc_tags_CutFlow_stack_10->SetBinContent(3,1103.671);
   VbbHcc_tags_CutFlow_stack_10->SetBinContent(4,619.6333);
   VbbHcc_tags_CutFlow_stack_10->SetBinContent(5,130.0299);
   VbbHcc_tags_CutFlow_stack_10->SetBinError(1,0.8006157);
   VbbHcc_tags_CutFlow_stack_10->SetBinError(2,0.7988229);
   VbbHcc_tags_CutFlow_stack_10->SetBinError(3,0.6286218);
   VbbHcc_tags_CutFlow_stack_10->SetBinError(4,0.4710174);
   VbbHcc_tags_CutFlow_stack_10->SetBinError(5,0.21577);
   VbbHcc_tags_CutFlow_stack_10->SetEntries(1.515388e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_CutFlow_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_10->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_10,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_11 = new TH1D("VbbHcc_tags_CutFlow_stack_11","",5,0,5);
   VbbHcc_tags_CutFlow_stack_11->SetBinContent(1,640.1367);
   VbbHcc_tags_CutFlow_stack_11->SetBinContent(2,639.6454);
   VbbHcc_tags_CutFlow_stack_11->SetBinContent(3,221.0844);
   VbbHcc_tags_CutFlow_stack_11->SetBinContent(4,36.1242);
   VbbHcc_tags_CutFlow_stack_11->SetBinContent(5,6.449773);
   VbbHcc_tags_CutFlow_stack_11->SetBinError(1,0.9905948);
   VbbHcc_tags_CutFlow_stack_11->SetBinError(2,0.9902229);
   VbbHcc_tags_CutFlow_stack_11->SetBinError(3,0.5712739);
   VbbHcc_tags_CutFlow_stack_11->SetBinError(4,0.2311104);
   VbbHcc_tags_CutFlow_stack_11->SetBinError(5,0.09754994);
   VbbHcc_tags_CutFlow_stack_11->SetEntries(1132809);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_CutFlow_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_11->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_11,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_12 = new TH1D("VbbHcc_tags_CutFlow_stack_12","",5,0,5);
   VbbHcc_tags_CutFlow_stack_12->SetBinContent(1,1893756);
   VbbHcc_tags_CutFlow_stack_12->SetBinContent(2,1888849);
   VbbHcc_tags_CutFlow_stack_12->SetBinContent(3,1259072);
   VbbHcc_tags_CutFlow_stack_12->SetBinContent(4,233250.1);
   VbbHcc_tags_CutFlow_stack_12->SetBinContent(5,51139.07);
   VbbHcc_tags_CutFlow_stack_12->SetBinError(1,2694.39);
   VbbHcc_tags_CutFlow_stack_12->SetBinError(2,2690.897);
   VbbHcc_tags_CutFlow_stack_12->SetBinError(3,2196.968);
   VbbHcc_tags_CutFlow_stack_12->SetBinError(4,945.6043);
   VbbHcc_tags_CutFlow_stack_12->SetBinError(5,442.7667);
   VbbHcc_tags_CutFlow_stack_12->SetEntries(1389343);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_CutFlow_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_12->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_CutFlow__65 = new TH1D("VbbHcc_tags_CutFlow__65","",5,0,5);
   VbbHcc_tags_CutFlow__65->SetBinContent(1,5.534693e+08);
   VbbHcc_tags_CutFlow__65->SetBinContent(2,5.497068e+08);
   VbbHcc_tags_CutFlow__65->SetBinContent(3,2.530938e+08);
   VbbHcc_tags_CutFlow__65->SetBinContent(4,2.438513e+07);
   VbbHcc_tags_CutFlow__65->SetBinContent(5,7703085);
   VbbHcc_tags_CutFlow__65->SetEntries(1.388358e+09);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow__65->SetLineColor(ci);
   VbbHcc_tags_CutFlow__65->SetLineWidth(2);
   VbbHcc_tags_CutFlow__65->SetMarkerStyle(20);
   VbbHcc_tags_CutFlow__65->SetMarkerSize(1.2);
   VbbHcc_tags_CutFlow__65->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow__65->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow__65->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow__65->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow__65->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow__65->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow__65->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__65->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow__65->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow__65->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__65->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__65->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow__65->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow__65->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow__65->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__65->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__65->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow__65->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow__65->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__65->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_CutFlow_fx1065[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t Graph_from_VbbHcc_tags_CutFlow_fy1065[5] = {
   5.578979e+10,
   5.578698e+10,
   5.415463e+09,
   1.60846e+08,
   1.494196e+07};
   Double_t Graph_from_VbbHcc_tags_CutFlow_fex1065[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_VbbHcc_tags_CutFlow_fey1065[5] = {
   8471091,
   8471010,
   2633740,
   441766,
   127386.4};
   TGraphErrors *gre = new TGraphErrors(5,Graph_from_VbbHcc_tags_CutFlow_fx1065,Graph_from_VbbHcc_tags_CutFlow_fy1065,Graph_from_VbbHcc_tags_CutFlow_fex1065,Graph_from_VbbHcc_tags_CutFlow_fey1065);
   gre->SetName("Graph_from_VbbHcc_tags_CutFlow");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_CutFlow1065 = new TH1F("Graph_Graph_from_VbbHcc_tags_CutFlow1065","",100,0,5.5);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->SetMinimum(1.333311e+07);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->SetMaximum(6.13766e+10);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_CutFlow1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_CutFlow1065);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_CutFlow","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_CutFlow","MC unc. (stat.)","fl");

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
   CutFlow_VbbHcc_16->cd();
  
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
   
   TH1D *data_mc_ratio__66 = new TH1D("data_mc_ratio__66","",5,0,5);
   data_mc_ratio__66->SetBinContent(1,0.009920621);
   data_mc_ratio__66->SetBinContent(2,0.009853676);
   data_mc_ratio__66->SetBinContent(3,0.04673539);
   data_mc_ratio__66->SetBinContent(4,0.1516054);
   data_mc_ratio__66->SetBinContent(5,0.5155339);
   data_mc_ratio__66->SetBinError(1,4.216888e-07);
   data_mc_ratio__66->SetBinError(2,4.202742e-07);
   data_mc_ratio__66->SetBinError(3,2.937684e-06);
   data_mc_ratio__66->SetBinError(4,3.070098e-05);
   data_mc_ratio__66->SetBinError(5,0.0001857483);
   data_mc_ratio__66->SetMinimum(0.4);
   data_mc_ratio__66->SetMaximum(1.6);
   data_mc_ratio__66->SetEntries(27564.5);
   data_mc_ratio__66->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__66->SetLineColor(ci);
   data_mc_ratio__66->SetLineWidth(2);
   data_mc_ratio__66->SetMarkerStyle(20);
   data_mc_ratio__66->SetMarkerSize(1.2);
   data_mc_ratio__66->GetXaxis()->SetTitle(""Cut flow"");
   data_mc_ratio__66->GetXaxis()->SetBinLabel(1,"Total");
   data_mc_ratio__66->GetXaxis()->SetBinLabel(2,"MET cut");
   data_mc_ratio__66->GetXaxis()->SetBinLabel(3,"jet cuts");
   data_mc_ratio__66->GetXaxis()->SetBinLabel(4,"b-tags");
   data_mc_ratio__66->GetXaxis()->SetBinLabel(5,"c-tags");
   data_mc_ratio__66->GetXaxis()->SetRange(1,6);
   data_mc_ratio__66->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__66->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__66->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__66->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__66->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__66->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__66->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__66->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__66->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__66->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__66->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__66->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__66->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__66->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__66->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__66->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__66->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1066[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t Graph_from_mc_statistical_error_fy1066[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1066[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_mc_statistical_error_fey1066[5] = {
   0.0001518395,
   0.0001518457,
   0.000486337,
   0.002746515,
   0.008525412};
   gre = new TGraphErrors(5,Graph_from_mc_statistical_error_fx1066,Graph_from_mc_statistical_error_fy1066,Graph_from_mc_statistical_error_fex1066,Graph_from_mc_statistical_error_fey1066);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1066 = new TH1F("Graph_Graph_from_mc_statistical_error1066","",100,0,5.5);
   Graph_Graph_from_mc_statistical_error1066->SetMinimum(0.9897695);
   Graph_Graph_from_mc_statistical_error1066->SetMaximum(1.01023);
   Graph_Graph_from_mc_statistical_error1066->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1066->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1066->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1066->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1066->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1066->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1066->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1066->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1066->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1066->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1066);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,7,1);
   line->Draw();
   bottomPad->Modified();
   CutFlow_VbbHcc_16->cd();
   CutFlow_VbbHcc_16->Modified();
   CutFlow_VbbHcc_16->cd();
   CutFlow_VbbHcc_16->SetSelected(CutFlow_VbbHcc_16);
}
