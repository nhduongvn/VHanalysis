#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Sphericity_ZZ_DHZfirst_17/Sphericity_ZZ_DHZfirst_17
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_DHZfirst_17 = new TCanvas("Sphericity_ZZ_DHZfirst_17", "Sphericity_ZZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_DHZfirst_17->SetHighLightColor(2);
   Sphericity_ZZ_DHZfirst_17->Range(-0.2,-0.8529356,1.133333,1.380704);
   Sphericity_ZZ_DHZfirst_17->SetFillColor(0);
   Sphericity_ZZ_DHZfirst_17->SetFillStyle(4000);
   Sphericity_ZZ_DHZfirst_17->SetBorderMode(0);
   Sphericity_ZZ_DHZfirst_17->SetBorderSize(2);
   Sphericity_ZZ_DHZfirst_17->SetLogy();
   Sphericity_ZZ_DHZfirst_17->SetLeftMargin(0.15);
   Sphericity_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   Sphericity_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1889 = new TH1D("VH_DHZfirst_Sphericity__1889","",25,0,1);
   VH_DHZfirst_Sphericity__1889->SetBinContent(1,7.582129);
   VH_DHZfirst_Sphericity__1889->SetBinContent(2,4.578171);
   VH_DHZfirst_Sphericity__1889->SetBinContent(3,2.665098);
   VH_DHZfirst_Sphericity__1889->SetBinContent(4,2.455421);
   VH_DHZfirst_Sphericity__1889->SetBinContent(5,1.326861);
   VH_DHZfirst_Sphericity__1889->SetBinContent(6,0.4693084);
   VH_DHZfirst_Sphericity__1889->SetBinError(1,1.399344);
   VH_DHZfirst_Sphericity__1889->SetBinError(2,1.102168);
   VH_DHZfirst_Sphericity__1889->SetBinError(3,1.22129);
   VH_DHZfirst_Sphericity__1889->SetBinError(4,1.005262);
   VH_DHZfirst_Sphericity__1889->SetBinError(5,0.5056057);
   VH_DHZfirst_Sphericity__1889->SetBinError(6,0.2869586);
   VH_DHZfirst_Sphericity__1889->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1889->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1889->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1889->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1889->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1889->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1889->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1889->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1889->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1889->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1889->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1889->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1889->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1889->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1889->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1889->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1889->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_DHZfirst_17->Modified();
   Sphericity_ZZ_DHZfirst_17->cd();
   Sphericity_ZZ_DHZfirst_17->SetSelected(Sphericity_ZZ_DHZfirst_17);
}
