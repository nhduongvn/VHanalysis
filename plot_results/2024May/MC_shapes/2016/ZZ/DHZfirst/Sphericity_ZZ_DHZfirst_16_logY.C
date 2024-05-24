#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Sphericity_ZZ_DHZfirst_16/Sphericity_ZZ_DHZfirst_16
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_DHZfirst_16 = new TCanvas("Sphericity_ZZ_DHZfirst_16", "Sphericity_ZZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_DHZfirst_16->SetHighLightColor(2);
   Sphericity_ZZ_DHZfirst_16->Range(-0.2,-1.355551,1.133333,1.606012);
   Sphericity_ZZ_DHZfirst_16->SetFillColor(0);
   Sphericity_ZZ_DHZfirst_16->SetFillStyle(4000);
   Sphericity_ZZ_DHZfirst_16->SetBorderMode(0);
   Sphericity_ZZ_DHZfirst_16->SetBorderSize(2);
   Sphericity_ZZ_DHZfirst_16->SetLogy();
   Sphericity_ZZ_DHZfirst_16->SetLeftMargin(0.15);
   Sphericity_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   Sphericity_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1888 = new TH1D("VH_DHZfirst_Sphericity__1888","",25,0,1);
   VH_DHZfirst_Sphericity__1888->SetBinContent(1,10.77225);
   VH_DHZfirst_Sphericity__1888->SetBinContent(2,9.741009);
   VH_DHZfirst_Sphericity__1888->SetBinContent(3,4.575945);
   VH_DHZfirst_Sphericity__1888->SetBinContent(4,2.756035);
   VH_DHZfirst_Sphericity__1888->SetBinContent(5,1.823944);
   VH_DHZfirst_Sphericity__1888->SetBinContent(6,0.3424811);
   VH_DHZfirst_Sphericity__1888->SetBinContent(7,0.1744355);
   VH_DHZfirst_Sphericity__1888->SetBinError(1,1.487239);
   VH_DHZfirst_Sphericity__1888->SetBinError(2,1.410473);
   VH_DHZfirst_Sphericity__1888->SetBinError(3,0.9685459);
   VH_DHZfirst_Sphericity__1888->SetBinError(4,0.7457341);
   VH_DHZfirst_Sphericity__1888->SetBinError(5,0.6130596);
   VH_DHZfirst_Sphericity__1888->SetBinError(6,0.2475464);
   VH_DHZfirst_Sphericity__1888->SetBinError(7,0.1744355);
   VH_DHZfirst_Sphericity__1888->SetEntries(155);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1888->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1888->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1888->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1888->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1888->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1888->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1888->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1888->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1888->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1888->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1888->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1888->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1888->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1888->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1888->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1888->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_DHZfirst_16->Modified();
   Sphericity_ZZ_DHZfirst_16->cd();
   Sphericity_ZZ_DHZfirst_16->SetSelected(Sphericity_ZZ_DHZfirst_16);
}
