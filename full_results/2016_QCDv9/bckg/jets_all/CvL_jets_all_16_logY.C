#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_16_logY()
{
//=========Macro generated from canvas: CvL_jets_all_16/CvL_jets_all_16
//=========  (Mon Dec 19 11:02:05 2022) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_16 = new TCanvas("CvL_jets_all_16", "CvL_jets_all_16",0,0,600,600);
   CvL_jets_all_16->SetHighLightColor(2);
   CvL_jets_all_16->Range(-0.2183529,4.745439,1.171633,16.03929);
   CvL_jets_all_16->SetFillColor(0);
   CvL_jets_all_16->SetFillStyle(4000);
   CvL_jets_all_16->SetBorderMode(0);
   CvL_jets_all_16->SetBorderSize(2);
   CvL_jets_all_16->SetLogy();
   CvL_jets_all_16->SetLeftMargin(0.15709);
   CvL_jets_all_16->SetRightMargin(0.1234783);
   CvL_jets_all_16->SetBottomMargin(0.12);
   CvL_jets_all_16->SetFrameFillStyle(1000);
   CvL_jets_all_16->SetFrameBorderMode(0);
   CvL_jets_all_16->SetFrameFillStyle(1000);
   CvL_jets_all_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(6126534);
   st->SetMaximum(3.195059e+14);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",20,0,1);
   st_stack_113->SetMinimum(1260959);
   st_stack_113->SetMaximum(8.126481e+14);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_113->GetXaxis()->SetRange(1,20);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetTitleOffset(1);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Events/0.05");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetTitleSize(0.037);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetTitleOffset(1);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,6.909381e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,3.194955e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,7.153289e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,1.763224e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,7.778447e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,4.410255e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,2.676648e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,1.803559e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,1.364123e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,1.085142e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,8.798962e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,7.401547e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,6.657503e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,6.237077e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,6.123881e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,6.324905e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,6.830975e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,8.097737e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,1.002416e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,1.915053e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,1.08331e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,2.360424e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.112438e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,5.509238e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,3.655283e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,2.750512e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,2.140825e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,1.755918e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,1.526988e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,1.361164e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,1.224398e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,1.122257e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,1.063547e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,1.028661e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,1.018209e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,1.033472e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,1.072804e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,1.166749e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,1.296463e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,1.789644e+07);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(1.392964e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvL_stack_2 = new TH1D("VbbHcc_jets_all_CvL_stack_2","",20,0,1);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,3.127983e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,1.035146e+08);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,2.944602e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,1.003049e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,5670119);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,3962089);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,3015242);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,2491564);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,2243449);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,2118647);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,2063445);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,2064436);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,2186265);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,2365956);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,2653616);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,3097584);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,3705635);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,4729478);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,6077706);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,9904672);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,1493.762);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,2754.051);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,1474.251);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,862.8363);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,646.5283);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,540.2486);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,471.0394);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,427.8076);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,405.63);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,393.8762);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,388.3551);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,388.1053);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,399.0412);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,414.8942);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,439.2439);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,474.4359);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,518.7428);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,585.9855);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,664.6074);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,852.8769);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(3.578258e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_all_16->Modified();
   CvL_jets_all_16->cd();
   CvL_jets_all_16->SetSelected(CvL_jets_all_16);
}
