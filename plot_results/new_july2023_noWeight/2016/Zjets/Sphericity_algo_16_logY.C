void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 12:32:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-1.777594,1.133333,4.598059);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,4818.865);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,4789.026);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,2664.401);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,1548.582);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,808.0966);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,337.8183);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,100.3237);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,43.27671);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,10.3713);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,6.174944);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,3.336654);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,3.841518);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,2.488542);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,1.039088);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,4.16615);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,0.7924526);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.4229053);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,0.647575);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(19,0.1448776);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,58.72173);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,66.87947);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,47.90257);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,35.09661);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,24.51463);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,14.43316);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,6.74694);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,5.946853);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.382459);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,1.096083);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.6473535);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,0.8619374);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.6418903);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.3688423);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,2.733421);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,0.3405168);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.1731806);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,0.3246354);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(19,0.1027791);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(93897);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
