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
   Aplanarity_algo_16->Range(-0.2,-11.80011,1.133333,106.201);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__595 = new TH1D("VbbHcc_algo_Aplanarity__595","",50,0,1);
   VbbHcc_algo_Aplanarity__595->SetBinContent(1,89.90557);
   VbbHcc_algo_Aplanarity__595->SetBinContent(2,10.13379);
   VbbHcc_algo_Aplanarity__595->SetBinContent(3,2.08279);
   VbbHcc_algo_Aplanarity__595->SetBinContent(4,0.2938515);
   VbbHcc_algo_Aplanarity__595->SetBinContent(5,0.2507553);
   VbbHcc_algo_Aplanarity__595->SetBinContent(6,0.1780332);
   VbbHcc_algo_Aplanarity__595->SetBinContent(7,0.08744308);
   VbbHcc_algo_Aplanarity__595->SetBinError(1,2.887466);
   VbbHcc_algo_Aplanarity__595->SetBinError(2,0.9451663);
   VbbHcc_algo_Aplanarity__595->SetBinError(3,0.4329796);
   VbbHcc_algo_Aplanarity__595->SetBinError(4,0.1543556);
   VbbHcc_algo_Aplanarity__595->SetBinError(5,0.145229);
   VbbHcc_algo_Aplanarity__595->SetBinError(6,0.1267066);
   VbbHcc_algo_Aplanarity__595->SetBinError(7,0.08744308);
   VbbHcc_algo_Aplanarity__595->SetEntries(1159);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity__595->SetFillColor(ci);
   VbbHcc_algo_Aplanarity__595->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__595->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__595->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__595->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__595->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__595->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__595->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__595->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__595->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__595->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__595->Draw("HIST");
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
