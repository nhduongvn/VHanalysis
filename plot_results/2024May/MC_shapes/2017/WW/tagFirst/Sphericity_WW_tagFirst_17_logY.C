#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_tagFirst_17_logY()
{
//=========Macro generated from canvas: Sphericity_WW_tagFirst_17/Sphericity_WW_tagFirst_17
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_tagFirst_17 = new TCanvas("Sphericity_WW_tagFirst_17", "Sphericity_WW_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_tagFirst_17->SetHighLightColor(2);
   Sphericity_WW_tagFirst_17->Range(-0.2,-1.415856,1.133333,2.001763);
   Sphericity_WW_tagFirst_17->SetFillColor(0);
   Sphericity_WW_tagFirst_17->SetFillStyle(4000);
   Sphericity_WW_tagFirst_17->SetBorderMode(0);
   Sphericity_WW_tagFirst_17->SetBorderSize(2);
   Sphericity_WW_tagFirst_17->SetLogy();
   Sphericity_WW_tagFirst_17->SetLeftMargin(0.15);
   Sphericity_WW_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_WW_tagFirst_17->SetFrameBorderMode(0);
   Sphericity_WW_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_WW_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__443 = new TH1D("VH_tagFirst_Sphericity__443","",25,0,1);
   VH_tagFirst_Sphericity__443->SetBinContent(1,24.12417);
   VH_tagFirst_Sphericity__443->SetBinContent(2,13.85221);
   VH_tagFirst_Sphericity__443->SetBinContent(3,9.915248);
   VH_tagFirst_Sphericity__443->SetBinContent(4,3.834502);
   VH_tagFirst_Sphericity__443->SetBinContent(5,3.776352);
   VH_tagFirst_Sphericity__443->SetBinContent(6,1.904052);
   VH_tagFirst_Sphericity__443->SetBinContent(7,1.426004);
   VH_tagFirst_Sphericity__443->SetBinContent(8,1.251424);
   VH_tagFirst_Sphericity__443->SetBinContent(13,0.2611829);
   VH_tagFirst_Sphericity__443->SetBinContent(15,0.1686304);
   VH_tagFirst_Sphericity__443->SetBinError(1,3.139944);
   VH_tagFirst_Sphericity__443->SetBinError(2,2.225382);
   VH_tagFirst_Sphericity__443->SetBinError(3,1.914225);
   VH_tagFirst_Sphericity__443->SetBinError(4,1.155696);
   VH_tagFirst_Sphericity__443->SetBinError(5,0.9778405);
   VH_tagFirst_Sphericity__443->SetBinError(6,0.7524319);
   VH_tagFirst_Sphericity__443->SetBinError(7,0.7889855);
   VH_tagFirst_Sphericity__443->SetBinError(8,0.6572765);
   VH_tagFirst_Sphericity__443->SetBinError(13,0.2611829);
   VH_tagFirst_Sphericity__443->SetBinError(15,0.1686304);
   VH_tagFirst_Sphericity__443->SetEntries(204);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__443->SetLineColor(ci);
   VH_tagFirst_Sphericity__443->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__443->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__443->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__443->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__443->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__443->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__443->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__443->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__443->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__443->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__443->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__443->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__443->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__443->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__443->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_tagFirst_17->Modified();
   Sphericity_WW_tagFirst_17->cd();
   Sphericity_WW_tagFirst_17->SetSelected(Sphericity_WW_tagFirst_17);
}
