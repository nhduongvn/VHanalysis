void H_dR_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_algo_17/H_dR_algo_17
//=========  (Thu Aug 10 12:20:46 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_17 = new TCanvas("H_dR_algo_17", "H_dR_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_17->SetHighLightColor(2);
   H_dR_algo_17->Range(-1.2,-1.00464,6.8,0.7987083);
   H_dR_algo_17->SetFillColor(0);
   H_dR_algo_17->SetBorderMode(0);
   H_dR_algo_17->SetBorderSize(2);
   H_dR_algo_17->SetLogy();
   H_dR_algo_17->SetLeftMargin(0.15);
   H_dR_algo_17->SetFrameBorderMode(0);
   H_dR_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_stack_6 = new TH1D("VbbHcc_algo_H_dR_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,1.059688);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,1.492411);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,1.75144);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(6,1.669693);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,0.6543917);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,1.290612);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,2.059891);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,1.554771);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,1.891481);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,1.765252);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,2.191919);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,1.36866);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,1.80516);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,1.156581);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,1.836352);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,1.943501);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,0.6375663);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(22,0.8288254);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(24,0.3725499);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(26,0.7768723);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(27,0.299726);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(30,0.3763791);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.6138983);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.7489408);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,0.8027936);
   VbbHcc_algo_H_dR_stack_6->SetBinError(6,0.7533971);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,0.4627248);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,0.6526555);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,0.8525352);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,0.708912);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,0.8583354);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,0.7991826);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,0.9034765);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,0.7001259);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,0.8106677);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,0.668186);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.8324041);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,0.8024318);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.4656154);
   VbbHcc_algo_H_dR_stack_6->SetBinError(22,0.5320984);
   VbbHcc_algo_H_dR_stack_6->SetBinError(24,0.3725499);
   VbbHcc_algo_H_dR_stack_6->SetBinError(26,0.5494081);
   VbbHcc_algo_H_dR_stack_6->SetBinError(27,0.299726);
   VbbHcc_algo_H_dR_stack_6->SetBinError(30,0.3763791);
   VbbHcc_algo_H_dR_stack_6->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_stack_6->SetFillColor(ci);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_17->Modified();
   H_dR_algo_17->cd();
   H_dR_algo_17->SetSelected(H_dR_algo_17);
}
