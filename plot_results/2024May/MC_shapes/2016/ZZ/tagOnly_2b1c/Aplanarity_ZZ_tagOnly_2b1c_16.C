#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: Aplanarity_ZZ_tagOnly_2b1c_16/Aplanarity_ZZ_tagOnly_2b1c_16
//=========  (Fri May 24 12:42:56 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_tagOnly_2b1c_16 = new TCanvas("Aplanarity_ZZ_tagOnly_2b1c_16", "Aplanarity_ZZ_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_tagOnly_2b1c_16->SetHighLightColor(2);
   Aplanarity_ZZ_tagOnly_2b1c_16->Range(-0.2,-57.01145,1.133333,513.103);
   Aplanarity_ZZ_tagOnly_2b1c_16->SetFillColor(0);
   Aplanarity_ZZ_tagOnly_2b1c_16->SetFillStyle(4000);
   Aplanarity_ZZ_tagOnly_2b1c_16->SetBorderMode(0);
   Aplanarity_ZZ_tagOnly_2b1c_16->SetBorderSize(2);
   Aplanarity_ZZ_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_ZZ_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_ZZ_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3358 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3358","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3358->SetBinContent(1,434.3729);
   VH_tagOnly_2b1c_Aplanarity__3358->SetBinContent(2,51.45546);
   VH_tagOnly_2b1c_Aplanarity__3358->SetBinContent(3,10.17537);
   VH_tagOnly_2b1c_Aplanarity__3358->SetBinContent(4,3.215172);
   VH_tagOnly_2b1c_Aplanarity__3358->SetBinContent(5,1.9846);
   VH_tagOnly_2b1c_Aplanarity__3358->SetBinContent(6,1.155241);
   VH_tagOnly_2b1c_Aplanarity__3358->SetBinContent(8,0.2290902);
   VH_tagOnly_2b1c_Aplanarity__3358->SetBinError(1,9.505897);
   VH_tagOnly_2b1c_Aplanarity__3358->SetBinError(2,3.241697);
   VH_tagOnly_2b1c_Aplanarity__3358->SetBinError(3,1.437347);
   VH_tagOnly_2b1c_Aplanarity__3358->SetBinError(4,0.8096215);
   VH_tagOnly_2b1c_Aplanarity__3358->SetBinError(5,0.6357119);
   VH_tagOnly_2b1c_Aplanarity__3358->SetBinError(6,0.4894643);
   VH_tagOnly_2b1c_Aplanarity__3358->SetBinError(8,0.2290902);
   VH_tagOnly_2b1c_Aplanarity__3358->SetEntries(2523);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3358->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3358->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3358->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3358->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3358->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3358->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3358->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3358->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3358->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3358->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3358->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3358->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3358->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3358->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3358->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3358->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_tagOnly_2b1c_16->Modified();
   Aplanarity_ZZ_tagOnly_2b1c_16->cd();
   Aplanarity_ZZ_tagOnly_2b1c_16->SetSelected(Aplanarity_ZZ_tagOnly_2b1c_16);
}
