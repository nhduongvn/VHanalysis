#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-0.002519249,1.133333,0.02267324);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__960 = new TH1D("VbbHcc_both_Aplanarity__960","",50,0,1);
   VbbHcc_both_Aplanarity__960->SetBinContent(1,0.01919428);
   VbbHcc_both_Aplanarity__960->SetBinContent(2,0.01000602);
   VbbHcc_both_Aplanarity__960->SetBinContent(3,0.003727531);
   VbbHcc_both_Aplanarity__960->SetBinContent(4,0.002033624);
   VbbHcc_both_Aplanarity__960->SetBinContent(5,0.001451714);
   VbbHcc_both_Aplanarity__960->SetBinContent(6,0.0008664275);
   VbbHcc_both_Aplanarity__960->SetBinContent(7,0.0008253931);
   VbbHcc_both_Aplanarity__960->SetBinContent(8,0.0006281448);
   VbbHcc_both_Aplanarity__960->SetBinContent(10,0.0003315104);
   VbbHcc_both_Aplanarity__960->SetBinError(1,0.002366901);
   VbbHcc_both_Aplanarity__960->SetBinError(2,0.001734175);
   VbbHcc_both_Aplanarity__960->SetBinError(3,0.001040551);
   VbbHcc_both_Aplanarity__960->SetBinError(4,0.0007327147);
   VbbHcc_both_Aplanarity__960->SetBinError(5,0.000656747);
   VbbHcc_both_Aplanarity__960->SetBinError(6,0.0005002898);
   VbbHcc_both_Aplanarity__960->SetBinError(7,0.0004779302);
   VbbHcc_both_Aplanarity__960->SetBinError(8,0.0004455989);
   VbbHcc_both_Aplanarity__960->SetBinError(10,0.0003315104);
   VbbHcc_both_Aplanarity__960->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity__960->SetFillColor(ci);
   VbbHcc_both_Aplanarity__960->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity__960->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity__960->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__960->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__960->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__960->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__960->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__960->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__960->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__960->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__960->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
