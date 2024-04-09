#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC()
{
//=========Macro generated from canvas: Z_jetmass_JEC/Z_jetmass_JEC
//=========  (Fri Mar 29 15:50:01 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC = new TCanvas("Z_jetmass_JEC", "Z_jetmass_JEC",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC->SetHighLightColor(2);
   Z_jetmass_JEC->Range(-60,-0.9297105,340,8.367394);
   Z_jetmass_JEC->SetFillColor(0);
   Z_jetmass_JEC->SetFillStyle(4000);
   Z_jetmass_JEC->SetBorderMode(0);
   Z_jetmass_JEC->SetBorderSize(2);
   Z_jetmass_JEC->SetLeftMargin(0.15);
   Z_jetmass_JEC->SetFrameFillStyle(1000);
   Z_jetmass_JEC->SetFrameBorderMode(0);
   Z_jetmass_JEC->SetFrameFillStyle(1000);
   Z_jetmass_JEC->SetFrameBorderMode(0);
   
   TH1D *VH_MCjet_ideal_Z_jetmass_JEC__24 = new TH1D("VH_MCjet_ideal_Z_jetmass_JEC__24","",150,0,300);
   VH_MCjet_ideal_Z_jetmass_JEC__24->SetBinContent(0,6.899333);
   VH_MCjet_ideal_Z_jetmass_JEC__24->SetBinContent(1,0.03827507);
   VH_MCjet_ideal_Z_jetmass_JEC__24->SetBinContent(2,7.083508);
   VH_MCjet_ideal_Z_jetmass_JEC__24->SetBinContent(3,0.06096552);
   VH_MCjet_ideal_Z_jetmass_JEC__24->SetBinError(0,0.1450607);
   VH_MCjet_ideal_Z_jetmass_JEC__24->SetBinError(1,0.01014687);
   VH_MCjet_ideal_Z_jetmass_JEC__24->SetBinError(2,0.1603292);
   VH_MCjet_ideal_Z_jetmass_JEC__24->SetBinError(3,0.014215);
   VH_MCjet_ideal_Z_jetmass_JEC__24->SetEntries(5357);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_MCjet_ideal_Z_jetmass_JEC__24->SetLineColor(ci);
   VH_MCjet_ideal_Z_jetmass_JEC__24->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_MCjet_ideal_Z_jetmass_JEC__24->GetXaxis()->SetRange(1,150);
   VH_MCjet_ideal_Z_jetmass_JEC__24->GetXaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Z_jetmass_JEC__24->GetXaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_Z_jetmass_JEC__24->GetXaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Z_jetmass_JEC__24->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_MCjet_ideal_Z_jetmass_JEC__24->GetYaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Z_jetmass_JEC__24->GetYaxis()->SetLabelSize(0.05);
   VH_MCjet_ideal_Z_jetmass_JEC__24->GetYaxis()->SetTitleSize(0.057);
   VH_MCjet_ideal_Z_jetmass_JEC__24->GetYaxis()->SetTitleOffset(1.2);
   VH_MCjet_ideal_Z_jetmass_JEC__24->GetYaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Z_jetmass_JEC__24->GetZaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Z_jetmass_JEC__24->GetZaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_Z_jetmass_JEC__24->GetZaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Z_jetmass_JEC__24->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC->Modified();
   Z_jetmass_JEC->cd();
   Z_jetmass_JEC->SetSelected(Z_jetmass_JEC);
}
