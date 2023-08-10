void Z_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Thu Aug 10 12:21:00 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(-1.2,-1.047147,6.8,1.401341);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetLogy();
   Z_dR_Bj0_algo_17->SetLeftMargin(0.15);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,2.522447);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,7.567341);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(3,4.414282);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,3.783671);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,1.261224);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,0.9459177);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(7,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(8,0.6306118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(9,1.576529);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(12,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(13,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(14,0.6306118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(17,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(18,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(19,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(24,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,0.8918197);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,1.544677);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(3,1.179767);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,1.092252);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,0.6306118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,0.5461258);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(7,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(8,0.4459099);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(9,0.7050454);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(10,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(11,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(12,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(13,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(14,0.4459099);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(17,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(18,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(19,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(24,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
