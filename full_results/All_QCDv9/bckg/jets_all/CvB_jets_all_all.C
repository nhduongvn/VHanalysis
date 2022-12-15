void CvB_jets_all_all()
{
//=========Macro generated from canvas: CvB_jets_all_all/CvB_jets_all_all
//=========  (Thu Dec 15 10:05:12 2022) by ROOT version 6.14/09
   TCanvas *CvB_jets_all_all = new TCanvas("CvB_jets_all_all", "CvB_jets_all_all",0,0,600,600);
   CvB_jets_all_all->SetHighLightColor(2);
   CvB_jets_all_all->Range(-0.2183529,-8.590985e+11,1.171633,6.300056e+12);
   CvB_jets_all_all->SetFillColor(0);
   CvB_jets_all_all->SetFillStyle(4000);
   CvB_jets_all_all->SetBorderMode(0);
   CvB_jets_all_all->SetBorderSize(2);
   CvB_jets_all_all->SetLeftMargin(0.15709);
   CvB_jets_all_all->SetRightMargin(0.1234783);
   CvB_jets_all_all->SetBottomMargin(0.12);
   CvB_jets_all_all->SetFrameFillStyle(1000);
   CvB_jets_all_all->SetFrameBorderMode(0);
   CvB_jets_all_all->SetFrameFillStyle(1000);
   CvB_jets_all_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(5.318229e+12);
   
   TH1F *st_stack_60 = new TH1F("st_stack_60","",20,0,1);
   st_stack_60->SetMinimum(0);
   st_stack_60->SetMaximum(5.58414e+12);
   st_stack_60->SetDirectory(0);
   st_stack_60->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_60->SetLineColor(ci);
   st_stack_60->GetXaxis()->SetTitle("CvB tagging score");
   st_stack_60->GetXaxis()->SetRange(1,20);
   st_stack_60->GetXaxis()->SetLabelFont(42);
   st_stack_60->GetXaxis()->SetLabelSize(0.035);
   st_stack_60->GetXaxis()->SetTitleSize(0.035);
   st_stack_60->GetXaxis()->SetTitleFont(42);
   st_stack_60->GetYaxis()->SetTitle("Events/0.05");
   st_stack_60->GetYaxis()->SetLabelFont(42);
   st_stack_60->GetYaxis()->SetLabelSize(0.035);
   st_stack_60->GetYaxis()->SetTitleSize(0.037);
   st_stack_60->GetYaxis()->SetTitleOffset(0);
   st_stack_60->GetYaxis()->SetTitleFont(42);
   st_stack_60->GetZaxis()->SetLabelFont(42);
   st_stack_60->GetZaxis()->SetLabelSize(0.035);
   st_stack_60->GetZaxis()->SetTitleSize(0.035);
   st_stack_60->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_60);
   
   
   TH1D *VbbHcc_jets_all_CvB_all_stack_1 = new TH1D("VbbHcc_jets_all_CvB_all_stack_1","",20,0,1);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(1,1.163729e+11);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(2,3.5612e+10);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(3,3.345472e+10);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(4,4.062645e+10);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(5,5.641749e+10);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(6,8.354568e+10);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(7,1.240929e+11);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(8,1.827236e+11);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(9,2.836172e+11);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(10,5.06539e+11);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(11,1.027645e+12);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(12,3.333958e+12);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(13,3.545381e+12);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(14,2.312407e+12);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(15,2.04498e+12);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(16,2.198345e+12);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(17,2.609759e+12);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(18,2.640301e+12);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(19,1.18179e+12);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinContent(20,6.866255e+10);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(1,4.944822e+07);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(2,2.707234e+07);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(3,2.635018e+07);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(4,2.9068e+07);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(5,3.42609e+07);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(6,4.149577e+07);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(7,5.054666e+07);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(8,6.123522e+07);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(9,7.610851e+07);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(10,1.012479e+08);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(11,1.437301e+08);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(12,2.581894e+08);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(13,2.661925e+08);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(14,2.174033e+08);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(15,2.076341e+08);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(16,2.164024e+08);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(17,2.365466e+08);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(18,2.364117e+08);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(19,1.57861e+08);
   VbbHcc_jets_all_CvB_all_stack_1->SetBinError(20,3.627825e+07);
   VbbHcc_jets_all_CvB_all_stack_1->SetEntries(5.141745e+09);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvB_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvB_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_CvB_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_all_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvB_all_stack_2 = new TH1D("VbbHcc_jets_all_CvB_all_stack_2","",20,0,1);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(1,8.980918e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(2,1.599617e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(3,1.114545e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(4,1.048757e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(5,1.065382e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(6,1.075021e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(7,1.166325e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(8,1.383381e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(9,1.793086e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(10,2.400011e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(11,3.78117e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(12,9.582191e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(13,1.04689e+08);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(14,7.843245e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(15,7.642019e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(16,8.295356e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(17,9.721439e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(18,1.032863e+08);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(19,7.698395e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinContent(20,1.086039e+07);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(1,2647.84);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(2,1113.016);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(3,927.4961);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(4,897.2762);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(5,900.7639);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(6,904.1388);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(7,940.3672);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(8,1019.175);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(9,1152.105);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(10,1332.099);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(11,1667.328);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(12,2631.463);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(13,2755.261);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(14,2416.18);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(15,2421.297);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(16,2556.732);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(17,2785.071);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(18,2914.779);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(19,2559.445);
   VbbHcc_jets_all_CvB_all_stack_2->SetBinError(20,963.9111);
   VbbHcc_jets_all_CvB_all_stack_2->SetEntries(1.519822e+10);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvB_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvB_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvB_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvB_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_CvB_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvB_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvB_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvB_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvB_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvB_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvB_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvB_all_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_jets_all_all->Modified();
   CvB_jets_all_all->cd();
   CvB_jets_all_all->SetSelected(CvB_jets_all_all);
}
