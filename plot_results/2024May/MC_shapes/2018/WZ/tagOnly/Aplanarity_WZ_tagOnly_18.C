#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_WZ_tagOnly_18/Aplanarity_WZ_tagOnly_18
//=========  (Fri May 24 12:42:22 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_tagOnly_18 = new TCanvas("Aplanarity_WZ_tagOnly_18", "Aplanarity_WZ_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_tagOnly_18->SetHighLightColor(2);
   Aplanarity_WZ_tagOnly_18->Range(-0.2,-35.17537,1.133333,316.5783);
   Aplanarity_WZ_tagOnly_18->SetFillColor(0);
   Aplanarity_WZ_tagOnly_18->SetFillStyle(4000);
   Aplanarity_WZ_tagOnly_18->SetBorderMode(0);
   Aplanarity_WZ_tagOnly_18->SetBorderSize(2);
   Aplanarity_WZ_tagOnly_18->SetLeftMargin(0.15);
   Aplanarity_WZ_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagOnly_18->SetFrameBorderMode(0);
   Aplanarity_WZ_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1197 = new TH1D("VH_tagOnly_Aplanarity__1197","",50,0,1);
   VH_tagOnly_Aplanarity__1197->SetBinContent(1,268.0028);
   VH_tagOnly_Aplanarity__1197->SetBinContent(2,30.34536);
   VH_tagOnly_Aplanarity__1197->SetBinContent(3,6.981815);
   VH_tagOnly_Aplanarity__1197->SetBinContent(4,8.929379);
   VH_tagOnly_Aplanarity__1197->SetBinError(1,14.34258);
   VH_tagOnly_Aplanarity__1197->SetBinError(2,6.078306);
   VH_tagOnly_Aplanarity__1197->SetBinError(3,2.215626);
   VH_tagOnly_Aplanarity__1197->SetBinError(4,3.618223);
   VH_tagOnly_Aplanarity__1197->SetEntries(512);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1197->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1197->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1197->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1197->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1197->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1197->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1197->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1197->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1197->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1197->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1197->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1197->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1197->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1197->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1197->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1197->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_tagOnly_18->Modified();
   Aplanarity_WZ_tagOnly_18->cd();
   Aplanarity_WZ_tagOnly_18->SetSelected(Aplanarity_WZ_tagOnly_18);
}
