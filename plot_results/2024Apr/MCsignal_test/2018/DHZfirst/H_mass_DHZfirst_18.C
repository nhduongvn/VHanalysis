#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_DHZfirst_18()
{
//=========Macro generated from canvas: H_mass_DHZfirst_18/H_mass_DHZfirst_18
//=========  (Tue Apr  9 15:53:52 2024) by ROOT version 6.28/10
   TCanvas *H_mass_DHZfirst_18 = new TCanvas("H_mass_DHZfirst_18", "H_mass_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_DHZfirst_18->SetHighLightColor(2);
   H_mass_DHZfirst_18->Range(-60,-0.13125,340,1.18125);
   H_mass_DHZfirst_18->SetFillColor(0);
   H_mass_DHZfirst_18->SetFillStyle(4000);
   H_mass_DHZfirst_18->SetBorderMode(0);
   H_mass_DHZfirst_18->SetBorderSize(2);
   H_mass_DHZfirst_18->SetLeftMargin(0.15);
   H_mass_DHZfirst_18->SetFrameFillStyle(1000);
   H_mass_DHZfirst_18->SetFrameBorderMode(0);
   H_mass_DHZfirst_18->SetFrameFillStyle(1000);
   H_mass_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_mass__50 = new TH1D("VH_DHZfirst_H_mass__50","",200,0,2000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_mass__50->SetLineColor(ci);
   VH_DHZfirst_H_mass__50->GetXaxis()->SetTitle("M_{H} [GeV]");
   VH_DHZfirst_H_mass__50->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_mass__50->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__50->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__50->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__50->GetYaxis()->SetTitle("Events/10.0 GeV");
   VH_DHZfirst_H_mass__50->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__50->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_mass__50->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_mass__50->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_mass__50->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__50->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__50->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__50->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__50->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_DHZfirst_18->Modified();
   H_mass_DHZfirst_18->cd();
   H_mass_DHZfirst_18->SetSelected(H_mass_DHZfirst_18);
}
