#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_18()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_18/Sphericity_DHZfirst_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_18 = new TCanvas("Sphericity_DHZfirst_18", "Sphericity_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_DHZfirst_18->SetHighLightColor(2);
   Sphericity_DHZfirst_18->Range(-0.2,-26841.07,1.133333,241569.6);
   Sphericity_DHZfirst_18->SetFillColor(0);
   Sphericity_DHZfirst_18->SetFillStyle(4000);
   Sphericity_DHZfirst_18->SetBorderMode(0);
   Sphericity_DHZfirst_18->SetBorderSize(2);
   Sphericity_DHZfirst_18->SetLeftMargin(0.15);
   Sphericity_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_18->SetFrameBorderMode(0);
   Sphericity_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__63 = new TH1D("VH_DHZfirst_Sphericity__63","",25,0,1);
   VH_DHZfirst_Sphericity__63->SetBinContent(1,204503.4);
   VH_DHZfirst_Sphericity__63->SetBinContent(2,47909.33);
   VH_DHZfirst_Sphericity__63->SetBinContent(3,9983.71);
   VH_DHZfirst_Sphericity__63->SetBinContent(4,21441.67);
   VH_DHZfirst_Sphericity__63->SetBinError(1,179506.7);
   VH_DHZfirst_Sphericity__63->SetBinError(2,20348.91);
   VH_DHZfirst_Sphericity__63->SetBinError(3,7667.815);
   VH_DHZfirst_Sphericity__63->SetBinError(4,19300.43);
   VH_DHZfirst_Sphericity__63->SetEntries(46);

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
   Sphericity_DHZfirst_18->Modified();
   Sphericity_DHZfirst_18->cd();
   Sphericity_DHZfirst_18->SetSelected(Sphericity_DHZfirst_18);
}
