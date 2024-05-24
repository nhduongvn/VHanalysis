#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_tagFirst_17()
{
//=========Macro generated from canvas: Aplanarity_WW_tagFirst_17/Aplanarity_WW_tagFirst_17
//=========  (Fri May 24 12:42:12 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_tagFirst_17 = new TCanvas("Aplanarity_WW_tagFirst_17", "Aplanarity_WW_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_tagFirst_17->SetHighLightColor(2);
   Aplanarity_WW_tagFirst_17->Range(-0.2,-6.653529,1.133333,59.88175);
   Aplanarity_WW_tagFirst_17->SetFillColor(0);
   Aplanarity_WW_tagFirst_17->SetFillStyle(4000);
   Aplanarity_WW_tagFirst_17->SetBorderMode(0);
   Aplanarity_WW_tagFirst_17->SetBorderSize(2);
   Aplanarity_WW_tagFirst_17->SetLeftMargin(0.15);
   Aplanarity_WW_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_WW_tagFirst_17->SetFrameBorderMode(0);
   Aplanarity_WW_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_WW_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__473 = new TH1D("VH_tagFirst_Aplanarity__473","",50,0,1);
   VH_tagFirst_Aplanarity__473->SetBinContent(1,50.69355);
   VH_tagFirst_Aplanarity__473->SetBinContent(2,7.281433);
   VH_tagFirst_Aplanarity__473->SetBinContent(3,1.416739);
   VH_tagFirst_Aplanarity__473->SetBinContent(4,0.692247);
   VH_tagFirst_Aplanarity__473->SetBinContent(6,0.2611829);
   VH_tagFirst_Aplanarity__473->SetBinContent(8,0.1686304);
   VH_tagFirst_Aplanarity__473->SetBinError(1,4.338515);
   VH_tagFirst_Aplanarity__473->SetBinError(2,1.689639);
   VH_tagFirst_Aplanarity__473->SetBinError(3,0.7611536);
   VH_tagFirst_Aplanarity__473->SetBinError(4,0.3624366);
   VH_tagFirst_Aplanarity__473->SetBinError(6,0.2611829);
   VH_tagFirst_Aplanarity__473->SetBinError(8,0.1686304);
   VH_tagFirst_Aplanarity__473->SetEntries(204);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__473->SetLineColor(ci);
   VH_tagFirst_Aplanarity__473->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__473->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__473->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__473->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__473->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__473->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__473->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__473->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__473->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__473->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__473->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__473->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__473->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__473->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__473->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_tagFirst_17->Modified();
   Aplanarity_WW_tagFirst_17->cd();
   Aplanarity_WW_tagFirst_17->SetSelected(Aplanarity_WW_tagFirst_17);
}
