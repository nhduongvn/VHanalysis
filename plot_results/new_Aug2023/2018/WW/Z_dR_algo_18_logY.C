void Z_dR_algo_18_logY()
{
//=========Macro generated from canvas: Z_dR_algo_18/Z_dR_algo_18
//=========  (Tue Aug 22 09:17:07 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_18 = new TCanvas("Z_dR_algo_18", "Z_dR_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_18->SetHighLightColor(2);
   Z_dR_algo_18->Range(-1.2,-0.9560814,6.8,1.133506);
   Z_dR_algo_18->SetFillColor(0);
   Z_dR_algo_18->SetBorderMode(0);
   Z_dR_algo_18->SetBorderSize(2);
   Z_dR_algo_18->SetLogy();
   Z_dR_algo_18->SetLeftMargin(0.15);
   Z_dR_algo_18->SetFrameBorderMode(0);
   Z_dR_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR_stack_6 = new TH1D("VbbHcc_algo_Z_dR_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,2.852951);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,3.04923);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,3.635749);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(6,4.436069);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,1.46294);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,0.8046614);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,3.616988);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,2.224717);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,1.078504);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,0.75047);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(13,2.600527);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,1.741833);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,0.3580201);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,0.6017025);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(19,0.5588237);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,1.857742);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(21,1.348407);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(22,0.5883291);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(23,0.7593296);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(24,0.7052527);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(26,1.660934);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(28,1.160423);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(29,0.7240563);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(30,0.6783453);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(31,0.4321114);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,1.276505);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,1.373171);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,1.397786);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(6,2.769751);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,1.061766);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,0.8046614);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,1.91938);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,1.285115);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,0.762637);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,0.75047);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(13,1.317612);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,1.050336);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,0.3580201);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,0.6017025);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(19,0.5588237);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,1.093085);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(21,0.9604921);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(22,0.5883291);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(23,0.7593296);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(24,0.7052527);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(26,1.02971);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(28,0.8214626);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(29,0.7240563);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(30,0.6783453);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(31,0.4321114);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(60);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_stack_6->SetFillColor(ci);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_18->Modified();
   Z_dR_algo_18->cd();
   Z_dR_algo_18->SetSelected(Z_dR_algo_18);
}
