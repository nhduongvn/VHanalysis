#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-9.836784,1.133333,88.53105);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__237 = new TH1D("VbbHcc_tags_Aplanarity__237","",50,0,1);
   VbbHcc_tags_Aplanarity__237->SetBinContent(1,74.94692);
   VbbHcc_tags_Aplanarity__237->SetBinContent(2,5.159017);
   VbbHcc_tags_Aplanarity__237->SetBinContent(3,0.925416);
   VbbHcc_tags_Aplanarity__237->SetBinContent(4,0.4354668);
   VbbHcc_tags_Aplanarity__237->SetBinContent(5,0.1681006);
   VbbHcc_tags_Aplanarity__237->SetBinContent(6,0.07708228);
   VbbHcc_tags_Aplanarity__237->SetBinContent(7,0.05146614);
   VbbHcc_tags_Aplanarity__237->SetBinContent(8,0.007987122);
   VbbHcc_tags_Aplanarity__237->SetBinContent(9,0.01541593);
   VbbHcc_tags_Aplanarity__237->SetBinContent(10,0.01062758);
   VbbHcc_tags_Aplanarity__237->SetBinContent(11,0.002372771);
   VbbHcc_tags_Aplanarity__237->SetBinContent(12,0.004304116);
   VbbHcc_tags_Aplanarity__237->SetBinContent(14,0.009147466);
   VbbHcc_tags_Aplanarity__237->SetBinError(1,0.5928191);
   VbbHcc_tags_Aplanarity__237->SetBinError(2,0.140785);
   VbbHcc_tags_Aplanarity__237->SetBinError(3,0.05855455);
   VbbHcc_tags_Aplanarity__237->SetBinError(4,0.07676049);
   VbbHcc_tags_Aplanarity__237->SetBinError(5,0.02414688);
   VbbHcc_tags_Aplanarity__237->SetBinError(6,0.01780694);
   VbbHcc_tags_Aplanarity__237->SetBinError(7,0.01432841);
   VbbHcc_tags_Aplanarity__237->SetBinError(8,0.004371452);
   VbbHcc_tags_Aplanarity__237->SetBinError(9,0.006670157);
   VbbHcc_tags_Aplanarity__237->SetBinError(10,0.005387073);
   VbbHcc_tags_Aplanarity__237->SetBinError(11,0.002372771);
   VbbHcc_tags_Aplanarity__237->SetBinError(12,0.004304116);
   VbbHcc_tags_Aplanarity__237->SetBinError(14,0.009147466);
   VbbHcc_tags_Aplanarity__237->SetEntries(27254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity__237->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__237->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__237->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__237->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__237->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__237->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__237->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__237->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__237->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__237->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__237->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__237->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
