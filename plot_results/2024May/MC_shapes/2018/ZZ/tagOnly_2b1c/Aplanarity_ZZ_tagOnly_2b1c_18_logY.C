#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_tagOnly_2b1c_18_logY()
{
//=========Macro generated from canvas: Aplanarity_ZZ_tagOnly_2b1c_18/Aplanarity_ZZ_tagOnly_2b1c_18
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_tagOnly_2b1c_18 = new TCanvas("Aplanarity_ZZ_tagOnly_2b1c_18", "Aplanarity_ZZ_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_tagOnly_2b1c_18->SetHighLightColor(2);
   Aplanarity_ZZ_tagOnly_2b1c_18->Range(-0.2,-0.6629041,1.133333,3.448408);
   Aplanarity_ZZ_tagOnly_2b1c_18->SetFillColor(0);
   Aplanarity_ZZ_tagOnly_2b1c_18->SetFillStyle(4000);
   Aplanarity_ZZ_tagOnly_2b1c_18->SetBorderMode(0);
   Aplanarity_ZZ_tagOnly_2b1c_18->SetBorderSize(2);
   Aplanarity_ZZ_tagOnly_2b1c_18->SetLogy();
   Aplanarity_ZZ_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_ZZ_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_ZZ_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3360 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3360","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3360->SetBinContent(1,575.0789);
   VH_tagOnly_2b1c_Aplanarity__3360->SetBinContent(2,42.55401);
   VH_tagOnly_2b1c_Aplanarity__3360->SetBinContent(3,8.90684);
   VH_tagOnly_2b1c_Aplanarity__3360->SetBinContent(4,2.423288);
   VH_tagOnly_2b1c_Aplanarity__3360->SetBinContent(5,1.120101);
   VH_tagOnly_2b1c_Aplanarity__3360->SetBinError(1,17.96778);
   VH_tagOnly_2b1c_Aplanarity__3360->SetBinError(2,4.674428);
   VH_tagOnly_2b1c_Aplanarity__3360->SetBinError(3,2.027179);
   VH_tagOnly_2b1c_Aplanarity__3360->SetBinError(4,1.074669);
   VH_tagOnly_2b1c_Aplanarity__3360->SetBinError(5,0.654091);
   VH_tagOnly_2b1c_Aplanarity__3360->SetEntries(1470);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3360->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3360->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3360->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3360->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3360->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3360->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3360->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3360->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3360->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3360->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3360->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3360->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3360->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3360->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3360->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3360->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_tagOnly_2b1c_18->Modified();
   Aplanarity_ZZ_tagOnly_2b1c_18->cd();
   Aplanarity_ZZ_tagOnly_2b1c_18->SetSelected(Aplanarity_ZZ_tagOnly_2b1c_18);
}
