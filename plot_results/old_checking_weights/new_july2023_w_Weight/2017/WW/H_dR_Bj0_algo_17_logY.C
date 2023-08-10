void H_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Thu Aug 10 10:42:09 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.2,-1.028426,6.8,1.232858);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetLogy();
   H_dR_Bj0_algo_17->SetLeftMargin(0.15);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(1,4.729588);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(2,5.3602);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(3,5.3602);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(4,4.414282);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(5,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(6,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(7,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(8,1.576529);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(9,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(10,1.261224);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(13,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(14,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(16,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(1,1.221174);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(2,1.300039);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(3,1.300039);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(4,1.179767);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(5,0.4459099);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(6,0.4459099);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(7,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(8,0.7050454);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(9,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(10,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(11,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(13,0.4459099);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(14,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(16,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
