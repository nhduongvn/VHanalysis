#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_jets_17()
{
//=========Macro generated from canvas: nJet_jets_17/nJet_jets_17
//=========  (Mon Dec 19 11:03:46 2022) by ROOT version 6.26/06
   TCanvas *nJet_jets_17 = new TCanvas("nJet_jets_17", "nJet_jets_17",0,0,600,600);
   nJet_jets_17->SetHighLightColor(2);
   nJet_jets_17->Range(-3.556941,-55.02014,15.90286,403.4811);
   nJet_jets_17->SetFillColor(0);
   nJet_jets_17->SetFillStyle(4000);
   nJet_jets_17->SetBorderMode(0);
   nJet_jets_17->SetBorderSize(2);
   nJet_jets_17->SetLeftMargin(0.15709);
   nJet_jets_17->SetRightMargin(0.1234783);
   nJet_jets_17->SetBottomMargin(0.12);
   nJet_jets_17->SetFrameFillStyle(1000);
   nJet_jets_17->SetFrameBorderMode(0);
   nJet_jets_17->SetFrameFillStyle(1000);
   nJet_jets_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(357.6309);
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",14,-0.5,13.5);
   st_stack_2->SetMinimum(0);
   st_stack_2->SetMaximum(357.6309);
   st_stack_2->SetDirectory(0);
   st_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_2->SetLineColor(ci);
   st_stack_2->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_2->GetXaxis()->SetRange(1,14);
   st_stack_2->GetXaxis()->SetLabelFont(42);
   st_stack_2->GetXaxis()->SetTitleOffset(1);
   st_stack_2->GetXaxis()->SetTitleFont(42);
   st_stack_2->GetYaxis()->SetTitle("Events/1.0");
   st_stack_2->GetYaxis()->SetLabelFont(42);
   st_stack_2->GetYaxis()->SetTitleSize(0.037);
   st_stack_2->GetYaxis()->SetTitleFont(42);
   st_stack_2->GetZaxis()->SetLabelFont(42);
   st_stack_2->GetZaxis()->SetTitleOffset(1);
   st_stack_2->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_2);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,27.65204);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,70.83744);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,152.9184);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,214.2052);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,162.4626);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,62.26793);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,20.09871);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,6.180149);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,1.650179);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,0.3915146);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,0.1216632);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,0.0253551);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,0.009327633);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,0.2361144);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,0.3703217);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,0.536431);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,0.6306065);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,0.5454039);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,0.3326931);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,0.1876949);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,0.1040305);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,0.0533637);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,0.02571355);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,0.01466117);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,0.006862831);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,0.004138877);
   VbbHcc_jets_nJet_stack_1->SetEntries(495304);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nJet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,0.2071104);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,1.769448);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,9.079821);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,24.21543);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,32.17193);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,20.29133);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,8.245401);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,2.559333);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,0.6861844);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,0.1573423);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,0.03442011);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,0.00664898);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,0.00102282);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,0.006879194);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,0.02024997);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,0.04670727);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,0.07687459);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,0.08872847);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,0.07037927);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,0.04477624);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,0.0248786);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,0.01284066);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,0.006136168);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,0.002893265);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,0.00121842);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,0.0004486212);
   VbbHcc_jets_nJet_stack_2->SetEntries(465395);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nJet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_jets_17->Modified();
   nJet_jets_17->cd();
   nJet_jets_17->SetSelected(nJet_jets_17);
}
