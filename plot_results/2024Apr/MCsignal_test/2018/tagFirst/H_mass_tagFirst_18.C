#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_18()
{
//=========Macro generated from canvas: H_mass_tagFirst_18/H_mass_tagFirst_18
//=========  (Tue Apr  9 15:53:52 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_18 = new TCanvas("H_mass_tagFirst_18", "H_mass_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tagFirst_18->SetHighLightColor(2);
   H_mass_tagFirst_18->Range(-60,-0.13125,340,1.18125);
   H_mass_tagFirst_18->SetFillColor(0);
   H_mass_tagFirst_18->SetFillStyle(4000);
   H_mass_tagFirst_18->SetBorderMode(0);
   H_mass_tagFirst_18->SetBorderSize(2);
   H_mass_tagFirst_18->SetLeftMargin(0.15);
   H_mass_tagFirst_18->SetFrameFillStyle(1000);
   H_mass_tagFirst_18->SetFrameBorderMode(0);
   H_mass_tagFirst_18->SetFrameFillStyle(1000);
   H_mass_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_mass__2 = new TH1D("VH_tagFirst_H_mass__2","",200,0,2000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__2->SetLineColor(ci);
   VH_tagFirst_H_mass__2->GetXaxis()->SetTitle("M_{H} [GeV]");
   VH_tagFirst_H_mass__2->GetXaxis()->SetRange(1,30);
   VH_tagFirst_H_mass__2->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__2->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__2->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__2->GetYaxis()->SetTitle("Events/10.0 GeV");
   VH_tagFirst_H_mass__2->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__2->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_mass__2->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_mass__2->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_mass__2->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__2->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__2->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__2->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__2->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tagFirst_18->Modified();
   H_mass_tagFirst_18->cd();
   H_mass_tagFirst_18->SetSelected(H_mass_tagFirst_18);
}
