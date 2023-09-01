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
   Aplanarity_both_16->Range(-0.2,-15.14373,1.133333,136.2936);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity__953 = new TH1D("VbbHcc_both_Aplanarity__953","",50,0,1);
   VbbHcc_both_Aplanarity__953->SetBinContent(1,115.3808);
   VbbHcc_both_Aplanarity__953->SetBinContent(2,29.50627);
   VbbHcc_both_Aplanarity__953->SetBinContent(3,16.67486);
   VbbHcc_both_Aplanarity__953->SetBinContent(4,7.881425);
   VbbHcc_both_Aplanarity__953->SetBinContent(5,3.545858);
   VbbHcc_both_Aplanarity__953->SetBinContent(6,2.726077);
   VbbHcc_both_Aplanarity__953->SetBinContent(7,1.266605);
   VbbHcc_both_Aplanarity__953->SetBinContent(8,0.6214467);
   VbbHcc_both_Aplanarity__953->SetBinContent(9,0.672284);
   VbbHcc_both_Aplanarity__953->SetBinContent(10,0.1328722);
   VbbHcc_both_Aplanarity__953->SetBinContent(11,0.7071798);
   VbbHcc_both_Aplanarity__953->SetBinContent(12,0.2990458);
   VbbHcc_both_Aplanarity__953->SetBinContent(14,0.0002291616);
   VbbHcc_both_Aplanarity__953->SetBinContent(15,0.0002245513);
   VbbHcc_both_Aplanarity__953->SetBinContent(17,3.67813e-05);
   VbbHcc_both_Aplanarity__953->SetBinError(1,5.355869);
   VbbHcc_both_Aplanarity__953->SetBinError(2,4.846268);
   VbbHcc_both_Aplanarity__953->SetBinError(3,4.902842);
   VbbHcc_both_Aplanarity__953->SetBinError(4,1.744363);
   VbbHcc_both_Aplanarity__953->SetBinError(5,0.9138077);
   VbbHcc_both_Aplanarity__953->SetBinError(6,0.879595);
   VbbHcc_both_Aplanarity__953->SetBinError(7,0.3931741);
   VbbHcc_both_Aplanarity__953->SetBinError(8,0.2275444);
   VbbHcc_both_Aplanarity__953->SetBinError(9,0.3944692);
   VbbHcc_both_Aplanarity__953->SetBinError(10,0.1107141);
   VbbHcc_both_Aplanarity__953->SetBinError(11,0.3867535);
   VbbHcc_both_Aplanarity__953->SetBinError(12,0.1879559);
   VbbHcc_both_Aplanarity__953->SetBinError(14,0.0002291616);
   VbbHcc_both_Aplanarity__953->SetBinError(15,0.0002245513);
   VbbHcc_both_Aplanarity__953->SetBinError(17,3.67813e-05);
   VbbHcc_both_Aplanarity__953->SetEntries(3785);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity__953->SetFillColor(ci);
   VbbHcc_both_Aplanarity__953->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity__953->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity__953->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__953->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__953->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__953->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__953->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__953->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__953->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__953->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__953->Draw("HIST");
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
