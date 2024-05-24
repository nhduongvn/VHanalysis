#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_tagFirst_18()
{
//=========Macro generated from canvas: Sphericity_ZZ_tagFirst_18/Sphericity_ZZ_tagFirst_18
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_tagFirst_18 = new TCanvas("Sphericity_ZZ_tagFirst_18", "Sphericity_ZZ_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_tagFirst_18->SetHighLightColor(2);
   Sphericity_ZZ_tagFirst_18->Range(-0.2,-10.70401,1.133333,96.33607);
   Sphericity_ZZ_tagFirst_18->SetFillColor(0);
   Sphericity_ZZ_tagFirst_18->SetFillStyle(4000);
   Sphericity_ZZ_tagFirst_18->SetBorderMode(0);
   Sphericity_ZZ_tagFirst_18->SetBorderSize(2);
   Sphericity_ZZ_tagFirst_18->SetLeftMargin(0.15);
   Sphericity_ZZ_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagFirst_18->SetFrameBorderMode(0);
   Sphericity_ZZ_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__450 = new TH1D("VH_tagFirst_Sphericity__450","",25,0,1);
   VH_tagFirst_Sphericity__450->SetBinContent(1,81.55434);
   VH_tagFirst_Sphericity__450->SetBinContent(2,64.2648);
   VH_tagFirst_Sphericity__450->SetBinContent(3,31.16265);
   VH_tagFirst_Sphericity__450->SetBinContent(4,29.64511);
   VH_tagFirst_Sphericity__450->SetBinContent(5,15.94708);
   VH_tagFirst_Sphericity__450->SetBinContent(6,6.076251);
   VH_tagFirst_Sphericity__450->SetBinContent(7,3.014226);
   VH_tagFirst_Sphericity__450->SetBinContent(8,1.684182);
   VH_tagFirst_Sphericity__450->SetBinContent(9,1.275813);
   VH_tagFirst_Sphericity__450->SetBinContent(10,1.488102);
   VH_tagFirst_Sphericity__450->SetBinContent(12,0.6662793);
   VH_tagFirst_Sphericity__450->SetBinContent(14,0.1906847);
   VH_tagFirst_Sphericity__450->SetBinContent(15,0.5048748);
   VH_tagFirst_Sphericity__450->SetBinError(1,6.803033);
   VH_tagFirst_Sphericity__450->SetBinError(2,5.739068);
   VH_tagFirst_Sphericity__450->SetBinError(3,4.031427);
   VH_tagFirst_Sphericity__450->SetBinError(4,4.665419);
   VH_tagFirst_Sphericity__450->SetBinError(5,2.879955);
   VH_tagFirst_Sphericity__450->SetBinError(6,1.465691);
   VH_tagFirst_Sphericity__450->SetBinError(7,1.103313);
   VH_tagFirst_Sphericity__450->SetBinError(8,0.8957903);
   VH_tagFirst_Sphericity__450->SetBinError(9,1.083778);
   VH_tagFirst_Sphericity__450->SetBinError(10,0.9658368);
   VH_tagFirst_Sphericity__450->SetBinError(12,0.4776073);
   VH_tagFirst_Sphericity__450->SetBinError(14,0.1906847);
   VH_tagFirst_Sphericity__450->SetBinError(15,0.5048748);
   VH_tagFirst_Sphericity__450->SetEntries(548);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__450->SetLineColor(ci);
   VH_tagFirst_Sphericity__450->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__450->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__450->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__450->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__450->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__450->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__450->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__450->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__450->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__450->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__450->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__450->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__450->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__450->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__450->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_tagFirst_18->Modified();
   Sphericity_ZZ_tagFirst_18->cd();
   Sphericity_ZZ_tagFirst_18->SetSelected(Sphericity_ZZ_tagFirst_18);
}
