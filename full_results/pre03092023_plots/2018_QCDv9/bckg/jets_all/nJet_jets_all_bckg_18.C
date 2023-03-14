#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_all_bckg_18()
{
//=========Macro generated from canvas: nJet_jets_all_bckg_18/nJet_jets_all_bckg_18
//=========  (Wed Mar  1 14:06:14 2023) by ROOT version 6.26/06
   TCanvas *nJet_jets_all_bckg_18 = new TCanvas("nJet_jets_all_bckg_18", "nJet_jets_all_bckg_18",0,0,600,600);
   nJet_jets_all_bckg_18->SetHighLightColor(2);
   nJet_jets_all_bckg_18->Range(-3.556941,-1.020169e+11,15.90286,7.481238e+11);
   nJet_jets_all_bckg_18->SetFillColor(0);
   nJet_jets_all_bckg_18->SetFillStyle(4000);
   nJet_jets_all_bckg_18->SetBorderMode(0);
   nJet_jets_all_bckg_18->SetBorderSize(2);
   nJet_jets_all_bckg_18->SetLeftMargin(0.15709);
   nJet_jets_all_bckg_18->SetRightMargin(0.1234783);
   nJet_jets_all_bckg_18->SetBottomMargin(0.12);
   nJet_jets_all_bckg_18->SetFrameFillStyle(1000);
   nJet_jets_all_bckg_18->SetFrameBorderMode(0);
   nJet_jets_all_bckg_18->SetFrameFillStyle(1000);
   nJet_jets_all_bckg_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6.631097e+11);
   
   TH1F *st_stack_162 = new TH1F("st_stack_162","",14,-0.5,13.5);
   st_stack_162->SetMinimum(0);
   st_stack_162->SetMaximum(6.631097e+11);
   st_stack_162->SetDirectory(0);
   st_stack_162->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_162->SetLineColor(ci);
   st_stack_162->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_162->GetXaxis()->SetRange(1,14);
   st_stack_162->GetXaxis()->SetLabelFont(42);
   st_stack_162->GetXaxis()->SetTitleOffset(1);
   st_stack_162->GetXaxis()->SetTitleFont(42);
   st_stack_162->GetYaxis()->SetTitle("Events/1.0");
   st_stack_162->GetYaxis()->SetLabelFont(42);
   st_stack_162->GetYaxis()->SetTitleSize(0.037);
   st_stack_162->GetYaxis()->SetTitleFont(42);
   st_stack_162->GetZaxis()->SetLabelFont(42);
   st_stack_162->GetZaxis()->SetTitleOffset(1);
   st_stack_162->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_162);
   
   
   TH1D *VbbHcc_jets_all_nJet_stack_1 = new TH1D("VbbHcc_jets_all_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(1,8.846638e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(2,4.627653e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(3,1.665504e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(4,3.757395e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(5,4.420716e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(6,3.813182e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(7,2.763577e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(8,1.780156e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(9,1.051133e+11);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(10,5.785292e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(11,3.001503e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(12,1.484601e+10);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(13,6.999248e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(14,3.175844e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinContent(15,2.377518e+09);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(1,1645499);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(2,1.330391e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(3,8.118071e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(4,1.145179e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(5,1.152563e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(6,1.007581e+08);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(7,8.193961e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(8,6.343633e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(9,4.741418e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(10,3.432233e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(11,2.420577e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(12,1.672661e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(13,1.124571e+07);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(14,7436036);
   VbbHcc_jets_all_nJet_stack_1->SetBinError(15,6236937);
   VbbHcc_jets_all_nJet_stack_1->SetEntries(3.038349e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nJet_stack_2 = new TH1D("VbbHcc_jets_all_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(1,37.8239);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(2,2161.859);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(3,41155.07);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(4,350204);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(5,1582679);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(6,4173338);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(7,7206186);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(8,9077447);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(9,9106644);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(10,7704126);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(11,5704629);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(12,3800488);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(13,2317308);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(14,1311587);
   VbbHcc_jets_all_nJet_stack_2->SetBinContent(15,1340888);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(1,1.485095);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(2,12.50476);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(3,57.88736);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(4,172.0228);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(5,375.5299);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(6,621.8732);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(7,818.5672);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(8,906.3494);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(9,891.8142);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(10,804.8642);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(11,679.9923);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(12,545.9549);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(13,419.4037);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(14,311.4395);
   VbbHcc_jets_all_nJet_stack_2->SetBinError(15,307.8995);
   VbbHcc_jets_all_nJet_stack_2->SetEntries(7.957776e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nJet_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_all_bckg_18->Modified();
   nJet_jets_all_bckg_18->cd();
   nJet_jets_all_bckg_18->SetSelected(nJet_jets_all_bckg_18);
}
