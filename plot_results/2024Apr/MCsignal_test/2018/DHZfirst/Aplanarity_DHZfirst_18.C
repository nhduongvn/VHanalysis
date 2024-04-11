#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_18()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_18/Aplanarity_DHZfirst_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_DHZfirst_18 = new TCanvas("Aplanarity_DHZfirst_18", "Aplanarity_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_DHZfirst_18->SetHighLightColor(2);
   Aplanarity_DHZfirst_18->Range(-0.2,-34728.94,1.133333,312560.4);
   Aplanarity_DHZfirst_18->SetFillColor(0);
   Aplanarity_DHZfirst_18->SetFillStyle(4000);
   Aplanarity_DHZfirst_18->SetBorderMode(0);
   Aplanarity_DHZfirst_18->SetBorderSize(2);
   Aplanarity_DHZfirst_18->SetLeftMargin(0.15);
   Aplanarity_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_18->SetFrameBorderMode(0);
   Aplanarity_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__64 = new TH1D("VH_DHZfirst_Aplanarity__64","",50,0,1);
   VH_DHZfirst_Aplanarity__64->SetBinContent(1,264601.4);
   VH_DHZfirst_Aplanarity__64->SetBinContent(2,19236.66);
   VH_DHZfirst_Aplanarity__64->SetBinError(1,180825.8);
   VH_DHZfirst_Aplanarity__64->SetBinError(2,19236.66);
   VH_DHZfirst_Aplanarity__64->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__64->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__64->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__64->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__64->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__64->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__64->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__64->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__64->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__64->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__64->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__64->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__64->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__64->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__64->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__64->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__64->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_DHZfirst_18->Modified();
   Aplanarity_DHZfirst_18->cd();
   Aplanarity_DHZfirst_18->SetSelected(Aplanarity_DHZfirst_18);
}
