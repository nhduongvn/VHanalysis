#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_18/Aplanarity_tagOnly_18
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagOnly_18 = new TCanvas("Aplanarity_tagOnly_18", "Aplanarity_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tagOnly_18->SetHighLightColor(2);
   Aplanarity_tagOnly_18->Range(-0.2,-0.32051,1.133333,2.88459);
   Aplanarity_tagOnly_18->SetFillColor(0);
   Aplanarity_tagOnly_18->SetFillStyle(4000);
   Aplanarity_tagOnly_18->SetBorderMode(0);
   Aplanarity_tagOnly_18->SetBorderSize(2);
   Aplanarity_tagOnly_18->SetLeftMargin(0.15);
   Aplanarity_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_18->SetFrameBorderMode(0);
   Aplanarity_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__120 = new TH1D("VH_tagOnly_Aplanarity__120","",50,0,1);
   VH_tagOnly_Aplanarity__120->SetBinContent(1,2.441981);
   VH_tagOnly_Aplanarity__120->SetBinContent(2,0.188863);
   VH_tagOnly_Aplanarity__120->SetBinContent(3,0.0494181);
   VH_tagOnly_Aplanarity__120->SetBinContent(4,0.00789285);
   VH_tagOnly_Aplanarity__120->SetBinContent(5,0.004784755);
   VH_tagOnly_Aplanarity__120->SetBinContent(6,0.001750385);
   VH_tagOnly_Aplanarity__120->SetBinContent(7,0.006058982);
   VH_tagOnly_Aplanarity__120->SetBinContent(8,0.005370295);
   VH_tagOnly_Aplanarity__120->SetBinError(1,0.09931175);
   VH_tagOnly_Aplanarity__120->SetBinError(2,0.02477732);
   VH_tagOnly_Aplanarity__120->SetBinError(3,0.01575928);
   VH_tagOnly_Aplanarity__120->SetBinError(4,0.005584141);
   VH_tagOnly_Aplanarity__120->SetBinError(5,0.003386026);
   VH_tagOnly_Aplanarity__120->SetBinError(6,0.001750385);
   VH_tagOnly_Aplanarity__120->SetBinError(7,0.004310176);
   VH_tagOnly_Aplanarity__120->SetBinError(8,0.005370295);
   VH_tagOnly_Aplanarity__120->SetEntries(903);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__120->SetLineColor(ci);
   VH_tagOnly_Aplanarity__120->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__120->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__120->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__120->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__120->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__120->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__120->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__120->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__120->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__120->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__120->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__120->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__120->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__120->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__120->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tagOnly_18->Modified();
   Aplanarity_tagOnly_18->cd();
   Aplanarity_tagOnly_18->SetSelected(Aplanarity_tagOnly_18);
}
