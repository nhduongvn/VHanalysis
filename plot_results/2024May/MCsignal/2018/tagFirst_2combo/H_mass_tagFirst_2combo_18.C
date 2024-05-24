#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_2combo_18()
{
//=========Macro generated from canvas: H_mass_tagFirst_2combo_18/H_mass_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_2combo_18 = new TCanvas("H_mass_tagFirst_2combo_18", "H_mass_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tagFirst_2combo_18->SetHighLightColor(2);
   H_mass_tagFirst_2combo_18->Range(-60,-0.001366505,340,0.01229855);
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
   VH_tagFirst_2combo_H_mass__98->SetBinContent(7,0.004827765);
   VH_tagFirst_2combo_H_mass__98->SetBinContent(8,0.01041147);
   VH_tagFirst_2combo_H_mass__98->SetBinContent(9,0.006422337);
   VH_tagFirst_2combo_H_mass__98->SetBinContent(10,0.002198887);
   VH_tagFirst_2combo_H_mass__98->SetBinContent(11,0.007159162);
   VH_tagFirst_2combo_H_mass__98->SetBinContent(12,0.004822818);
   VH_tagFirst_2combo_H_mass__98->SetBinContent(21,0.002412888);
   VH_tagFirst_2combo_H_mass__98->SetBinContent(25,0.002901436);
   VH_tagFirst_2combo_H_mass__98->SetBinContent(58,0.004790387);
   VH_tagFirst_2combo_H_mass__98->SetBinContent(125,0.001122139);
   VH_tagFirst_2combo_H_mass__98->SetBinContent(201,0.002105444);
   VH_tagFirst_2combo_H_mass__98->SetBinError(7,0.003414903);
   VH_tagFirst_2combo_H_mass__98->SetBinError(8,0.004850022);
   VH_tagFirst_2combo_H_mass__98->SetBinError(9,0.003723336);
   VH_tagFirst_2combo_H_mass__98->SetBinError(10,0.002198887);
   VH_tagFirst_2combo_H_mass__98->SetBinError(11,0.004133856);
   VH_tagFirst_2combo_H_mass__98->SetBinError(12,0.004822818);
   VH_tagFirst_2combo_H_mass__98->SetBinError(21,0.002412888);
   VH_tagFirst_2combo_H_mass__98->SetBinError(25,0.002901436);
   VH_tagFirst_2combo_H_mass__98->SetBinError(58,0.004790387);
   VH_tagFirst_2combo_H_mass__98->SetBinError(125,0.001122139);
   VH_tagFirst_2combo_H_mass__98->SetBinError(201,0.002105444);
   VH_tagFirst_2combo_H_mass__98->SetEntries(20);

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
