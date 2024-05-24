#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: Aplanarity_WW_tagOnly_2b1c_17/Aplanarity_WW_tagOnly_2b1c_17
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_tagOnly_2b1c_17 = new TCanvas("Aplanarity_WW_tagOnly_2b1c_17", "Aplanarity_WW_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_tagOnly_2b1c_17->SetHighLightColor(2);
   Aplanarity_WW_tagOnly_2b1c_17->Range(-0.2,-13.64905,1.133333,122.8415);
   Aplanarity_WW_tagOnly_2b1c_17->SetFillColor(0);
   Aplanarity_WW_tagOnly_2b1c_17->SetFillStyle(4000);
   Aplanarity_WW_tagOnly_2b1c_17->SetBorderMode(0);
   Aplanarity_WW_tagOnly_2b1c_17->SetBorderSize(2);
   Aplanarity_WW_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_WW_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WW_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_WW_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_WW_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3353 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3353","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3353->SetBinContent(1,103.9928);
   VH_tagOnly_2b1c_Aplanarity__3353->SetBinContent(2,12.79334);
   VH_tagOnly_2b1c_Aplanarity__3353->SetBinContent(3,3.632771);
   VH_tagOnly_2b1c_Aplanarity__3353->SetBinContent(4,1.280334);
   VH_tagOnly_2b1c_Aplanarity__3353->SetBinContent(5,0.380366);
   VH_tagOnly_2b1c_Aplanarity__3353->SetBinContent(6,0.2611829);
   VH_tagOnly_2b1c_Aplanarity__3353->SetBinContent(8,0.1686304);
   VH_tagOnly_2b1c_Aplanarity__3353->SetBinError(1,5.994123);
   VH_tagOnly_2b1c_Aplanarity__3353->SetBinError(2,2.068833);
   VH_tagOnly_2b1c_Aplanarity__3353->SetBinError(3,1.181358);
   VH_tagOnly_2b1c_Aplanarity__3353->SetBinError(4,0.6924234);
   VH_tagOnly_2b1c_Aplanarity__3353->SetBinError(5,0.380366);
   VH_tagOnly_2b1c_Aplanarity__3353->SetBinError(6,0.2611829);
   VH_tagOnly_2b1c_Aplanarity__3353->SetBinError(8,0.1686304);
   VH_tagOnly_2b1c_Aplanarity__3353->SetEntries(429);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3353->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3353->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3353->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3353->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3353->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3353->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3353->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3353->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3353->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3353->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3353->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3353->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3353->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3353->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3353->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3353->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_tagOnly_2b1c_17->Modified();
   Aplanarity_WW_tagOnly_2b1c_17->cd();
   Aplanarity_WW_tagOnly_2b1c_17->SetSelected(Aplanarity_WW_tagOnly_2b1c_17);
}
