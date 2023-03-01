#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_jets_nJet_18_logY()
{
//=========Macro generated from canvas: overlay_jets_nJet_18/overlay_jets_nJet_18
//=========  (Wed Mar  1 14:31:22 2023) by ROOT version 6.26/06
   TCanvas *overlay_jets_nJet_18 = new TCanvas("overlay_jets_nJet_18", "overlay_jets_nJet_18",0,0,600,600);
   gStyle->SetOptStat(0);
   overlay_jets_nJet_18->SetHighLightColor(2);
   overlay_jets_nJet_18->Range(-3.3,-12.58658,15.36667,1.623475);
   overlay_jets_nJet_18->SetFillColor(0);
   overlay_jets_nJet_18->SetBorderMode(0);
   overlay_jets_nJet_18->SetBorderSize(2);
   overlay_jets_nJet_18->SetLogy();
   overlay_jets_nJet_18->SetLeftMargin(0.15);
   overlay_jets_nJet_18->SetFrameBorderMode(0);
   overlay_jets_nJet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_57 = new TH1F("st_stack_57","",14,-0.5,13.5);
   st_stack_57->SetMinimum(6.830084e-12);
   st_stack_57->SetMaximum(1.59393);
   st_stack_57->SetDirectory(0);
   st_stack_57->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_57->SetLineColor(ci);
   st_stack_57->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_57->GetXaxis()->SetLabelFont(42);
   st_stack_57->GetXaxis()->SetTitleOffset(1);
   st_stack_57->GetXaxis()->SetTitleFont(42);
   st_stack_57->GetYaxis()->SetTitle("Events/1.0");
   st_stack_57->GetYaxis()->SetLabelFont(42);
   st_stack_57->GetYaxis()->SetTitleFont(42);
   st_stack_57->GetZaxis()->SetLabelFont(42);
   st_stack_57->GetZaxis()->SetTitleOffset(1);
   st_stack_57->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_57);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,0.1172559);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,0.1789431);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,0.3029638);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,0.2352156);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,0.1166634);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,0.03634388);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,0.009637432);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,0.002319029);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,0.0005338863);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,9.686939e-05);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,2.220449e-05);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,2.032851e-07);
   VbbHcc_jets_nJet_stack_1->SetBinContent(13,4.615368e-06);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,0.0005466752);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,0.0006471023);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,0.0008064073);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,0.0006878551);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,0.0004602011);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,0.0002523597);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,0.0001184645);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,5.923202e-05);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,2.774872e-05);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,1.282281e-05);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,5.806682e-06);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,2.032851e-07);
   VbbHcc_jets_nJet_stack_1->SetBinError(13,3.265601e-06);
   VbbHcc_jets_nJet_stack_1->SetEntries(992110);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->SetLineWidth(2);
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
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,0.5275854);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,0.2925141);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,0.1645159);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,0.01334209);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,0.00178701);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,0.0002195621);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,3.077131e-05);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,4.495876e-06);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,6.589082e-07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,1.014756e-07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,1.588036e-08);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,2.275752e-09);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,3.61039e-10);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,4.593573e-11);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,1.63315e-11);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,8.881845e-05);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,6.407234e-05);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,4.422582e-05);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,7.094384e-06);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,1.527106e-06);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,3.675862e-07);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,1.236208e-07);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,4.069575e-08);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,4.865012e-09);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,1.239831e-09);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,4.219085e-10);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,8.281688e-11);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,2.871522e-11);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,6.362863e-12);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,6.996711e-12);
   VbbHcc_jets_nJet_stack_2->SetEntries(1.099612e+09);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->SetLineStyle(2);
   VbbHcc_jets_nJet_stack_2->SetLineWidth(2);
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
   st->Draw("nostack,hist");
   
   TLegend *leg = new TLegend(0.6,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","nJet (signal)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","nJet (bckg)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
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
   overlay_jets_nJet_18->Modified();
   overlay_jets_nJet_18->cd();
   overlay_jets_nJet_18->SetSelected(overlay_jets_nJet_18);
}
