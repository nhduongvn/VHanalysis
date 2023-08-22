void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Tue Aug 22 09:18:49 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-0.3486165,1.133333,5.89217);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,97845.86);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,30020.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,29793.09);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,6087.037);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,25588.78);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,2952.634);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,1770.112);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1428.922);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,903.1493);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,375.8377);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,497.9298);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,318.6237);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,26.19372);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,77.2109);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,3.77131);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,51.12091);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,6.437462);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,3.963331);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,261.4261);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,3850.04);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,2175.043);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,16585.97);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,892.7661);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,20608.99);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,644.6657);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,523.1878);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,472.7965);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,404.3797);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,223.6638);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,280.5121);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,241.7265);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,11.66325);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,30.43391);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,3.77131);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,37.57746);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,6.437462);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,3.963331);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,237.597);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(9795);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
