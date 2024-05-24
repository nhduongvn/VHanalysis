#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: Sphericity_WW_tagOnly_2b1c_18/Sphericity_WW_tagOnly_2b1c_18
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_tagOnly_2b1c_18 = new TCanvas("Sphericity_WW_tagOnly_2b1c_18", "Sphericity_WW_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_tagOnly_2b1c_18->SetHighLightColor(2);
   Sphericity_WW_tagOnly_2b1c_18->Range(-0.2,-12.38219,1.133333,111.4397);
   Sphericity_WW_tagOnly_2b1c_18->SetFillColor(0);
   Sphericity_WW_tagOnly_2b1c_18->SetFillStyle(4000);
   Sphericity_WW_tagOnly_2b1c_18->SetBorderMode(0);
   Sphericity_WW_tagOnly_2b1c_18->SetBorderSize(2);
   Sphericity_WW_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Sphericity_WW_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WW_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Sphericity_WW_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WW_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3324 = new TH1D("VH_tagOnly_2b1c_Sphericity__3324","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinContent(1,94.34047);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinContent(2,60.37984);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinContent(3,45.03876);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinContent(4,24.6474);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinContent(5,16.19096);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinContent(6,6.259898);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinContent(7,1.366438);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinContent(8,2.575327);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinContent(10,2.032048);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinContent(11,0.8645198);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinContent(13,1.84946);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinContent(15,0.5430295);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinError(1,9.619485);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinError(2,6.833191);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinError(3,6.789382);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinError(4,4.769235);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinError(5,3.574855);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinError(6,2.211982);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinError(7,0.7942737);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinError(8,1.389629);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinError(10,1.487269);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinError(11,0.8645198);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinError(13,1.84946);
   VH_tagOnly_2b1c_Sphericity__3324->SetBinError(15,0.5430295);
   VH_tagOnly_2b1c_Sphericity__3324->SetEntries(357);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3324->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3324->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3324->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3324->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3324->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3324->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3324->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3324->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3324->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3324->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3324->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3324->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3324->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3324->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3324->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3324->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_tagOnly_2b1c_18->Modified();
   Sphericity_WW_tagOnly_2b1c_18->cd();
   Sphericity_WW_tagOnly_2b1c_18->SetSelected(Sphericity_WW_tagOnly_2b1c_18);
}
