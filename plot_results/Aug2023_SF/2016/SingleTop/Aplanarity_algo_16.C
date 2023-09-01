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
   Aplanarity_algo_16->Range(-0.2,-1935.706,1.133333,17421.35);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__590 = new TH1D("VbbHcc_algo_Aplanarity__590","",50,0,1);
   VbbHcc_algo_Aplanarity__590->SetBinContent(1,14748.23);
   VbbHcc_algo_Aplanarity__590->SetBinContent(2,2088.883);
   VbbHcc_algo_Aplanarity__590->SetBinContent(3,463.4105);
   VbbHcc_algo_Aplanarity__590->SetBinContent(4,130.8677);
   VbbHcc_algo_Aplanarity__590->SetBinContent(5,43.21328);
   VbbHcc_algo_Aplanarity__590->SetBinContent(6,16.77172);
   VbbHcc_algo_Aplanarity__590->SetBinContent(7,7.828398);
   VbbHcc_algo_Aplanarity__590->SetBinContent(8,3.992089);
   VbbHcc_algo_Aplanarity__590->SetBinContent(9,1.528141);
   VbbHcc_algo_Aplanarity__590->SetBinContent(10,0.9762582);
   VbbHcc_algo_Aplanarity__590->SetBinContent(11,0.4853329);
   VbbHcc_algo_Aplanarity__590->SetBinContent(12,0.4038788);
   VbbHcc_algo_Aplanarity__590->SetBinContent(13,0.08116292);
   VbbHcc_algo_Aplanarity__590->SetBinContent(14,0.2718615);
   VbbHcc_algo_Aplanarity__590->SetBinContent(15,0.07725896);
   VbbHcc_algo_Aplanarity__590->SetBinContent(18,0.01667485);
   VbbHcc_algo_Aplanarity__590->SetBinError(1,44.00812);
   VbbHcc_algo_Aplanarity__590->SetBinError(2,16.40316);
   VbbHcc_algo_Aplanarity__590->SetBinError(3,7.696379);
   VbbHcc_algo_Aplanarity__590->SetBinError(4,4.158855);
   VbbHcc_algo_Aplanarity__590->SetBinError(5,2.297089);
   VbbHcc_algo_Aplanarity__590->SetBinError(6,1.456825);
   VbbHcc_algo_Aplanarity__590->SetBinError(7,1.005289);
   VbbHcc_algo_Aplanarity__590->SetBinError(8,0.7809317);
   VbbHcc_algo_Aplanarity__590->SetBinError(9,0.4979211);
   VbbHcc_algo_Aplanarity__590->SetBinError(10,0.29756);
   VbbHcc_algo_Aplanarity__590->SetBinError(11,0.2434609);
   VbbHcc_algo_Aplanarity__590->SetBinError(12,0.2097231);
   VbbHcc_algo_Aplanarity__590->SetBinError(13,0.07234489);
   VbbHcc_algo_Aplanarity__590->SetBinError(14,0.2149435);
   VbbHcc_algo_Aplanarity__590->SetBinError(15,0.05090008);
   VbbHcc_algo_Aplanarity__590->SetBinError(18,0.01667485);
   VbbHcc_algo_Aplanarity__590->SetEntries(350651);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity__590->SetFillColor(ci);
   VbbHcc_algo_Aplanarity__590->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__590->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__590->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__590->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__590->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__590->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__590->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__590->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__590->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__590->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__590->Draw("HIST");
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
