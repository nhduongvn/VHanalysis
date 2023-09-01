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
   Aplanarity_algo_16->Range(-0.2,-1407.952,1.133333,12671.57);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity__592 = new TH1D("VbbHcc_algo_Aplanarity__592","",50,0,1);
   VbbHcc_algo_Aplanarity__592->SetBinContent(1,10727.25);
   VbbHcc_algo_Aplanarity__592->SetBinContent(2,1362.01);
   VbbHcc_algo_Aplanarity__592->SetBinContent(3,318.3278);
   VbbHcc_algo_Aplanarity__592->SetBinContent(4,68.45616);
   VbbHcc_algo_Aplanarity__592->SetBinContent(5,23.42758);
   VbbHcc_algo_Aplanarity__592->SetBinContent(6,5.402809);
   VbbHcc_algo_Aplanarity__592->SetBinContent(7,5.506933);
   VbbHcc_algo_Aplanarity__592->SetBinContent(8,2.532284);
   VbbHcc_algo_Aplanarity__592->SetBinContent(9,0.3794122);
   VbbHcc_algo_Aplanarity__592->SetBinContent(10,0.2468423);
   VbbHcc_algo_Aplanarity__592->SetBinContent(11,0.1271494);
   VbbHcc_algo_Aplanarity__592->SetBinContent(13,0.2009486);
   VbbHcc_algo_Aplanarity__592->SetBinError(1,78.01064);
   VbbHcc_algo_Aplanarity__592->SetBinError(2,31.97194);
   VbbHcc_algo_Aplanarity__592->SetBinError(3,16.26591);
   VbbHcc_algo_Aplanarity__592->SetBinError(4,6.899603);
   VbbHcc_algo_Aplanarity__592->SetBinError(5,5.25695);
   VbbHcc_algo_Aplanarity__592->SetBinError(6,2.655086);
   VbbHcc_algo_Aplanarity__592->SetBinError(7,2.805032);
   VbbHcc_algo_Aplanarity__592->SetBinError(8,1.973983);
   VbbHcc_algo_Aplanarity__592->SetBinError(9,0.270522);
   VbbHcc_algo_Aplanarity__592->SetBinError(10,0.1966584);
   VbbHcc_algo_Aplanarity__592->SetBinError(11,0.09059632);
   VbbHcc_algo_Aplanarity__592->SetBinError(13,0.2009486);
   VbbHcc_algo_Aplanarity__592->SetEntries(93738);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity__592->SetFillColor(ci);
   VbbHcc_algo_Aplanarity__592->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity__592->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity__592->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__592->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__592->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__592->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__592->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__592->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__592->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity__592->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__592->Draw("HIST");
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
