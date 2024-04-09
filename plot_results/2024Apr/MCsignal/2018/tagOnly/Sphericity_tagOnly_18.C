#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tagOnly_18()
{
//=========Macro generated from canvas: Sphericity_tagOnly_18/Sphericity_tagOnly_18
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_tagOnly_18 = new TCanvas("Sphericity_tagOnly_18", "Sphericity_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tagOnly_18->SetHighLightColor(2);
   Sphericity_tagOnly_18->Range(-0.2,-0.1155037,1.133333,1.039533);
   Sphericity_tagOnly_18->SetFillColor(0);
   Sphericity_tagOnly_18->SetFillStyle(4000);
   Sphericity_tagOnly_18->SetBorderMode(0);
   Sphericity_tagOnly_18->SetBorderSize(2);
   Sphericity_tagOnly_18->SetLeftMargin(0.15);
   Sphericity_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_tagOnly_18->SetFrameBorderMode(0);
   Sphericity_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__117 = new TH1D("VH_tagOnly_Sphericity__117","",25,0,1);
   VH_tagOnly_Sphericity__117->SetBinContent(1,0.8800282);
   VH_tagOnly_Sphericity__117->SetBinContent(2,0.7705489);
   VH_tagOnly_Sphericity__117->SetBinContent(3,0.38053);
   VH_tagOnly_Sphericity__117->SetBinContent(4,0.3148863);
   VH_tagOnly_Sphericity__117->SetBinContent(5,0.1962938);
   VH_tagOnly_Sphericity__117->SetBinContent(6,0.07286857);
   VH_tagOnly_Sphericity__117->SetBinContent(7,0.04866815);
   VH_tagOnly_Sphericity__117->SetBinContent(8,0.0210349);
   VH_tagOnly_Sphericity__117->SetBinContent(9,0.002487843);
   VH_tagOnly_Sphericity__117->SetBinContent(10,0.008128139);
   VH_tagOnly_Sphericity__117->SetBinContent(11,0.005651034);
   VH_tagOnly_Sphericity__117->SetBinContent(13,0.002296912);
   VH_tagOnly_Sphericity__117->SetBinContent(18,0.002696336);
   VH_tagOnly_Sphericity__117->SetBinError(1,0.06271628);
   VH_tagOnly_Sphericity__117->SetBinError(2,0.054569);
   VH_tagOnly_Sphericity__117->SetBinError(3,0.03935534);
   VH_tagOnly_Sphericity__117->SetBinError(4,0.03304571);
   VH_tagOnly_Sphericity__117->SetBinError(5,0.02585507);
   VH_tagOnly_Sphericity__117->SetBinError(6,0.01488148);
   VH_tagOnly_Sphericity__117->SetBinError(7,0.01575997);
   VH_tagOnly_Sphericity__117->SetBinError(8,0.008668529);
   VH_tagOnly_Sphericity__117->SetBinError(9,0.002487843);
   VH_tagOnly_Sphericity__117->SetBinError(10,0.004757543);
   VH_tagOnly_Sphericity__117->SetBinError(11,0.003379341);
   VH_tagOnly_Sphericity__117->SetBinError(13,0.002296912);
   VH_tagOnly_Sphericity__117->SetBinError(18,0.002696336);
   VH_tagOnly_Sphericity__117->SetEntries(903);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__117->SetLineColor(ci);
   VH_tagOnly_Sphericity__117->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__117->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__117->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__117->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__117->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__117->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__117->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__117->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__117->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__117->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__117->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__117->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__117->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__117->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__117->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tagOnly_18->Modified();
   Sphericity_tagOnly_18->cd();
   Sphericity_tagOnly_18->SetSelected(Sphericity_tagOnly_18);
}
