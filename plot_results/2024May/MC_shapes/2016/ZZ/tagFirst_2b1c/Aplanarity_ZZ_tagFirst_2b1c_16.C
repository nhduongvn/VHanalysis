#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_tagFirst_2b1c_16()
{
//=========Macro generated from canvas: Aplanarity_ZZ_tagFirst_2b1c_16/Aplanarity_ZZ_tagFirst_2b1c_16
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_tagFirst_2b1c_16 = new TCanvas("Aplanarity_ZZ_tagFirst_2b1c_16", "Aplanarity_ZZ_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_tagFirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_ZZ_tagFirst_2b1c_16->Range(-0.2,-44.88213,1.133333,403.9391);
   Aplanarity_ZZ_tagFirst_2b1c_16->SetFillColor(0);
   Aplanarity_ZZ_tagFirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_ZZ_tagFirst_2b1c_16->SetBorderMode(0);
   Aplanarity_ZZ_tagFirst_2b1c_16->SetBorderSize(2);
   Aplanarity_ZZ_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_ZZ_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_ZZ_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2638 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2638","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2638->SetBinContent(1,341.959);
   VH_tagFirst_2b1c_Aplanarity__2638->SetBinContent(2,42.40685);
   VH_tagFirst_2b1c_Aplanarity__2638->SetBinContent(3,9.469264);
   VH_tagFirst_2b1c_Aplanarity__2638->SetBinContent(4,3.280125);
   VH_tagFirst_2b1c_Aplanarity__2638->SetBinContent(5,2.612163);
   VH_tagFirst_2b1c_Aplanarity__2638->SetBinContent(6,1.525256);
   VH_tagFirst_2b1c_Aplanarity__2638->SetBinContent(8,0.2290902);
   VH_tagFirst_2b1c_Aplanarity__2638->SetBinError(1,8.45139);
   VH_tagFirst_2b1c_Aplanarity__2638->SetBinError(2,2.982939);
   VH_tagFirst_2b1c_Aplanarity__2638->SetBinError(3,1.376794);
   VH_tagFirst_2b1c_Aplanarity__2638->SetBinError(4,0.8297287);
   VH_tagFirst_2b1c_Aplanarity__2638->SetBinError(5,0.7342209);
   VH_tagFirst_2b1c_Aplanarity__2638->SetBinError(6,0.5554094);
   VH_tagFirst_2b1c_Aplanarity__2638->SetBinError(8,0.2290902);
   VH_tagFirst_2b1c_Aplanarity__2638->SetEntries(2009);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2638->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2638->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2638->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2638->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2638->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2638->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2638->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2638->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2638->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2638->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2638->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2638->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2638->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2638->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2638->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2638->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_tagFirst_2b1c_16->Modified();
   Aplanarity_ZZ_tagFirst_2b1c_16->cd();
   Aplanarity_ZZ_tagFirst_2b1c_16->SetSelected(Aplanarity_ZZ_tagFirst_2b1c_16);
}
