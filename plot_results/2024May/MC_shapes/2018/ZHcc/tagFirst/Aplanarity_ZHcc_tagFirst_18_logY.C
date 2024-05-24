#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_tagFirst_18_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_tagFirst_18/Aplanarity_ZHcc_tagFirst_18
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_tagFirst_18 = new TCanvas("Aplanarity_ZHcc_tagFirst_18", "Aplanarity_ZHcc_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_tagFirst_18->SetHighLightColor(2);
   Aplanarity_ZHcc_tagFirst_18->Range(-0.2,-3.995811,1.133333,1.400371);
   Aplanarity_ZHcc_tagFirst_18->SetFillColor(0);
   Aplanarity_ZHcc_tagFirst_18->SetFillStyle(4000);
   Aplanarity_ZHcc_tagFirst_18->SetBorderMode(0);
   Aplanarity_ZHcc_tagFirst_18->SetBorderSize(2);
   Aplanarity_ZHcc_tagFirst_18->SetLogy();
   Aplanarity_ZHcc_tagFirst_18->SetLeftMargin(0.15);
   Aplanarity_ZHcc_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagFirst_18->SetFrameBorderMode(0);
   Aplanarity_ZHcc_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__453 = new TH1D("VH_tagFirst_Aplanarity__453","",50,0,1);
   VH_tagFirst_Aplanarity__453->SetBinContent(1,3.830046);
   VH_tagFirst_Aplanarity__453->SetBinContent(2,0.3323245);
   VH_tagFirst_Aplanarity__453->SetBinContent(3,0.09054572);
   VH_tagFirst_Aplanarity__453->SetBinContent(4,0.01648992);
   VH_tagFirst_Aplanarity__453->SetBinContent(5,0.007485234);
   VH_tagFirst_Aplanarity__453->SetBinContent(6,0.002775034);
   VH_tagFirst_Aplanarity__453->SetBinContent(7,0.006058982);
   VH_tagFirst_Aplanarity__453->SetBinContent(8,0.007617291);
   VH_tagFirst_Aplanarity__453->SetBinContent(9,0.0006995791);
   VH_tagFirst_Aplanarity__453->SetBinContent(10,0.0008107704);
   VH_tagFirst_Aplanarity__453->SetBinContent(12,0.0007021084);
   VH_tagFirst_Aplanarity__453->SetBinContent(14,0.0008758926);
   VH_tagFirst_Aplanarity__453->SetBinError(1,0.1044197);
   VH_tagFirst_Aplanarity__453->SetBinError(2,0.02656432);
   VH_tagFirst_Aplanarity__453->SetBinError(3,0.01699855);
   VH_tagFirst_Aplanarity__453->SetBinError(4,0.005904837);
   VH_tagFirst_Aplanarity__453->SetBinError(5,0.003542516);
   VH_tagFirst_Aplanarity__453->SetBinError(6,0.001894837);
   VH_tagFirst_Aplanarity__453->SetBinError(7,0.004310176);
   VH_tagFirst_Aplanarity__453->SetBinError(8,0.005451981);
   VH_tagFirst_Aplanarity__453->SetBinError(9,0.0004953022);
   VH_tagFirst_Aplanarity__453->SetBinError(10,0.0008107704);
   VH_tagFirst_Aplanarity__453->SetBinError(12,0.0004964887);
   VH_tagFirst_Aplanarity__453->SetBinError(14,0.0006544837);
   VH_tagFirst_Aplanarity__453->SetEntries(4423);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__453->SetLineColor(ci);
   VH_tagFirst_Aplanarity__453->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__453->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__453->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__453->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__453->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__453->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__453->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__453->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__453->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__453->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__453->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__453->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__453->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__453->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__453->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_tagFirst_18->Modified();
   Aplanarity_ZHcc_tagFirst_18->cd();
   Aplanarity_ZHcc_tagFirst_18->SetSelected(Aplanarity_ZHcc_tagFirst_18);
}
