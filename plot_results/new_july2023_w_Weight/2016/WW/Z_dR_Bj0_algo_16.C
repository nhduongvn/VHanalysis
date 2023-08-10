void Z_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_16/Z_dR_Bj0_algo_16
//=========  (Thu Aug 10 12:24:15 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_16 = new TCanvas("Z_dR_Bj0_algo_16", "Z_dR_Bj0_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_16->SetHighLightColor(2);
   Z_dR_Bj0_algo_16->Range(-1.2,-2.186861,6.8,19.68174);
   Z_dR_Bj0_algo_16->SetFillColor(0);
   Z_dR_Bj0_algo_16->SetBorderMode(0);
   Z_dR_Bj0_algo_16->SetBorderSize(2);
   Z_dR_Bj0_algo_16->SetLeftMargin(0.15);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,6.180988);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,16.66179);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(3,15.58684);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,10.34644);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,7.65905);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,2.687386);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(7,3.359232);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(8,2.284278);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(9,2.284278);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(10,1.478062);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(11,1.209324);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(12,1.478062);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(13,0.9405851);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(14,0.8062158);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(15,1.074954);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(16,0.6718465);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(17,0.6718465);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(18,0.4031079);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(19,0.4031079);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(20,0.5374772);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(22,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(24,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,0.9113369);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,1.496273);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(3,1.447202);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,1.179086);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,1.014466);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,0.6009178);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(7,0.6718465);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(8,0.5540188);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(9,0.5540188);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(10,0.4456525);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(11,0.4031079);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(12,0.4456525);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(13,0.3555077);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(14,0.3291362);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(15,0.3800538);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(16,0.3004589);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(17,0.3004589);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(18,0.2327345);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(19,0.2327345);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(20,0.2687386);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(22,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(24,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(573);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_16->Modified();
   Z_dR_Bj0_algo_16->cd();
   Z_dR_Bj0_algo_16->SetSelected(Z_dR_Bj0_algo_16);
}
