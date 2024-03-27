#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity()
{
//=========Macro generated from canvas: Sphericity/Sphericity
//=========  (Wed Mar 27 16:46:18 2024) by ROOT version 6.28/10
   TCanvas *Sphericity = new TCanvas("Sphericity", "Sphericity",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity->SetHighLightColor(2);
   Sphericity->Range(-0.2,-0.02186099,1.133333,0.1967489);
   Sphericity->SetFillColor(0);
   Sphericity->SetFillStyle(4000);
   Sphericity->SetBorderMode(0);
   Sphericity->SetBorderSize(2);
   Sphericity->SetLeftMargin(0.15);
   Sphericity->SetFrameFillStyle(1000);
   Sphericity->SetFrameBorderMode(0);
   Sphericity->SetFrameFillStyle(1000);
   Sphericity->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__63 = new TH1D("VH_DHZfirst_Sphericity__63","",25,0,1);
   VH_DHZfirst_Sphericity__63->SetBinContent(1,0.1665599);
   VH_DHZfirst_Sphericity__63->SetBinContent(2,0.1280091);
   VH_DHZfirst_Sphericity__63->SetBinContent(3,0.06336201);
   VH_DHZfirst_Sphericity__63->SetBinContent(4,0.0833091);
   VH_DHZfirst_Sphericity__63->SetBinContent(5,0.04631361);
   VH_DHZfirst_Sphericity__63->SetBinContent(6,0.006272886);
   VH_DHZfirst_Sphericity__63->SetBinContent(7,0.003359014);
   VH_DHZfirst_Sphericity__63->SetBinContent(8,0.002127519);
   VH_DHZfirst_Sphericity__63->SetBinError(1,0.03273192);
   VH_DHZfirst_Sphericity__63->SetBinError(2,0.02082627);
   VH_DHZfirst_Sphericity__63->SetBinError(3,0.01307674);
   VH_DHZfirst_Sphericity__63->SetBinError(4,0.01602744);
   VH_DHZfirst_Sphericity__63->SetBinError(5,0.01286938);
   VH_DHZfirst_Sphericity__63->SetBinError(6,0.003898418);
   VH_DHZfirst_Sphericity__63->SetBinError(7,0.003359014);
   VH_DHZfirst_Sphericity__63->SetBinError(8,0.002127519);
   VH_DHZfirst_Sphericity__63->SetEntries(172);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__63->SetLineColor(ci);
   VH_DHZfirst_Sphericity__63->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__63->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__63->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__63->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__63->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__63->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__63->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__63->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__63->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__63->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__63->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__63->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__63->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__63->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__63->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity->Modified();
   Sphericity->cd();
   Sphericity->SetSelected(Sphericity);
}
