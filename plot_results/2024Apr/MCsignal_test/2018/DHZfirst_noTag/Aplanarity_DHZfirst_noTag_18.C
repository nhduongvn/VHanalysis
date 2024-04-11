#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_noTag_18()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_noTag_18/Aplanarity_DHZfirst_noTag_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_DHZfirst_noTag_18 = new TCanvas("Aplanarity_DHZfirst_noTag_18", "Aplanarity_DHZfirst_noTag_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_DHZfirst_noTag_18->SetHighLightColor(2);
   Aplanarity_DHZfirst_noTag_18->Range(-0.2,-2127983,1.133333,1.915185e+07);
   Aplanarity_DHZfirst_noTag_18->SetFillColor(0);
   Aplanarity_DHZfirst_noTag_18->SetFillStyle(4000);
   Aplanarity_DHZfirst_noTag_18->SetBorderMode(0);
   Aplanarity_DHZfirst_noTag_18->SetBorderSize(2);
   Aplanarity_DHZfirst_noTag_18->SetLeftMargin(0.15);
   Aplanarity_DHZfirst_noTag_18->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_noTag_18->SetFrameBorderMode(0);
   Aplanarity_DHZfirst_noTag_18->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_noTag_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_noTag_Aplanarity__88 = new TH1D("VH_DHZfirst_noTag_Aplanarity__88","",50,0,1);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinContent(1,1.62132e+07);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinContent(2,1419634);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinContent(3,555794.8);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinContent(4,164255.8);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinContent(5,2555.605);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinContent(6,10345.64);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinContent(7,1897.204);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinContent(8,536.7721);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinError(1,1038212);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinError(2,233880.2);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinError(3,190004.3);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinError(4,91886.7);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinError(5,1293.198);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinError(6,7763.243);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinError(7,1353.818);
   VH_DHZfirst_noTag_Aplanarity__88->SetBinError(8,536.7721);
   VH_DHZfirst_noTag_Aplanarity__88->SetEntries(5518);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_noTag_Aplanarity__88->SetLineColor(ci);
   VH_DHZfirst_noTag_Aplanarity__88->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_noTag_Aplanarity__88->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_noTag_Aplanarity__88->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_noTag_Aplanarity__88->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_noTag_Aplanarity__88->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_noTag_Aplanarity__88->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_noTag_Aplanarity__88->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_noTag_Aplanarity__88->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_noTag_Aplanarity__88->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_noTag_Aplanarity__88->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_noTag_Aplanarity__88->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_noTag_Aplanarity__88->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_noTag_Aplanarity__88->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_noTag_Aplanarity__88->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_noTag_Aplanarity__88->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_DHZfirst_noTag_18->Modified();
   Aplanarity_DHZfirst_noTag_18->cd();
   Aplanarity_DHZfirst_noTag_18->SetSelected(Aplanarity_DHZfirst_noTag_18);
}
