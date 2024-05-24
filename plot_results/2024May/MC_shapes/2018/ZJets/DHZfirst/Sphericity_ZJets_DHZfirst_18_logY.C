#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Sphericity_ZJets_DHZfirst_18/Sphericity_ZJets_DHZfirst_18
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_DHZfirst_18 = new TCanvas("Sphericity_ZJets_DHZfirst_18", "Sphericity_ZJets_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_DHZfirst_18->SetHighLightColor(2);
   Sphericity_ZJets_DHZfirst_18->Range(-0.2,-1.754092,1.133333,3.799421);
   Sphericity_ZJets_DHZfirst_18->SetFillColor(0);
   Sphericity_ZJets_DHZfirst_18->SetFillStyle(4000);
   Sphericity_ZJets_DHZfirst_18->SetBorderMode(0);
   Sphericity_ZJets_DHZfirst_18->SetBorderSize(2);
   Sphericity_ZJets_DHZfirst_18->SetLogy();
   Sphericity_ZJets_DHZfirst_18->SetLeftMargin(0.15);
   Sphericity_ZJets_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_ZJets_DHZfirst_18->SetFrameBorderMode(0);
   Sphericity_ZJets_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_ZJets_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1875 = new TH1D("VH_DHZfirst_Sphericity__1875","",25,0,1);
   VH_DHZfirst_Sphericity__1875->SetBinContent(1,925.8073);
   VH_DHZfirst_Sphericity__1875->SetBinContent(2,829.319);
   VH_DHZfirst_Sphericity__1875->SetBinContent(3,425.417);
   VH_DHZfirst_Sphericity__1875->SetBinContent(4,284.306);
   VH_DHZfirst_Sphericity__1875->SetBinContent(5,141.4041);
   VH_DHZfirst_Sphericity__1875->SetBinContent(6,72.62405);
   VH_DHZfirst_Sphericity__1875->SetBinContent(7,15.76914);
   VH_DHZfirst_Sphericity__1875->SetBinContent(8,2.586648);
   VH_DHZfirst_Sphericity__1875->SetBinContent(9,1.934736);
   VH_DHZfirst_Sphericity__1875->SetBinContent(10,0.6885711);
   VH_DHZfirst_Sphericity__1875->SetBinContent(11,0.2697479);
   VH_DHZfirst_Sphericity__1875->SetBinContent(12,0.7289822);
   VH_DHZfirst_Sphericity__1875->SetBinContent(17,0.1265579);
   VH_DHZfirst_Sphericity__1875->SetBinError(1,30.44495);
   VH_DHZfirst_Sphericity__1875->SetBinError(2,29.53459);
   VH_DHZfirst_Sphericity__1875->SetBinError(3,18.52173);
   VH_DHZfirst_Sphericity__1875->SetBinError(4,17.6676);
   VH_DHZfirst_Sphericity__1875->SetBinError(5,8.763943);
   VH_DHZfirst_Sphericity__1875->SetBinError(6,8.733153);
   VH_DHZfirst_Sphericity__1875->SetBinError(7,2.819819);
   VH_DHZfirst_Sphericity__1875->SetBinError(8,1.075951);
   VH_DHZfirst_Sphericity__1875->SetBinError(9,0.7779572);
   VH_DHZfirst_Sphericity__1875->SetBinError(10,0.6012824);
   VH_DHZfirst_Sphericity__1875->SetBinError(11,0.2697479);
   VH_DHZfirst_Sphericity__1875->SetBinError(12,0.4358695);
   VH_DHZfirst_Sphericity__1875->SetBinError(17,0.1265579);
   VH_DHZfirst_Sphericity__1875->SetEntries(8398);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1875->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1875->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1875->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1875->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1875->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1875->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1875->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1875->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1875->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1875->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1875->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1875->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1875->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1875->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1875->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1875->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_DHZfirst_18->Modified();
   Sphericity_ZJets_DHZfirst_18->cd();
   Sphericity_ZJets_DHZfirst_18->SetSelected(Sphericity_ZJets_DHZfirst_18);
}
