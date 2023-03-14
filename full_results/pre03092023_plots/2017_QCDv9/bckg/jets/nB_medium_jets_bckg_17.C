#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_bckg_17()
{
//=========Macro generated from canvas: nB_medium_jets_bckg_17/nB_medium_jets_bckg_17
//=========  (Wed Mar  1 14:06:11 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_bckg_17 = new TCanvas("nB_medium_jets_bckg_17", "nB_medium_jets_bckg_17",0,0,600,600);
   nB_medium_jets_bckg_17->SetHighLightColor(2);
   nB_medium_jets_bckg_17->Range(-2.683529,-3.162486e+11,11.21633,2.319156e+12);
   nB_medium_jets_bckg_17->SetFillColor(0);
   nB_medium_jets_bckg_17->SetFillStyle(4000);
   nB_medium_jets_bckg_17->SetBorderMode(0);
   nB_medium_jets_bckg_17->SetBorderSize(2);
   nB_medium_jets_bckg_17->SetLeftMargin(0.15709);
   nB_medium_jets_bckg_17->SetRightMargin(0.1234783);
   nB_medium_jets_bckg_17->SetBottomMargin(0.12);
   nB_medium_jets_bckg_17->SetFrameFillStyle(1000);
   nB_medium_jets_bckg_17->SetFrameBorderMode(0);
   nB_medium_jets_bckg_17->SetFrameFillStyle(1000);
   nB_medium_jets_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.055616e+12);
   
   TH1F *st_stack_28 = new TH1F("st_stack_28","",10,-0.5,9.5);
   st_stack_28->SetMinimum(0);
   st_stack_28->SetMaximum(2.055616e+12);
   st_stack_28->SetDirectory(0);
   st_stack_28->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_28->SetLineColor(ci);
   st_stack_28->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_28->GetXaxis()->SetRange(1,10);
   st_stack_28->GetXaxis()->SetLabelFont(42);
   st_stack_28->GetXaxis()->SetTitleOffset(1);
   st_stack_28->GetXaxis()->SetTitleFont(42);
   st_stack_28->GetYaxis()->SetTitle("Events/1.0");
   st_stack_28->GetYaxis()->SetLabelFont(42);
   st_stack_28->GetYaxis()->SetTitleSize(0.037);
   st_stack_28->GetYaxis()->SetTitleFont(42);
   st_stack_28->GetZaxis()->SetLabelFont(42);
   st_stack_28->GetZaxis()->SetTitleOffset(1);
   st_stack_28->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_28);
   
   
   TH1D *VbbHcc_jets_nB_medium_stack_1 = new TH1D("VbbHcc_jets_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(1,1.370402e+12);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(2,3.813489e+10);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(3,1.588635e+09);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(4,1.865743e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(5,458644.8);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(6,6498.276);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(7,111.8126);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(8,10.44557);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(1,1.485342e+08);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(2,2.29981e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(3,4142678);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(4,246074.9);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(5,35312.16);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(6,1046.106);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(7,44.14539);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(8,9.765174);
   VbbHcc_jets_nB_medium_stack_1->SetEntries(3.054959e+08);

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
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(1,8876907);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(2,1.711746e+07);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(3,9481294);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(4,759833.4);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(5,33285.27);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(6,1296.009);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(7,58.2668);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(8,3.00544);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(9,0.01944646);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(10,0.1455494);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(1,754.299);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(2,1054.845);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(3,790.7584);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(4,231.7989);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(5,49.2398);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(6,9.739616);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(7,2.077596);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(8,0.4701496);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(9,0.1051583);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(10,0.1031372);
   VbbHcc_jets_nB_medium_stack_2->SetEntries(6.313347e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_bckg_17->Modified();
   nB_medium_jets_bckg_17->cd();
   nB_medium_jets_bckg_17->SetSelected(nB_medium_jets_bckg_17);
}
