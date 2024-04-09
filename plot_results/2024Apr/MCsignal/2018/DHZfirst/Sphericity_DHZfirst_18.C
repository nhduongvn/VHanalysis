#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_18()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_18/Sphericity_DHZfirst_18
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_18 = new TCanvas("Sphericity_DHZfirst_18", "Sphericity_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_DHZfirst_18->SetHighLightColor(2);
   Sphericity_DHZfirst_18->Range(-0.2,-0.02186099,1.133333,0.1967489);
   Sphericity_DHZfirst_18->SetFillColor(0);
   Sphericity_DHZfirst_18->SetFillStyle(4000);
   Sphericity_DHZfirst_18->SetBorderMode(0);
   Sphericity_DHZfirst_18->SetBorderSize(2);
   Sphericity_DHZfirst_18->SetLeftMargin(0.15);
   Sphericity_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_18->SetFrameBorderMode(0);
   Sphericity_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__189 = new TH1D("VH_DHZfirst_Sphericity__189","",25,0,1);
   VH_DHZfirst_Sphericity__189->SetBinContent(1,0.1665599);
   VH_DHZfirst_Sphericity__189->SetBinContent(2,0.1280091);
   VH_DHZfirst_Sphericity__189->SetBinContent(3,0.06336201);
   VH_DHZfirst_Sphericity__189->SetBinContent(4,0.0833091);
   VH_DHZfirst_Sphericity__189->SetBinContent(5,0.04631361);
   VH_DHZfirst_Sphericity__189->SetBinContent(6,0.006272886);
   VH_DHZfirst_Sphericity__189->SetBinContent(7,0.003359014);
   VH_DHZfirst_Sphericity__189->SetBinContent(8,0.002127519);
   VH_DHZfirst_Sphericity__189->SetBinError(1,0.03273192);
   VH_DHZfirst_Sphericity__189->SetBinError(2,0.02082627);
   VH_DHZfirst_Sphericity__189->SetBinError(3,0.01307674);
   VH_DHZfirst_Sphericity__189->SetBinError(4,0.01602744);
   VH_DHZfirst_Sphericity__189->SetBinError(5,0.01286938);
   VH_DHZfirst_Sphericity__189->SetBinError(6,0.003898418);
   VH_DHZfirst_Sphericity__189->SetBinError(7,0.003359014);
   VH_DHZfirst_Sphericity__189->SetBinError(8,0.002127519);
   VH_DHZfirst_Sphericity__189->SetEntries(172);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__189->SetLineColor(ci);
   VH_DHZfirst_Sphericity__189->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__189->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__189->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__189->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__189->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__189->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__189->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__189->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__189->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__189->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__189->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__189->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__189->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__189->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__189->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_DHZfirst_18->Modified();
   Sphericity_DHZfirst_18->cd();
   Sphericity_DHZfirst_18->SetSelected(Sphericity_DHZfirst_18);
}
