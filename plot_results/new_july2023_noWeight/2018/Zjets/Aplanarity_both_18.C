void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug 10 12:29:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-275.2449,1.133333,2477.204);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,2097.104);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,582.1968);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,282.2856);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,159.2407);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,100.677);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,54.32846);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,31.54469);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,26.78908);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,16.67765);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,11.10731);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,4.908235);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.373809);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,5.755335);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.336737);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,0.7078452);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.8597858);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,1.197339);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,0.4894939);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,30.74092);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,15.7277);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,14.22827);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,9.657379);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,8.661807);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,5.582238);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,2.982797);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,4.752576);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,2.190599);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,1.856725);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,1.124697);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.8569226);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,1.456202);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.5857433);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,0.5138037);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.5233386);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.7096467);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.4894939);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(19394);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
