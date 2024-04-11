#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tagOnly_18()
{
//=========Macro generated from canvas: Sphericity_tagOnly_18/Sphericity_tagOnly_18
//=========  (Thu Apr 11 14:04:08 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_tagOnly_18 = new TCanvas("Sphericity_tagOnly_18", "Sphericity_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tagOnly_18->SetHighLightColor(2);
   Sphericity_tagOnly_18->Range(-0.2,-193145.7,1.133333,1738311);
   Sphericity_tagOnly_18->SetFillColor(0);
   Sphericity_tagOnly_18->SetFillStyle(4000);
   Sphericity_tagOnly_18->SetBorderMode(0);
   Sphericity_tagOnly_18->SetBorderSize(2);
   Sphericity_tagOnly_18->SetLeftMargin(0.15);
   Sphericity_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_tagOnly_18->SetFrameBorderMode(0);
   Sphericity_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__39 = new TH1D("VH_tagOnly_Sphericity__39","",25,0,1);
   VH_tagOnly_Sphericity__39->SetBinContent(1,1471586);
   VH_tagOnly_Sphericity__39->SetBinContent(2,749336.9);
   VH_tagOnly_Sphericity__39->SetBinContent(3,682146.5);
   VH_tagOnly_Sphericity__39->SetBinContent(4,163476.6);
   VH_tagOnly_Sphericity__39->SetBinContent(5,108740.9);
   VH_tagOnly_Sphericity__39->SetBinContent(6,35974.03);
   VH_tagOnly_Sphericity__39->SetBinContent(7,11282.36);
   VH_tagOnly_Sphericity__39->SetBinContent(8,1494.5);
   VH_tagOnly_Sphericity__39->SetBinContent(9,6072.038);
   VH_tagOnly_Sphericity__39->SetBinContent(10,1862.63);
   VH_tagOnly_Sphericity__39->SetBinContent(11,18327.48);
   VH_tagOnly_Sphericity__39->SetBinContent(12,4259.438);
   VH_tagOnly_Sphericity__39->SetBinContent(14,669.6128);
   VH_tagOnly_Sphericity__39->SetBinContent(15,683.0913);
   VH_tagOnly_Sphericity__39->SetBinContent(17,1232.925);
   VH_tagOnly_Sphericity__39->SetBinError(1,392327.6);
   VH_tagOnly_Sphericity__39->SetBinError(2,298312.1);
   VH_tagOnly_Sphericity__39->SetBinError(3,305828.5);
   VH_tagOnly_Sphericity__39->SetBinError(4,57050.3);
   VH_tagOnly_Sphericity__39->SetBinError(5,45593.18);
   VH_tagOnly_Sphericity__39->SetBinError(6,15233.49);
   VH_tagOnly_Sphericity__39->SetBinError(7,4951.796);
   VH_tagOnly_Sphericity__39->SetBinError(8,1350.422);
   VH_tagOnly_Sphericity__39->SetBinError(9,3106.506);
   VH_tagOnly_Sphericity__39->SetBinError(10,962.6137);
   VH_tagOnly_Sphericity__39->SetBinError(11,15254.8);
   VH_tagOnly_Sphericity__39->SetBinError(12,2538.59);
   VH_tagOnly_Sphericity__39->SetBinError(14,488.4853);
   VH_tagOnly_Sphericity__39->SetBinError(15,683.0913);
   VH_tagOnly_Sphericity__39->SetBinError(17,1232.925);
   VH_tagOnly_Sphericity__39->SetEntries(780);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__39->SetLineColor(ci);
   VH_tagOnly_Sphericity__39->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__39->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__39->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__39->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__39->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__39->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__39->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__39->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__39->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__39->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__39->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__39->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__39->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__39->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__39->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tagOnly_18->Modified();
   Sphericity_tagOnly_18->cd();
   Sphericity_tagOnly_18->SetSelected(Sphericity_tagOnly_18);
}
