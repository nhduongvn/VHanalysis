#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_2combo_18()
{
//=========Macro generated from canvas: H_mass_tagFirst_2combo_18/H_mass_tagFirst_2combo_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_2combo_18 = new TCanvas("H_mass_tagFirst_2combo_18", "H_mass_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tagFirst_2combo_18->SetHighLightColor(2);
   H_mass_tagFirst_2combo_18->Range(-60,-0.13125,340,1.18125);
   H_mass_tagFirst_2combo_18->SetFillColor(0);
   H_mass_tagFirst_2combo_18->SetFillStyle(4000);
   H_mass_tagFirst_2combo_18->SetBorderMode(0);
   H_mass_tagFirst_2combo_18->SetBorderSize(2);
   H_mass_tagFirst_2combo_18->SetLeftMargin(0.15);
   H_mass_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_mass_tagFirst_2combo_18->SetFrameBorderMode(0);
   H_mass_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_mass_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_H_mass__98 = new TH1D("VH_tagFirst_2combo_H_mass__98","",200,0,2000);
   VH_tagFirst_2combo_H_mass__98->SetBinContent(90,249.8734);
   VH_tagFirst_2combo_H_mass__98->SetBinContent(116,428.6841);
   VH_tagFirst_2combo_H_mass__98->SetBinContent(117,826.4895);
   VH_tagFirst_2combo_H_mass__98->SetBinContent(147,690.8691);
   VH_tagFirst_2combo_H_mass__98->SetBinError(90,249.8734);
   VH_tagFirst_2combo_H_mass__98->SetBinError(116,428.6841);
   VH_tagFirst_2combo_H_mass__98->SetBinError(117,826.4895);
   VH_tagFirst_2combo_H_mass__98->SetBinError(147,690.8691);
   VH_tagFirst_2combo_H_mass__98->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_H_mass__98->SetLineColor(ci);
   VH_tagFirst_2combo_H_mass__98->GetXaxis()->SetTitle("M_{H} [GeV]");
   VH_tagFirst_2combo_H_mass__98->GetXaxis()->SetRange(1,30);
   VH_tagFirst_2combo_H_mass__98->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_mass__98->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_mass__98->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_mass__98->GetYaxis()->SetTitle("Events/10.0 GeV");
   VH_tagFirst_2combo_H_mass__98->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_mass__98->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_H_mass__98->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_H_mass__98->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_H_mass__98->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_mass__98->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_mass__98->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_mass__98->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_mass__98->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tagFirst_2combo_18->Modified();
   H_mass_tagFirst_2combo_18->cd();
   H_mass_tagFirst_2combo_18->SetSelected(H_mass_tagFirst_2combo_18);
}
