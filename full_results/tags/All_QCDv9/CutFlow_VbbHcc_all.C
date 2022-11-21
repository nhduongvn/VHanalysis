void CutFlow_VbbHcc_all()
{
//=========Macro generated from canvas: CutFlow_VbbHcc_all/CutFlow_VbbHcc_all
//=========  (Mon Nov 21 13:02:22 2022) by ROOT version 6.14/09
   TCanvas *CutFlow_VbbHcc_all = new TCanvas("CutFlow_VbbHcc_all", "CutFlow_VbbHcc_all",0,0,600,600);
   CutFlow_VbbHcc_all->SetHighLightColor(2);
   CutFlow_VbbHcc_all->Range(0,0,1,1);
   CutFlow_VbbHcc_all->SetFillColor(0);
   CutFlow_VbbHcc_all->SetFillStyle(4000);
   CutFlow_VbbHcc_all->SetBorderMode(0);
   CutFlow_VbbHcc_all->SetBorderSize(2);
   CutFlow_VbbHcc_all->SetFrameFillStyle(1000);
   CutFlow_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.691922,6.314516,28.82863);
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
   st->SetMinimum(0.3);
   st->SetMaximum(9.795898e+24);
   
   TH1F *st_stack_36 = new TH1F("st_stack_36","",5,0,5);
   st_stack_36->SetMinimum(0.02180714);
   st_stack_36->SetMaximum(5.978225e+25);
   st_stack_36->SetDirectory(0);
   st_stack_36->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_36->SetLineColor(ci);
   st_stack_36->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_36->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_36->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_36->GetXaxis()->SetBinLabel(4,"b-tags");
   st_stack_36->GetXaxis()->SetBinLabel(5,"c-tags");
   st_stack_36->GetXaxis()->SetRange(1,6);
   st_stack_36->GetXaxis()->SetLabelFont(42);
   st_stack_36->GetXaxis()->SetLabelSize(0.035);
   st_stack_36->GetXaxis()->SetTitleSize(0.035);
   st_stack_36->GetXaxis()->SetTitleFont(42);
   st_stack_36->GetYaxis()->SetTitle("Events/1.0");
   st_stack_36->GetYaxis()->SetLabelFont(42);
   st_stack_36->GetYaxis()->SetLabelSize(0.05);
   st_stack_36->GetYaxis()->SetTitleSize(0.057);
   st_stack_36->GetYaxis()->SetTitleOffset(1.2);
   st_stack_36->GetYaxis()->SetTitleFont(42);
   st_stack_36->GetZaxis()->SetLabelFont(42);
   st_stack_36->GetZaxis()->SetLabelSize(0.035);
   st_stack_36->GetZaxis()->SetTitleSize(0.035);
   st_stack_36->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_36);
   
   
   TH1D *VbbHcc_tags_CutFlow_all_stack_1 = new TH1D("VbbHcc_tags_CutFlow_all_stack_1","",5,0,5);
   VbbHcc_tags_CutFlow_all_stack_1->SetBinContent(1,1.759952e+11);
   VbbHcc_tags_CutFlow_all_stack_1->SetBinContent(2,1.759841e+11);
   VbbHcc_tags_CutFlow_all_stack_1->SetBinContent(3,1.724441e+10);
   VbbHcc_tags_CutFlow_all_stack_1->SetBinContent(4,5.281788e+08);
   VbbHcc_tags_CutFlow_all_stack_1->SetBinContent(5,4.441751e+07);
   VbbHcc_tags_CutFlow_all_stack_1->SetBinError(1,1.469553e+07);
   VbbHcc_tags_CutFlow_all_stack_1->SetBinError(2,1.469509e+07);
   VbbHcc_tags_CutFlow_all_stack_1->SetBinError(3,4597375);
   VbbHcc_tags_CutFlow_all_stack_1->SetBinError(4,801829.4);
   VbbHcc_tags_CutFlow_all_stack_1->SetBinError(5,232422.5);
   VbbHcc_tags_CutFlow_all_stack_1->SetEntries(3.027061e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_CutFlow_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_CutFlow_all_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_all_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_all_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_all_stack_1->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_all_stack_1->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_all_stack_1->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_all_stack_1,"");
   
   TH1D *VbbHcc_tags_CutFlow_all_stack_2 = new TH1D("VbbHcc_tags_CutFlow_all_stack_2","",5,0,5);
   VbbHcc_tags_CutFlow_all_stack_2->SetBinContent(1,3.269274e+07);
   VbbHcc_tags_CutFlow_all_stack_2->SetBinContent(2,3.204092e+07);
   VbbHcc_tags_CutFlow_all_stack_2->SetBinContent(3,7419713);
   VbbHcc_tags_CutFlow_all_stack_2->SetBinContent(4,2395078);
   VbbHcc_tags_CutFlow_all_stack_2->SetBinContent(5,485251.2);
   VbbHcc_tags_CutFlow_all_stack_2->SetBinError(1,1843.323);
   VbbHcc_tags_CutFlow_all_stack_2->SetBinError(2,1813.061);
   VbbHcc_tags_CutFlow_all_stack_2->SetBinError(3,1038.141);
   VbbHcc_tags_CutFlow_all_stack_2->SetBinError(4,562.0655);
   VbbHcc_tags_CutFlow_all_stack_2->SetBinError(5,268.2726);
   VbbHcc_tags_CutFlow_all_stack_2->SetEntries(1.317729e+09);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_CutFlow_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_CutFlow_all_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_all_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_all_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_all_stack_2->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_all_stack_2->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_all_stack_2->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_all_stack_2,"");
   
   TH1D *VbbHcc_tags_CutFlow_all_stack_3 = new TH1D("VbbHcc_tags_CutFlow_all_stack_3","",5,0,5);
   VbbHcc_tags_CutFlow_all_stack_3->SetBinContent(1,9.416987e+07);
   VbbHcc_tags_CutFlow_all_stack_3->SetBinContent(2,8.949811e+07);
   VbbHcc_tags_CutFlow_all_stack_3->SetBinContent(3,5.516321e+07);
   VbbHcc_tags_CutFlow_all_stack_3->SetBinContent(4,2.683908e+07);
   VbbHcc_tags_CutFlow_all_stack_3->SetBinContent(5,7032805);
   VbbHcc_tags_CutFlow_all_stack_3->SetBinError(1,2294.513);
   VbbHcc_tags_CutFlow_all_stack_3->SetBinError(2,2247.601);
   VbbHcc_tags_CutFlow_all_stack_3->SetBinError(3,1821.639);
   VbbHcc_tags_CutFlow_all_stack_3->SetBinError(4,1264.94);
   VbbHcc_tags_CutFlow_all_stack_3->SetBinError(5,660.2657);
   VbbHcc_tags_CutFlow_all_stack_3->SetEntries(5.047964e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_CutFlow_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_CutFlow_all_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_all_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_all_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_all_stack_3->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_all_stack_3->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_all_stack_3->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_all_stack_3,"");
   
   TH1D *VbbHcc_tags_CutFlow_all_stack_4 = new TH1D("VbbHcc_tags_CutFlow_all_stack_4","",5,0,5);
   VbbHcc_tags_CutFlow_all_stack_4->SetBinContent(1,1.293349e+07);
   VbbHcc_tags_CutFlow_all_stack_4->SetBinContent(2,1.291742e+07);
   VbbHcc_tags_CutFlow_all_stack_4->SetBinContent(3,6554522);
   VbbHcc_tags_CutFlow_all_stack_4->SetBinContent(4,741445.5);
   VbbHcc_tags_CutFlow_all_stack_4->SetBinContent(5,118233.1);
   VbbHcc_tags_CutFlow_all_stack_4->SetBinError(1,1973.353);
   VbbHcc_tags_CutFlow_all_stack_4->SetBinError(2,1972.101);
   VbbHcc_tags_CutFlow_all_stack_4->SetBinError(3,1404.852);
   VbbHcc_tags_CutFlow_all_stack_4->SetBinError(4,474.3521);
   VbbHcc_tags_CutFlow_all_stack_4->SetBinError(5,189.3813);
   VbbHcc_tags_CutFlow_all_stack_4->SetEntries(1.114001e+08);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_CutFlow_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_CutFlow_all_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_all_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_all_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_all_stack_4->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_all_stack_4->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_all_stack_4->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_all_stack_4,"");
   
   TH1D *VbbHcc_tags_CutFlow_all_stack_5 = new TH1D("VbbHcc_tags_CutFlow_all_stack_5","",5,0,5);
   VbbHcc_tags_CutFlow_all_stack_5->SetBinContent(1,3.131445e+07);
   VbbHcc_tags_CutFlow_all_stack_5->SetBinContent(2,3.128333e+07);
   VbbHcc_tags_CutFlow_all_stack_5->SetBinContent(3,1.557779e+07);
   VbbHcc_tags_CutFlow_all_stack_5->SetBinContent(4,338256.2);
   VbbHcc_tags_CutFlow_all_stack_5->SetBinContent(5,70218.08);
   VbbHcc_tags_CutFlow_all_stack_5->SetBinError(1,5809.073);
   VbbHcc_tags_CutFlow_all_stack_5->SetBinError(2,5806.143);
   VbbHcc_tags_CutFlow_all_stack_5->SetBinError(3,4097.283);
   VbbHcc_tags_CutFlow_all_stack_5->SetBinError(4,605.9148);
   VbbHcc_tags_CutFlow_all_stack_5->SetBinError(5,276.0202);
   VbbHcc_tags_CutFlow_all_stack_5->SetEntries(7.31412e+07);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_CutFlow_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_CutFlow_all_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_all_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_all_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_all_stack_5->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_all_stack_5->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_all_stack_5->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_all_stack_5,"");
   
   TH1D *VbbHcc_tags_CutFlow_all_stack_6 = new TH1D("VbbHcc_tags_CutFlow_all_stack_6","",5,0,5);
   VbbHcc_tags_CutFlow_all_stack_6->SetBinContent(1,8595903);
   VbbHcc_tags_CutFlow_all_stack_6->SetBinContent(2,8462542);
   VbbHcc_tags_CutFlow_all_stack_6->SetBinContent(3,661463.3);
   VbbHcc_tags_CutFlow_all_stack_6->SetBinContent(4,12352.9);
   VbbHcc_tags_CutFlow_all_stack_6->SetBinContent(5,2155.732);
   VbbHcc_tags_CutFlow_all_stack_6->SetBinError(1,1050.349);
   VbbHcc_tags_CutFlow_all_stack_6->SetBinError(2,1042.029);
   VbbHcc_tags_CutFlow_all_stack_6->SetBinError(3,292.0835);
   VbbHcc_tags_CutFlow_all_stack_6->SetBinError(4,41.25279);
   VbbHcc_tags_CutFlow_all_stack_6->SetBinError(5,17.20517);
   VbbHcc_tags_CutFlow_all_stack_6->SetEntries(1.629594e+08);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_CutFlow_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_CutFlow_all_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_all_stack_6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_all_stack_6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_all_stack_6->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_all_stack_6->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_all_stack_6->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_all_stack_6,"");
   
   TH1D *VbbHcc_tags_CutFlow_all_stack_7 = new TH1D("VbbHcc_tags_CutFlow_all_stack_7","",5,0,5);
   VbbHcc_tags_CutFlow_all_stack_7->SetBinContent(1,3122385);
   VbbHcc_tags_CutFlow_all_stack_7->SetBinContent(2,3051346);
   VbbHcc_tags_CutFlow_all_stack_7->SetBinContent(3,278458.7);
   VbbHcc_tags_CutFlow_all_stack_7->SetBinContent(4,25819.53);
   VbbHcc_tags_CutFlow_all_stack_7->SetBinContent(5,4046.892);
   VbbHcc_tags_CutFlow_all_stack_7->SetBinError(1,540.5191);
   VbbHcc_tags_CutFlow_all_stack_7->SetBinError(2,534.2551);
   VbbHcc_tags_CutFlow_all_stack_7->SetBinError(3,161.7329);
   VbbHcc_tags_CutFlow_all_stack_7->SetBinError(4,50.33222);
   VbbHcc_tags_CutFlow_all_stack_7->SetBinError(5,19.96327);
   VbbHcc_tags_CutFlow_all_stack_7->SetEntries(8.079143e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_CutFlow_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_CutFlow_all_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_all_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_all_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_all_stack_7->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_all_stack_7->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_all_stack_7->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_all_stack_7,"");
   
   TH1D *VbbHcc_tags_CutFlow_all_stack_8 = new TH1D("VbbHcc_tags_CutFlow_all_stack_8","",5,0,5);
   VbbHcc_tags_CutFlow_all_stack_8->SetBinContent(1,1378289);
   VbbHcc_tags_CutFlow_all_stack_8->SetBinContent(2,1343174);
   VbbHcc_tags_CutFlow_all_stack_8->SetBinContent(3,135742.8);
   VbbHcc_tags_CutFlow_all_stack_8->SetBinContent(4,23229.08);
   VbbHcc_tags_CutFlow_all_stack_8->SetBinContent(5,3832.742);
   VbbHcc_tags_CutFlow_all_stack_8->SetBinError(1,500.9763);
   VbbHcc_tags_CutFlow_all_stack_8->SetBinError(2,494.5504);
   VbbHcc_tags_CutFlow_all_stack_8->SetBinError(3,157.2376);
   VbbHcc_tags_CutFlow_all_stack_8->SetBinError(4,65.0974);
   VbbHcc_tags_CutFlow_all_stack_8->SetBinError(5,26.44232);
   VbbHcc_tags_CutFlow_all_stack_8->SetEntries(1.584514e+07);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_CutFlow_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_CutFlow_all_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_all_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_all_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_all_stack_8->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_all_stack_8->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_all_stack_8->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_all_stack_8,"");
   
   TH1D *VbbHcc_tags_CutFlow_all_stack_9 = new TH1D("VbbHcc_tags_CutFlow_all_stack_9","",5,0,5);
   VbbHcc_tags_CutFlow_all_stack_9->SetBinContent(1,40704.26);
   VbbHcc_tags_CutFlow_all_stack_9->SetBinContent(2,40643.19);
   VbbHcc_tags_CutFlow_all_stack_9->SetBinContent(3,12886.14);
   VbbHcc_tags_CutFlow_all_stack_9->SetBinContent(4,7372.305);
   VbbHcc_tags_CutFlow_all_stack_9->SetBinContent(5,1343.322);
   VbbHcc_tags_CutFlow_all_stack_9->SetBinError(1,7.957531);
   VbbHcc_tags_CutFlow_all_stack_9->SetBinError(2,7.951608);
   VbbHcc_tags_CutFlow_all_stack_9->SetBinError(3,4.39568);
   VbbHcc_tags_CutFlow_all_stack_9->SetBinError(4,3.337409);
   VbbHcc_tags_CutFlow_all_stack_9->SetBinError(5,1.422219);
   VbbHcc_tags_CutFlow_all_stack_9->SetEntries(7.474195e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_CutFlow_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_CutFlow_all_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_all_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_all_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_all_stack_9->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_all_stack_9->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_all_stack_9->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_all_stack_9,"");
   
   TH1D *VbbHcc_tags_CutFlow_all_stack_10 = new TH1D("VbbHcc_tags_CutFlow_all_stack_10","",5,0,5);
   VbbHcc_tags_CutFlow_all_stack_10->SetBinContent(1,5653.59);
   VbbHcc_tags_CutFlow_all_stack_10->SetBinContent(2,5628.299);
   VbbHcc_tags_CutFlow_all_stack_10->SetBinContent(3,3485.419);
   VbbHcc_tags_CutFlow_all_stack_10->SetBinContent(4,1956.816);
   VbbHcc_tags_CutFlow_all_stack_10->SetBinContent(5,410.6372);
   VbbHcc_tags_CutFlow_all_stack_10->SetBinError(1,1.463401);
   VbbHcc_tags_CutFlow_all_stack_10->SetBinError(2,1.460124);
   VbbHcc_tags_CutFlow_all_stack_10->SetBinError(3,1.149023);
   VbbHcc_tags_CutFlow_all_stack_10->SetBinError(4,0.8609466);
   VbbHcc_tags_CutFlow_all_stack_10->SetBinError(5,0.394394);
   VbbHcc_tags_CutFlow_all_stack_10->SetEntries(4.546163e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_CutFlow_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_CutFlow_all_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_all_stack_10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_all_stack_10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_all_stack_10->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_all_stack_10->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_all_stack_10->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_all_stack_10,"");
   
   TH1D *VbbHcc_tags_CutFlow_all_stack_11 = new TH1D("VbbHcc_tags_CutFlow_all_stack_11","",5,0,5);
   VbbHcc_tags_CutFlow_all_stack_11->SetBinContent(1,2021.566);
   VbbHcc_tags_CutFlow_all_stack_11->SetBinContent(2,2019.669);
   VbbHcc_tags_CutFlow_all_stack_11->SetBinContent(3,701.9435);
   VbbHcc_tags_CutFlow_all_stack_11->SetBinContent(4,118.8546);
   VbbHcc_tags_CutFlow_all_stack_11->SetBinContent(5,22.51089);
   VbbHcc_tags_CutFlow_all_stack_11->SetBinError(1,1.792104);
   VbbHcc_tags_CutFlow_all_stack_11->SetBinError(2,1.791274);
   VbbHcc_tags_CutFlow_all_stack_11->SetBinError(3,1.037097);
   VbbHcc_tags_CutFlow_all_stack_11->SetBinError(4,0.4275413);
   VbbHcc_tags_CutFlow_all_stack_11->SetBinError(5,0.186601);
   VbbHcc_tags_CutFlow_all_stack_11->SetEntries(3461131);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_CutFlow_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_CutFlow_all_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_all_stack_11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_all_stack_11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_all_stack_11->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_all_stack_11->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_all_stack_11->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_all_stack_11,"");
   
   TH1D *VbbHcc_tags_CutFlow_all_stack_12 = new TH1D("VbbHcc_tags_CutFlow_all_stack_12","",5,0,5);
   VbbHcc_tags_CutFlow_all_stack_12->SetBinContent(1,5980523);
   VbbHcc_tags_CutFlow_all_stack_12->SetBinContent(2,5965514);
   VbbHcc_tags_CutFlow_all_stack_12->SetBinContent(3,3925774);
   VbbHcc_tags_CutFlow_all_stack_12->SetBinContent(4,741047.4);
   VbbHcc_tags_CutFlow_all_stack_12->SetBinContent(5,159569.1);
   VbbHcc_tags_CutFlow_all_stack_12->SetBinError(1,4982.851);
   VbbHcc_tags_CutFlow_all_stack_12->SetBinError(2,4976.621);
   VbbHcc_tags_CutFlow_all_stack_12->SetBinError(3,4033.683);
   VbbHcc_tags_CutFlow_all_stack_12->SetBinError(4,1754.702);
   VbbHcc_tags_CutFlow_all_stack_12->SetBinError(5,813.2704);
   VbbHcc_tags_CutFlow_all_stack_12->SetEntries(4080603);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_CutFlow_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_CutFlow_all_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_all_stack_12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_all_stack_12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_all_stack_12->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_all_stack_12->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_all_stack_12->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_CutFlow_all__71 = new TH1D("VbbHcc_tags_CutFlow_all__71","",5,0,5);
   VbbHcc_tags_CutFlow_all__71->SetBinContent(1,1.413312e+09);
   VbbHcc_tags_CutFlow_all__71->SetBinContent(2,1.401945e+09);
   VbbHcc_tags_CutFlow_all__71->SetBinContent(3,6.054523e+08);
   VbbHcc_tags_CutFlow_all__71->SetBinContent(4,5.978124e+07);
   VbbHcc_tags_CutFlow_all__71->SetBinContent(5,1.899801e+07);
   VbbHcc_tags_CutFlow_all__71->SetEntries(3.499488e+09);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_all__71->SetLineColor(ci);
   VbbHcc_tags_CutFlow_all__71->SetLineWidth(2);
   VbbHcc_tags_CutFlow_all__71->SetMarkerStyle(20);
   VbbHcc_tags_CutFlow_all__71->SetMarkerSize(1.2);
   VbbHcc_tags_CutFlow_all__71->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_all__71->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_all__71->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_all__71->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_all__71->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_all__71->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_all__71->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all__71->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all__71->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all__71->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all__71->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all__71->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all__71->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all__71->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_CutFlow_all__71->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all__71->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_all__71->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_CutFlow_all__71->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_CutFlow_all__71->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_all__71->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_CutFlow_all_fx1071[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t Graph_from_VbbHcc_tags_CutFlow_all_fy1071[5] = {
   1.761854e+11,
   1.761687e+11,
   1.733415e+10,
   5.593046e+08,
   5.22954e+07};
   Double_t Graph_from_VbbHcc_tags_CutFlow_all_fex1071[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_VbbHcc_tags_CutFlow_all_fey1071[5] = {
   1.469553e+07,
   1.46951e+07,
   4597380,
   801832.9,
   232425.2};
   TGraphErrors *gre = new TGraphErrors(5,Graph_from_VbbHcc_tags_CutFlow_all_fx1071,Graph_from_VbbHcc_tags_CutFlow_all_fy1071,Graph_from_VbbHcc_tags_CutFlow_all_fex1071,Graph_from_VbbHcc_tags_CutFlow_all_fey1071);
   gre->SetName("Graph_from_VbbHcc_tags_CutFlow_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_CutFlow_all1071 = new TH1F("Graph_Graph_from_VbbHcc_tags_CutFlow_all1071","",100,0,5.5);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->SetMinimum(4.685668e+07);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->SetMaximum(1.938149e+11);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_CutFlow_all1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_CutFlow_all1071);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_CutFlow_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_CutFlow_all","MC unc. (stat.)","fl");

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
   CutFlow_VbbHcc_all->cd();
  
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
   
   TH1D *data_mc_ratio__72 = new TH1D("data_mc_ratio__72","",5,0,5);
   data_mc_ratio__72->SetBinContent(1,0.008021729);
   data_mc_ratio__72->SetBinContent(2,0.00795797);
   data_mc_ratio__72->SetBinContent(3,0.0349283);
   data_mc_ratio__72->SetBinContent(4,0.106885);
   data_mc_ratio__72->SetBinContent(5,0.3632827);
   data_mc_ratio__72->SetBinError(1,2.133777e-07);
   data_mc_ratio__72->SetBinError(2,2.125381e-07);
   data_mc_ratio__72->SetBinError(3,1.419507e-06);
   data_mc_ratio__72->SetBinError(4,1.382401e-05);
   data_mc_ratio__72->SetBinError(5,8.334712e-05);
   data_mc_ratio__72->SetMinimum(0.4);
   data_mc_ratio__72->SetMaximum(1.6);
   data_mc_ratio__72->SetEntries(102940.7);
   data_mc_ratio__72->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__72->SetLineColor(ci);
   data_mc_ratio__72->SetLineWidth(2);
   data_mc_ratio__72->SetMarkerStyle(20);
   data_mc_ratio__72->SetMarkerSize(1.2);
   data_mc_ratio__72->GetXaxis()->SetTitle(""Cut flow"");
   data_mc_ratio__72->GetXaxis()->SetBinLabel(1,"Total");
   data_mc_ratio__72->GetXaxis()->SetBinLabel(2,"MET cut");
   data_mc_ratio__72->GetXaxis()->SetBinLabel(3,"jet cuts");
   data_mc_ratio__72->GetXaxis()->SetBinLabel(4,"b-tags");
   data_mc_ratio__72->GetXaxis()->SetBinLabel(5,"c-tags");
   data_mc_ratio__72->GetXaxis()->SetRange(1,6);
   data_mc_ratio__72->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__72->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__72->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__72->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__72->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__72->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__72->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__72->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__72->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__72->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__72->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__72->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__72->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__72->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__72->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__72->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__72->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1072[5] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5};
   Double_t Graph_from_mc_statistical_error_fy1072[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1072[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_mc_statistical_error_fey1072[5] = {
   8.340947e-05,
   8.341491e-05,
   0.000265221,
   0.001433625,
   0.004444468};
   gre = new TGraphErrors(5,Graph_from_mc_statistical_error_fx1072,Graph_from_mc_statistical_error_fy1072,Graph_from_mc_statistical_error_fex1072,Graph_from_mc_statistical_error_fey1072);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1072 = new TH1F("Graph_Graph_from_mc_statistical_error1072","",100,0,5.5);
   Graph_Graph_from_mc_statistical_error1072->SetMinimum(0.9946666);
   Graph_Graph_from_mc_statistical_error1072->SetMaximum(1.005333);
   Graph_Graph_from_mc_statistical_error1072->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1072->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1072->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1072);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,7,1);
   line->Draw();
   bottomPad->Modified();
   CutFlow_VbbHcc_all->cd();
   CutFlow_VbbHcc_all->Modified();
   CutFlow_VbbHcc_all->cd();
   CutFlow_VbbHcc_all->SetSelected(CutFlow_VbbHcc_all);
}
