#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_jets_nJet_16()
{
//=========Macro generated from canvas: overlay_jets_nJet_16/overlay_jets_nJet_16
//=========  (Fri Mar 10 12:34:06 2023) by ROOT version 6.26/06
   TCanvas *overlay_jets_nJet_16 = new TCanvas("overlay_jets_nJet_16", "overlay_jets_nJet_16",0,0,600,600);
   gStyle->SetOptStat(0);
   overlay_jets_nJet_16->SetHighLightColor(2);
   overlay_jets_nJet_16->Range(-3.3,-0.06968737,15.36667,0.6271863);
   overlay_jets_nJet_16->SetFillColor(0);
   overlay_jets_nJet_16->SetBorderMode(0);
   overlay_jets_nJet_16->SetBorderSize(2);
   overlay_jets_nJet_16->SetLeftMargin(0.15);
   overlay_jets_nJet_16->SetFrameBorderMode(0);
   overlay_jets_nJet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_55 = new TH1F("st_stack_55","",14,-0.5,13.5);
   st_stack_55->SetMinimum(0);
   st_stack_55->SetMaximum(0.5574989);
   st_stack_55->SetDirectory(0);
   st_stack_55->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_55->SetLineColor(ci);
   st_stack_55->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_55->GetXaxis()->SetLabelFont(42);
   st_stack_55->GetXaxis()->SetTitleOffset(1);
   st_stack_55->GetXaxis()->SetTitleFont(42);
   st_stack_55->GetYaxis()->SetTitle("Events/1.0");
   st_stack_55->GetYaxis()->SetLabelFont(42);
   st_stack_55->GetYaxis()->SetTitleFont(42);
   st_stack_55->GetZaxis()->SetLabelFont(42);
   st_stack_55->GetZaxis()->SetTitleOffset(1);
   st_stack_55->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_55);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,0.1171542);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,0.1772636);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,0.3040887);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,0.2357086);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,0.11709);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,0.03606879);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,0.009598847);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,0.002469096);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,0.0004063375);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,0.0001277921);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,2.356057e-05);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,5.010127e-07);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,0.0007031435);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,0.0008382014);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,0.001065388);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,0.00089844);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,0.0006008607);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,0.0003131525);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,0.0001588984);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,8.262614e-05);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,3.253302e-05);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,1.986903e-05);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,8.287991e-06);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,5.010127e-07);
   VbbHcc_jets_nJet_stack_1->SetEntries(497581);

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
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,0.5309513);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,0.2892011);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,0.1642968);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,0.01343626);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,0.00184673);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,0.0002298116);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,3.232309e-05);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,4.747015e-06);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,7.108556e-07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,1.093842e-07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,1.667569e-08);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,2.397775e-09);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,3.777077e-10);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,4.744689e-11);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,1.688378e-11);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,0.0001011052);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,7.261987e-05);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,5.036728e-05);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,8.036182e-06);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,1.702832e-06);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,3.900045e-07);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,1.189665e-07);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,3.536172e-08);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,5.291441e-09);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,1.377651e-09);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,3.53881e-10);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,8.518941e-11);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,2.599578e-11);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,6.543456e-12);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,7.735457e-12);
   VbbHcc_jets_nJet_stack_2->SetEntries(7.610883e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   overlay_jets_nJet_16->Modified();
   overlay_jets_nJet_16->cd();
   overlay_jets_nJet_16->SetSelected(overlay_jets_nJet_16);
}
