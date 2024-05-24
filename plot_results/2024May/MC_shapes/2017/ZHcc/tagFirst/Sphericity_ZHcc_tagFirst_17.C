#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_tagFirst_17()
{
//=========Macro generated from canvas: Sphericity_ZHcc_tagFirst_17/Sphericity_ZHcc_tagFirst_17
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_tagFirst_17 = new TCanvas("Sphericity_ZHcc_tagFirst_17", "Sphericity_ZHcc_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_tagFirst_17->SetHighLightColor(2);
   Sphericity_ZHcc_tagFirst_17->Range(-0.2,-0.09799811,1.133333,0.8819829);
   Sphericity_ZHcc_tagFirst_17->SetFillColor(0);
   Sphericity_ZHcc_tagFirst_17->SetFillStyle(4000);
   Sphericity_ZHcc_tagFirst_17->SetBorderMode(0);
   Sphericity_ZHcc_tagFirst_17->SetBorderSize(2);
   Sphericity_ZHcc_tagFirst_17->SetLeftMargin(0.15);
   Sphericity_ZHcc_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagFirst_17->SetFrameBorderMode(0);
   Sphericity_ZHcc_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__422 = new TH1D("VH_tagFirst_Sphericity__422","",25,0,1);
   VH_tagFirst_Sphericity__422->SetBinContent(1,0.7466522);
   VH_tagFirst_Sphericity__422->SetBinContent(2,0.5786274);
   VH_tagFirst_Sphericity__422->SetBinContent(3,0.3422573);
   VH_tagFirst_Sphericity__422->SetBinContent(4,0.2101883);
   VH_tagFirst_Sphericity__422->SetBinContent(5,0.1827759);
   VH_tagFirst_Sphericity__422->SetBinContent(6,0.07099767);
   VH_tagFirst_Sphericity__422->SetBinContent(7,0.02648819);
   VH_tagFirst_Sphericity__422->SetBinContent(8,0.016527);
   VH_tagFirst_Sphericity__422->SetBinContent(9,0.01321393);
   VH_tagFirst_Sphericity__422->SetBinContent(10,0.01294959);
   VH_tagFirst_Sphericity__422->SetBinContent(11,0.009707609);
   VH_tagFirst_Sphericity__422->SetBinContent(12,0.009756829);
   VH_tagFirst_Sphericity__422->SetBinContent(13,0.002877531);
   VH_tagFirst_Sphericity__422->SetBinContent(14,0.001762714);
   VH_tagFirst_Sphericity__422->SetBinContent(15,0.003077927);
   VH_tagFirst_Sphericity__422->SetBinContent(16,0.002379184);
   VH_tagFirst_Sphericity__422->SetBinContent(17,0.00035949);
   VH_tagFirst_Sphericity__422->SetBinContent(19,0.0003996589);
   VH_tagFirst_Sphericity__422->SetBinError(1,0.02840672);
   VH_tagFirst_Sphericity__422->SetBinError(2,0.0255635);
   VH_tagFirst_Sphericity__422->SetBinError(3,0.01927203);
   VH_tagFirst_Sphericity__422->SetBinError(4,0.01488521);
   VH_tagFirst_Sphericity__422->SetBinError(5,0.01629601);
   VH_tagFirst_Sphericity__422->SetBinError(6,0.008568655);
   VH_tagFirst_Sphericity__422->SetBinError(7,0.005055566);
   VH_tagFirst_Sphericity__422->SetBinError(8,0.003680672);
   VH_tagFirst_Sphericity__422->SetBinError(9,0.00372354);
   VH_tagFirst_Sphericity__422->SetBinError(10,0.003521098);
   VH_tagFirst_Sphericity__422->SetBinError(11,0.003283131);
   VH_tagFirst_Sphericity__422->SetBinError(12,0.003590903);
   VH_tagFirst_Sphericity__422->SetBinError(13,0.00108702);
   VH_tagFirst_Sphericity__422->SetBinError(14,0.0005525339);
   VH_tagFirst_Sphericity__422->SetBinError(15,0.001466134);
   VH_tagFirst_Sphericity__422->SetBinError(16,0.001321347);
   VH_tagFirst_Sphericity__422->SetBinError(17,0.0002553456);
   VH_tagFirst_Sphericity__422->SetBinError(19,0.0002834197);
   VH_tagFirst_Sphericity__422->SetEntries(5346);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__422->SetLineColor(ci);
   VH_tagFirst_Sphericity__422->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__422->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__422->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__422->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__422->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__422->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__422->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__422->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__422->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__422->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__422->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__422->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__422->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__422->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__422->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_tagFirst_17->Modified();
   Sphericity_ZHcc_tagFirst_17->cd();
   Sphericity_ZHcc_tagFirst_17->SetSelected(Sphericity_ZHcc_tagFirst_17);
}
