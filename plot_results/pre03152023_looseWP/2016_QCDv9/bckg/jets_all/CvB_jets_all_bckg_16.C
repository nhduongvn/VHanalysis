#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_jets_all_bckg_16()
{
//=========Macro generated from canvas: CvB_jets_all_bckg_16/CvB_jets_all_bckg_16
//=========  (Fri Mar 10 12:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvB_jets_all_bckg_16 = new TCanvas("CvB_jets_all_bckg_16", "CvB_jets_all_bckg_16",0,0,600,600);
   CvB_jets_all_bckg_16->SetHighLightColor(2);
   CvB_jets_all_bckg_16->Range(-0.2183529,-1.468349e+11,1.171633,1.076789e+12);
   CvB_jets_all_bckg_16->SetFillColor(0);
   CvB_jets_all_bckg_16->SetFillStyle(4000);
   CvB_jets_all_bckg_16->SetBorderMode(0);
   CvB_jets_all_bckg_16->SetBorderSize(2);
   CvB_jets_all_bckg_16->SetLeftMargin(0.15709);
   CvB_jets_all_bckg_16->SetRightMargin(0.1234783);
   CvB_jets_all_bckg_16->SetBottomMargin(0.12);
   CvB_jets_all_bckg_16->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_16->SetFrameBorderMode(0);
   CvB_jets_all_bckg_16->SetFrameFillStyle(1000);
   CvB_jets_all_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.544268e+11);
   
   TH1F *st_stack_176 = new TH1F("st_stack_176","",20,0,1);
   st_stack_176->SetMinimum(0);
   st_stack_176->SetMaximum(9.544268e+11);
   st_stack_176->SetDirectory(0);
   st_stack_176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_176->SetLineColor(ci);
   st_stack_176->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_176->GetXaxis()->SetRange(1,20);
   st_stack_176->GetXaxis()->SetLabelFont(42);
   st_stack_176->GetXaxis()->SetTitleOffset(1);
   st_stack_176->GetXaxis()->SetTitleFont(42);
   st_stack_176->GetYaxis()->SetTitle("Event/0.05");
   st_stack_176->GetYaxis()->SetLabelFont(42);
   st_stack_176->GetYaxis()->SetTitleSize(0.037);
   st_stack_176->GetYaxis()->SetTitleFont(42);
   st_stack_176->GetZaxis()->SetLabelFont(42);
   st_stack_176->GetZaxis()->SetTitleOffset(1);
   st_stack_176->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_176);
   
   
   TH1D *VbbHcc_jets_all_CvB_stack_1 = new TH1D("VbbHcc_jets_all_CvB_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(1,2.454961e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(2,7.528247e+09);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(3,6.78633e+09);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(4,8.094469e+09);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(5,1.120236e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(6,1.657368e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(7,2.505746e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(8,3.822669e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(9,5.958321e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(10,1.051452e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(11,2.220736e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(12,7.303561e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(13,7.921501e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(14,5.366526e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(15,5.131038e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(16,5.490022e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(17,6.249482e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(18,5.99153e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(19,2.581598e+11);
   VbbHcc_jets_all_CvB_stack_1->SetBinContent(20,1.517801e+10);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(1,2.193997e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(2,1.226927e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(3,1.168508e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(4,1.279606e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(5,1.509122e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(6,1.838854e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(7,2.263833e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(8,2.798384e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(9,3.49363e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(10,4.640769e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(11,6.755556e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(12,1.228036e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(13,1.27777e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(14,1.051625e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(15,1.028523e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(16,1.062111e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(17,1.130014e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(18,1.093105e+08);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(19,7.120936e+07);
   VbbHcc_jets_all_CvB_stack_1->SetBinError(20,1.643707e+07);
   VbbHcc_jets_all_CvB_stack_1->SetEntries(1.395931e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvB_stack_1->SetFillColor(ci);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_stack_2 = new TH1D("VbbHcc_jets_all_CvB_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(1,1.9876e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(2,3917652);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(3,2720120);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(4,2532653);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(5,2584210);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(6,2611407);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(7,2812548);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(8,3358786);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(9,4276396);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(10,5609362);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(11,8876090);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(12,2.181165e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(13,2.409095e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(14,1.886164e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(15,1.940895e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(16,2.105575e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(17,2.391998e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(18,2.449848e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(19,1.773982e+07);
   VbbHcc_jets_all_CvB_stack_2->SetBinContent(20,2392437);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(1,1112.119);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(2,493.1479);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(3,410.6127);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(4,395.0532);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(5,398.7638);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(6,401.0779);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(7,416.0897);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(8,452.4959);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(9,508.592);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(10,585.5678);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(11,738.2152);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(12,1155.333);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(13,1214.003);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(14,1077.656);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(15,1099.141);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(16,1153.577);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(17,1233.209);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(18,1261.274);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(19,1084.971);
   VbbHcc_jets_all_CvB_stack_2->SetBinError(20,398.6032);
   VbbHcc_jets_all_CvB_stack_2->SetEntries(4.006936e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvB_stack_2->SetFillColor(ci);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all_bckg_16->Modified();
   CvB_jets_all_bckg_16->cd();
   CvB_jets_all_bckg_16->SetSelected(CvB_jets_all_bckg_16);
}
