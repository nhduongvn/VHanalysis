#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_tagFirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Aplanarity_QCD_tagFirst_2b1c_18/Aplanarity_QCD_tagFirst_2b1c_18
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_tagFirst_2b1c_18 = new TCanvas("Aplanarity_QCD_tagFirst_2b1c_18", "Aplanarity_QCD_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_tagFirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_QCD_tagFirst_2b1c_18->Range(-0.2,0.3352237,1.133333,7.771856);
   Aplanarity_QCD_tagFirst_2b1c_18->SetFillColor(0);
   Aplanarity_QCD_tagFirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_QCD_tagFirst_2b1c_18->SetBorderMode(0);
   Aplanarity_QCD_tagFirst_2b1c_18->SetBorderSize(2);
   Aplanarity_QCD_tagFirst_2b1c_18->SetLogy();
   Aplanarity_QCD_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_QCD_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_QCD_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2619 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2619","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(1,5631758);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(2,751190);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(3,197923.3);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(4,56500.09);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(5,22500.24);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(6,12635.64);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(7,4250.04);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(8,8772.585);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(9,2183.072);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(10,1772.544);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(11,456.6101);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(12,2493.243);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(13,1060.427);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(14,91.05307);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(15,40.71006);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(16,107.2408);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(17,106.0758);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(18,35.07355);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinContent(19,23.98374);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(1,60348.03);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(2,20801.6);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(3,11075.59);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(4,4985.586);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(5,3353.126);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(6,1857.825);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(7,696.8235);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(8,4114.55);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(9,592.8038);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(10,917.7169);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(11,127.3276);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(12,1250.722);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(13,757.6816);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(14,40.00626);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(15,22.85856);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(16,73.02333);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(17,74.89263);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(18,28.90437);
   VH_tagFirst_2b1c_Aplanarity__2619->SetBinError(19,23.61291);
   VH_tagFirst_2b1c_Aplanarity__2619->SetEntries(227328);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2619->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2619->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2619->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2619->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2619->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2619->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2619->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2619->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2619->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2619->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2619->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2619->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2619->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2619->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2619->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2619->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_tagFirst_2b1c_18->Modified();
   Aplanarity_QCD_tagFirst_2b1c_18->cd();
   Aplanarity_QCD_tagFirst_2b1c_18->SetSelected(Aplanarity_QCD_tagFirst_2b1c_18);
}
