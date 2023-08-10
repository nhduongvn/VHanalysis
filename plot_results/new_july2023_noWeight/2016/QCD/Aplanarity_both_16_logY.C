void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:33:06 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-1.824285,1.133333,6.102005);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,107603.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,29744.48);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,16732.53);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,6313.18);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,5658.091);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,3878.814);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,2896.129);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1239.625);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,827.0558);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,487.7229);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,673.2146);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,41.67668);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,94.5786);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,92.62911);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,25.73584);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.1859404);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,5.879633);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,3.532283);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,5885.59);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,2932.063);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,2560.845);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,958.6137);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,1641.195);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,861.9942);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,1497.202);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,473.224);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,386.5044);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,275.1079);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,383.0527);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,24.44482);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,40.37539);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,35.3969);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,22.48277);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.1859404);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,5.879633);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,3.532283);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(10203);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->Draw("HIST");
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
