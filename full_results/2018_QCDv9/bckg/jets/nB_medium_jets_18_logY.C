#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_18_logY()
{
//=========Macro generated from canvas: nB_medium_jets_18/nB_medium_jets_18
//=========  (Mon Dec 19 11:02:03 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_18 = new TCanvas("nB_medium_jets_18", "nB_medium_jets_18",0,0,600,600);
   nB_medium_jets_18->SetHighLightColor(2);
   nB_medium_jets_18->Range(-2.683529,-2.149244,11.21633,16.7346);
   nB_medium_jets_18->SetFillColor(0);
   nB_medium_jets_18->SetFillStyle(4000);
   nB_medium_jets_18->SetBorderMode(0);
   nB_medium_jets_18->SetBorderSize(2);
   nB_medium_jets_18->SetLogy();
   nB_medium_jets_18->SetLeftMargin(0.15709);
   nB_medium_jets_18->SetRightMargin(0.1234783);
   nB_medium_jets_18->SetBottomMargin(0.12);
   nB_medium_jets_18->SetFrameFillStyle(1000);
   nB_medium_jets_18->SetFrameBorderMode(0);
   nB_medium_jets_18->SetFrameFillStyle(1000);
   nB_medium_jets_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.919266e+14);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",10,-0.5,9.5);
   st_stack_19->SetMinimum(1.308632);
   st_stack_19->SetMaximum(7.018039e+14);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_19->GetXaxis()->SetRange(1,10);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetTitleOffset(1);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/1.0");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetTitleSize(0.037);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_jets_nB_medium_stack_1 = new TH1D("VbbHcc_jets_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(1,1.919258e+12);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(2,1.184432e+11);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(3,7.363675e+09);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(4,1.538687e+08);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(5,4155958);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(6,79893.12);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(7,880.5316);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(8,16.63751);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(1,2.329595e+08);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(2,5.602156e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(3,1.311887e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(4,1507600);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(5,181572.1);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(6,8555.181);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(7,157.582);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(8,14.28851);
   VbbHcc_jets_nB_medium_stack_1->SetEntries(3.026752e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_2 = new TH1D("VbbHcc_jets_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(1,7495207);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(2,2.34457e+07);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(3,2.00734e+07);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(4,2537009);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(5,159292.1);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(6,8054.91);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(7,415.2137);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(8,25.52715);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(9,2.411541);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(10,0.1847814);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(1,809.5509);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(2,1437.323);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(3,1337.29);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(4,484.4871);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(5,122.3315);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(6,27.27206);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(7,6.246696);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(8,1.54539);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(9,0.5729655);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(10,0.1311699);
   VbbHcc_jets_nB_medium_stack_2->SetEntries(7.771882e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_1","QCD","F");

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
   nB_medium_jets_18->Modified();
   nB_medium_jets_18->cd();
   nB_medium_jets_18->SetSelected(nB_medium_jets_18);
}
