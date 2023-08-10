void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Aug 10 12:21:04 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-2.557138,1.133333,4.944296);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLogy();
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,8252.842);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,1050.339);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,212.2174);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,51.09255);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,13.9713);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,3.655186);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,0.6258216);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,0.7075803);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.1179227);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.1069362);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.04561054);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(12,0.4505096);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(13,0.06288506);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(18,0.03119144);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,71.07765);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,30.70517);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,12.95919);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,7.467036);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,3.873405);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,1.09114);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,0.219102);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,0.3752153);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.08372716);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.1069362);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.04561054);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(12,0.3777513);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(13,0.06288506);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(18,0.03119144);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(54522);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
