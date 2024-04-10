#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_DHZfirst_18()
{
//=========Macro generated from canvas: Z_mass_DHZfirst_18/Z_mass_DHZfirst_18
//=========  (Tue Apr  9 15:53:52 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_DHZfirst_18 = new TCanvas("Z_mass_DHZfirst_18", "Z_mass_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_DHZfirst_18->SetHighLightColor(2);
   Z_mass_DHZfirst_18->Range(-60,-0.13125,340,1.18125);
   Z_mass_DHZfirst_18->SetFillColor(0);
   Z_mass_DHZfirst_18->SetFillStyle(4000);
   Z_mass_DHZfirst_18->SetBorderMode(0);
   Z_mass_DHZfirst_18->SetBorderSize(2);
   Z_mass_DHZfirst_18->SetLeftMargin(0.15);
   Z_mass_DHZfirst_18->SetFrameFillStyle(1000);
   Z_mass_DHZfirst_18->SetFrameBorderMode(0);
   Z_mass_DHZfirst_18->SetFrameFillStyle(1000);
   Z_mass_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_mass__49 = new TH1D("VH_DHZfirst_Z_mass__49","",200,0,2000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__49->SetLineColor(ci);
   VH_DHZfirst_Z_mass__49->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VH_DHZfirst_Z_mass__49->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_mass__49->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__49->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__49->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__49->GetYaxis()->SetTitle("Events/10.0 GeV");
   VH_DHZfirst_Z_mass__49->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__49->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_mass__49->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_mass__49->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_mass__49->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__49->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__49->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__49->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__49->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_DHZfirst_18->Modified();
   Z_mass_DHZfirst_18->cd();
   Z_mass_DHZfirst_18->SetSelected(Z_mass_DHZfirst_18);
}
