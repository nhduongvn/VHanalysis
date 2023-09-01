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
   Aplanarity_both_16->Range(-0.2,-11694,1.133333,105246);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__949 = new TH1D("VbbHcc_both_Aplanarity__949","",50,0,1);
   VbbHcc_both_Aplanarity__949->SetBinContent(1,89097.11);
   VbbHcc_both_Aplanarity__949->SetBinContent(2,25242.8);
   VbbHcc_both_Aplanarity__949->SetBinContent(3,13651.94);
   VbbHcc_both_Aplanarity__949->SetBinContent(4,5293.213);
   VbbHcc_both_Aplanarity__949->SetBinContent(5,5123.613);
   VbbHcc_both_Aplanarity__949->SetBinContent(6,3215.689);
   VbbHcc_both_Aplanarity__949->SetBinContent(7,2624.339);
   VbbHcc_both_Aplanarity__949->SetBinContent(8,909.8632);
   VbbHcc_both_Aplanarity__949->SetBinContent(9,623.3849);
   VbbHcc_both_Aplanarity__949->SetBinContent(10,329.8295);
   VbbHcc_both_Aplanarity__949->SetBinContent(11,459.57);
   VbbHcc_both_Aplanarity__949->SetBinContent(12,36.05504);
   VbbHcc_both_Aplanarity__949->SetBinContent(13,82.79448);
   VbbHcc_both_Aplanarity__949->SetBinContent(14,85.14756);
   VbbHcc_both_Aplanarity__949->SetBinContent(15,21.57159);
   VbbHcc_both_Aplanarity__949->SetBinContent(16,0.1947294);
   VbbHcc_both_Aplanarity__949->SetBinContent(17,6.305982);
   VbbHcc_both_Aplanarity__949->SetBinContent(18,3.453126);
   VbbHcc_both_Aplanarity__949->SetBinError(1,4670.35);
   VbbHcc_both_Aplanarity__949->SetBinError(2,2513.916);
   VbbHcc_both_Aplanarity__949->SetBinError(3,2069.986);
   VbbHcc_both_Aplanarity__949->SetBinError(4,784.7766);
   VbbHcc_both_Aplanarity__949->SetBinError(5,1450.285);
   VbbHcc_both_Aplanarity__949->SetBinError(6,706.8809);
   VbbHcc_both_Aplanarity__949->SetBinError(7,1349.669);
   VbbHcc_both_Aplanarity__949->SetBinError(8,324.2415);
   VbbHcc_both_Aplanarity__949->SetBinError(9,265.2417);
   VbbHcc_both_Aplanarity__949->SetBinError(10,170.6375);
   VbbHcc_both_Aplanarity__949->SetBinError(11,254.9118);
   VbbHcc_both_Aplanarity__949->SetBinError(12,24.71035);
   VbbHcc_both_Aplanarity__949->SetBinError(13,37.86851);
   VbbHcc_both_Aplanarity__949->SetBinError(14,33.28209);
   VbbHcc_both_Aplanarity__949->SetBinError(15,18.28588);
   VbbHcc_both_Aplanarity__949->SetBinError(16,0.1947294);
   VbbHcc_both_Aplanarity__949->SetBinError(17,6.305982);
   VbbHcc_both_Aplanarity__949->SetBinError(18,3.453126);
   VbbHcc_both_Aplanarity__949->SetEntries(10042);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity__949->SetFillColor(ci);
   VbbHcc_both_Aplanarity__949->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity__949->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity__949->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__949->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__949->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__949->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__949->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__949->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__949->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__949->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__949->Draw("HIST");
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
