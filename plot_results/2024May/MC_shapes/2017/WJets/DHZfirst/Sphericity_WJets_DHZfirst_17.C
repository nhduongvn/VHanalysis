#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_DHZfirst_17()
{
//=========Macro generated from canvas: Sphericity_WJets_DHZfirst_17/Sphericity_WJets_DHZfirst_17
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_DHZfirst_17 = new TCanvas("Sphericity_WJets_DHZfirst_17", "Sphericity_WJets_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_DHZfirst_17->SetHighLightColor(2);
   Sphericity_WJets_DHZfirst_17->Range(-0.2,-28.74266,1.133333,258.6839);
   Sphericity_WJets_DHZfirst_17->SetFillColor(0);
   Sphericity_WJets_DHZfirst_17->SetFillStyle(4000);
   Sphericity_WJets_DHZfirst_17->SetBorderMode(0);
   Sphericity_WJets_DHZfirst_17->SetBorderSize(2);
   Sphericity_WJets_DHZfirst_17->SetLeftMargin(0.15);
   Sphericity_WJets_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_WJets_DHZfirst_17->SetFrameBorderMode(0);
   Sphericity_WJets_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_WJets_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1871 = new TH1D("VH_DHZfirst_Sphericity__1871","",25,0,1);
   VH_DHZfirst_Sphericity__1871->SetBinContent(1,218.9917);
   VH_DHZfirst_Sphericity__1871->SetBinContent(2,171.8399);
   VH_DHZfirst_Sphericity__1871->SetBinContent(3,107.4691);
   VH_DHZfirst_Sphericity__1871->SetBinContent(4,48.14733);
   VH_DHZfirst_Sphericity__1871->SetBinContent(5,24.43416);
   VH_DHZfirst_Sphericity__1871->SetBinContent(6,13.26059);
   VH_DHZfirst_Sphericity__1871->SetBinContent(7,6.805012);
   VH_DHZfirst_Sphericity__1871->SetBinContent(8,0.6016401);
   VH_DHZfirst_Sphericity__1871->SetBinContent(9,0.09449382);
   VH_DHZfirst_Sphericity__1871->SetBinContent(10,0.1635924);
   VH_DHZfirst_Sphericity__1871->SetBinContent(12,0.1471504);
   VH_DHZfirst_Sphericity__1871->SetBinContent(13,0.2544107);
   VH_DHZfirst_Sphericity__1871->SetBinContent(14,0.04509529);
   VH_DHZfirst_Sphericity__1871->SetBinContent(18,0.07579512);
   VH_DHZfirst_Sphericity__1871->SetBinError(1,17.26303);
   VH_DHZfirst_Sphericity__1871->SetBinError(2,14.16995);
   VH_DHZfirst_Sphericity__1871->SetBinError(3,12.06903);
   VH_DHZfirst_Sphericity__1871->SetBinError(4,4.815249);
   VH_DHZfirst_Sphericity__1871->SetBinError(5,3.723926);
   VH_DHZfirst_Sphericity__1871->SetBinError(6,2.485626);
   VH_DHZfirst_Sphericity__1871->SetBinError(7,3.800197);
   VH_DHZfirst_Sphericity__1871->SetBinError(8,0.33785);
   VH_DHZfirst_Sphericity__1871->SetBinError(9,0.09337451);
   VH_DHZfirst_Sphericity__1871->SetBinError(10,0.1635924);
   VH_DHZfirst_Sphericity__1871->SetBinError(12,0.1173);
   VH_DHZfirst_Sphericity__1871->SetBinError(13,0.2360287);
   VH_DHZfirst_Sphericity__1871->SetBinError(14,0.04434512);
   VH_DHZfirst_Sphericity__1871->SetBinError(18,0.07579512);
   VH_DHZfirst_Sphericity__1871->SetEntries(3550);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1871->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1871->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1871->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1871->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1871->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1871->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1871->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1871->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1871->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1871->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1871->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1871->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1871->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1871->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1871->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1871->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_DHZfirst_17->Modified();
   Sphericity_WJets_DHZfirst_17->cd();
   Sphericity_WJets_DHZfirst_17->SetSelected(Sphericity_WJets_DHZfirst_17);
}
