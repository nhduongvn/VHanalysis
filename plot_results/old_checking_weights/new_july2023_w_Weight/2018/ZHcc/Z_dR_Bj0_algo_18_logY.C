void Z_dR_Bj0_algo_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Thu Aug 10 10:42:24 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(-1.2,-3.210875,6.8,0.0834798);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetLogy();
   Z_dR_Bj0_algo_18->SetLeftMargin(0.15);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(1,0.05255579);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(2,0.299568);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(3,0.1681785);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(4,0.06306695);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(5,0.05781137);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(6,0.03678905);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(7,0.01576674);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(8,0.03678905);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(9,0.01576674);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(10,0.01313895);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(11,0.01051116);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(12,0.01313895);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(13,0.01051116);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(14,0.005255579);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(15,0.007883368);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(16,0.005255579);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(17,0.002627789);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(19,0.005255579);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(20,0.002627789);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(1,0.01175183);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(2,0.02805711);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(3,0.02102232);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(4,0.01287349);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(5,0.01232542);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(6,0.009832288);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(7,0.006436743);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(8,0.009832288);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(9,0.006436743);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(10,0.005875916);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(11,0.005255579);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(12,0.005875916);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(13,0.005255579);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(14,0.003716255);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(15,0.004551465);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(16,0.003716255);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(17,0.002627789);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(19,0.003716255);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(20,0.002627789);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetEntries(313);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
