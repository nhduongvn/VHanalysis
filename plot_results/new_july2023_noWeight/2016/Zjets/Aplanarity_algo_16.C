void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug  3 12:24:54 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-1694.606,1.133333,15251.45);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,12911.28);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,1706.024);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,393.2523);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,86.22161);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,28.67784);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,6.269949);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,7.463035);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,3.407391);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.4361223);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.3578197);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.1448776);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(13,0.279517);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,99.7814);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,42.48588);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,20.84876);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,9.19997);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,6.256964);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,2.824203);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,3.857435);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,2.702228);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.3006532);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.2902776);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.1027791);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(13,0.279517);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(93897);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->Draw("HIST");
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
