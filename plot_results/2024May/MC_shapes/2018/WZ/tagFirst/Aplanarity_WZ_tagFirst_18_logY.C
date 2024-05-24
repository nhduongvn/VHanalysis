#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_tagFirst_18_logY()
{
//=========Macro generated from canvas: Aplanarity_WZ_tagFirst_18/Aplanarity_WZ_tagFirst_18
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_tagFirst_18 = new TCanvas("Aplanarity_WZ_tagFirst_18", "Aplanarity_WZ_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_tagFirst_18->SetHighLightColor(2);
   Aplanarity_WZ_tagFirst_18->Range(-0.2,0.2407433,1.133333,2.9949);
   Aplanarity_WZ_tagFirst_18->SetFillColor(0);
   Aplanarity_WZ_tagFirst_18->SetFillStyle(4000);
   Aplanarity_WZ_tagFirst_18->SetBorderMode(0);
   Aplanarity_WZ_tagFirst_18->SetBorderSize(2);
   Aplanarity_WZ_tagFirst_18->SetLogy();
   Aplanarity_WZ_tagFirst_18->SetLeftMargin(0.15);
   Aplanarity_WZ_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagFirst_18->SetFrameBorderMode(0);
   Aplanarity_WZ_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__477 = new TH1D("VH_tagFirst_Aplanarity__477","",50,0,1);
   VH_tagFirst_Aplanarity__477->SetBinContent(1,276.6528);
   VH_tagFirst_Aplanarity__477->SetBinContent(2,31.67723);
   VH_tagFirst_Aplanarity__477->SetBinContent(3,6.564308);
   VH_tagFirst_Aplanarity__477->SetBinContent(4,8.929379);
   VH_tagFirst_Aplanarity__477->SetBinError(1,14.83145);
   VH_tagFirst_Aplanarity__477->SetBinError(2,6.120792);
   VH_tagFirst_Aplanarity__477->SetBinError(3,2.175934);
   VH_tagFirst_Aplanarity__477->SetBinError(4,3.618223);
   VH_tagFirst_Aplanarity__477->SetEntries(523);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__477->SetLineColor(ci);
   VH_tagFirst_Aplanarity__477->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__477->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__477->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__477->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__477->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__477->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__477->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__477->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__477->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__477->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__477->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__477->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__477->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__477->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__477->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_tagFirst_18->Modified();
   Aplanarity_WZ_tagFirst_18->cd();
   Aplanarity_WZ_tagFirst_18->SetSelected(Aplanarity_WZ_tagFirst_18);
}
