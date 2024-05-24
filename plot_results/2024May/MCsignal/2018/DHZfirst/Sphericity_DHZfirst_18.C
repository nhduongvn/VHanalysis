#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_18()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_18/Sphericity_DHZfirst_18
//=========  (Thu May 23 13:53:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_18 = new TCanvas("Sphericity_DHZfirst_18", "Sphericity_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_DHZfirst_18->SetHighLightColor(2);
   Sphericity_DHZfirst_18->Range(-0.2,-0.02555071,1.133333,0.2299564);
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
   VH_DHZfirst_Sphericity__63->SetBinContent(1,0.1946721);
   VH_DHZfirst_Sphericity__63->SetBinContent(2,0.1867191);
   VH_DHZfirst_Sphericity__63->SetBinContent(3,0.06339451);
   VH_DHZfirst_Sphericity__63->SetBinContent(4,0.07778863);
   VH_DHZfirst_Sphericity__63->SetBinContent(5,0.05450681);
   VH_DHZfirst_Sphericity__63->SetBinContent(6,0.02074637);
   VH_DHZfirst_Sphericity__63->SetBinContent(7,0.009806846);
   VH_DHZfirst_Sphericity__63->SetBinError(1,0.02374584);
   VH_DHZfirst_Sphericity__63->SetBinError(2,0.02528068);
   VH_DHZfirst_Sphericity__63->SetBinError(3,0.0129654);
   VH_DHZfirst_Sphericity__63->SetBinError(4,0.01535863);
   VH_DHZfirst_Sphericity__63->SetBinError(5,0.01299185);
   VH_DHZfirst_Sphericity__63->SetBinError(6,0.007587175);
   VH_DHZfirst_Sphericity__63->SetBinError(7,0.009806846);
   VH_DHZfirst_Sphericity__63->SetEntries(219);

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
