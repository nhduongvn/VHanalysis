#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_tagFirst_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_WW_tagFirst_2b1c_18/Aplanarity_WW_tagFirst_2b1c_18
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_tagFirst_2b1c_18 = new TCanvas("Aplanarity_WW_tagFirst_2b1c_18", "Aplanarity_WW_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_tagFirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_WW_tagFirst_2b1c_18->Range(-0.2,-25.91644,1.133333,233.248);
   Aplanarity_WW_tagFirst_2b1c_18->SetFillColor(0);
   Aplanarity_WW_tagFirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_WW_tagFirst_2b1c_18->SetBorderMode(0);
   Aplanarity_WW_tagFirst_2b1c_18->SetBorderSize(2);
   Aplanarity_WW_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_WW_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WW_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_WW_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WW_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2634 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2634","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2634->SetBinContent(1,197.4586);
   VH_tagFirst_2b1c_Aplanarity__2634->SetBinContent(2,24.72173);
   VH_tagFirst_2b1c_Aplanarity__2634->SetBinContent(3,7.123393);
   VH_tagFirst_2b1c_Aplanarity__2634->SetBinContent(4,1.516769);
   VH_tagFirst_2b1c_Aplanarity__2634->SetBinContent(5,4.178723);
   VH_tagFirst_2b1c_Aplanarity__2634->SetBinContent(7,0.5430295);
   VH_tagFirst_2b1c_Aplanarity__2634->SetBinError(1,13.74195);
   VH_tagFirst_2b1c_Aplanarity__2634->SetBinError(2,4.353991);
   VH_tagFirst_2b1c_Aplanarity__2634->SetBinError(3,2.471393);
   VH_tagFirst_2b1c_Aplanarity__2634->SetBinError(4,1.078326);
   VH_tagFirst_2b1c_Aplanarity__2634->SetBinError(5,2.30433);
   VH_tagFirst_2b1c_Aplanarity__2634->SetBinError(7,0.5430295);
   VH_tagFirst_2b1c_Aplanarity__2634->SetEntries(320);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2634->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2634->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2634->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2634->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2634->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2634->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2634->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2634->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2634->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2634->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2634->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2634->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2634->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2634->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2634->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2634->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_tagFirst_2b1c_18->Modified();
   Aplanarity_WW_tagFirst_2b1c_18->cd();
   Aplanarity_WW_tagFirst_2b1c_18->SetSelected(Aplanarity_WW_tagFirst_2b1c_18);
}
