#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-288778.2,1.133333,2599003);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__589 = new TH1D("VbbHcc_algo_Aplanarity__589","",50,0,1);
   VbbHcc_algo_Aplanarity__589->SetBinContent(1,2200214);
   VbbHcc_algo_Aplanarity__589->SetBinContent(2,350116.1);
   VbbHcc_algo_Aplanarity__589->SetBinContent(3,74440.44);
   VbbHcc_algo_Aplanarity__589->SetBinContent(4,16877.55);
   VbbHcc_algo_Aplanarity__589->SetBinContent(5,3542.605);
   VbbHcc_algo_Aplanarity__589->SetBinContent(6,1189.107);
   VbbHcc_algo_Aplanarity__589->SetBinContent(7,115.4541);
   VbbHcc_algo_Aplanarity__589->SetBinContent(8,105.5329);
   VbbHcc_algo_Aplanarity__589->SetBinContent(9,36.68908);
   VbbHcc_algo_Aplanarity__589->SetBinContent(10,11.26493);
   VbbHcc_algo_Aplanarity__589->SetBinContent(11,10.44725);
   VbbHcc_algo_Aplanarity__589->SetBinContent(12,3.367961);
   VbbHcc_algo_Aplanarity__589->SetBinContent(13,15.41324);
   VbbHcc_algo_Aplanarity__589->SetBinContent(15,1.93987);
   VbbHcc_algo_Aplanarity__589->SetBinError(1,37547.95);
   VbbHcc_algo_Aplanarity__589->SetBinError(2,17406.42);
   VbbHcc_algo_Aplanarity__589->SetBinError(3,4556.908);
   VbbHcc_algo_Aplanarity__589->SetBinError(4,2130.964);
   VbbHcc_algo_Aplanarity__589->SetBinError(5,748.607);
   VbbHcc_algo_Aplanarity__589->SetBinError(6,424.4565);
   VbbHcc_algo_Aplanarity__589->SetBinError(7,41.95935);
   VbbHcc_algo_Aplanarity__589->SetBinError(8,40.33617);
   VbbHcc_algo_Aplanarity__589->SetBinError(9,20.99781);
   VbbHcc_algo_Aplanarity__589->SetBinError(10,11.26493);
   VbbHcc_algo_Aplanarity__589->SetBinError(11,10.44725);
   VbbHcc_algo_Aplanarity__589->SetBinError(12,3.367961);
   VbbHcc_algo_Aplanarity__589->SetBinError(13,12.0388);
   VbbHcc_algo_Aplanarity__589->SetBinError(15,1.93987);
   VbbHcc_algo_Aplanarity__589->SetEntries(133403);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity__589->SetFillColor(ci);
   VbbHcc_algo_Aplanarity__589->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__589->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__589->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__589->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__589->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__589->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__589->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__589->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__589->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__589->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__589->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
