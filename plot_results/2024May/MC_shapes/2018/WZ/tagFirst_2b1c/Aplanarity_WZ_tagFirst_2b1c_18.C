#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_tagFirst_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_WZ_tagFirst_2b1c_18/Aplanarity_WZ_tagFirst_2b1c_18
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_tagFirst_2b1c_18 = new TCanvas("Aplanarity_WZ_tagFirst_2b1c_18", "Aplanarity_WZ_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_tagFirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_WZ_tagFirst_2b1c_18->Range(-0.2,-73.52309,1.133333,661.7078);
   Aplanarity_WZ_tagFirst_2b1c_18->SetFillColor(0);
   Aplanarity_WZ_tagFirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_WZ_tagFirst_2b1c_18->SetBorderMode(0);
   Aplanarity_WZ_tagFirst_2b1c_18->SetBorderSize(2);
   Aplanarity_WZ_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_WZ_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_WZ_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2637 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2637","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2637->SetBinContent(1,560.1759);
   VH_tagFirst_2b1c_Aplanarity__2637->SetBinContent(2,58.48207);
   VH_tagFirst_2b1c_Aplanarity__2637->SetBinContent(3,12.07089);
   VH_tagFirst_2b1c_Aplanarity__2637->SetBinContent(4,10.82504);
   VH_tagFirst_2b1c_Aplanarity__2637->SetBinContent(5,1.82292);
   VH_tagFirst_2b1c_Aplanarity__2637->SetBinContent(7,0.8810911);
   VH_tagFirst_2b1c_Aplanarity__2637->SetBinContent(9,0.5198154);
   VH_tagFirst_2b1c_Aplanarity__2637->SetBinError(1,20.4352);
   VH_tagFirst_2b1c_Aplanarity__2637->SetBinError(2,7.405248);
   VH_tagFirst_2b1c_Aplanarity__2637->SetBinError(3,3.17913);
   VH_tagFirst_2b1c_Aplanarity__2637->SetBinError(4,3.749392);
   VH_tagFirst_2b1c_Aplanarity__2637->SetBinError(5,0.9155123);
   VH_tagFirst_2b1c_Aplanarity__2637->SetBinError(7,0.6279972);
   VH_tagFirst_2b1c_Aplanarity__2637->SetBinError(9,0.5198154);
   VH_tagFirst_2b1c_Aplanarity__2637->SetEntries(1137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2637->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2637->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2637->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2637->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2637->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2637->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2637->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2637->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2637->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2637->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2637->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2637->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2637->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2637->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2637->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2637->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_tagFirst_2b1c_18->Modified();
   Aplanarity_WZ_tagFirst_2b1c_18->cd();
   Aplanarity_WZ_tagFirst_2b1c_18->SetSelected(Aplanarity_WZ_tagFirst_2b1c_18);
}
