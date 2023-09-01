#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Fri Sep  1 13:23:36 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.2,-0.52236,6.8,4.70124);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetLeftMargin(0.15);
   Z_dR_algo_16->SetFrameBorderMode(0);
   Z_dR_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR__433 = new TH1D("VbbHcc_algo_Z_dR__433","",30,0,6);
   VbbHcc_algo_Z_dR__433->SetBinContent(2,0.001084732);
   VbbHcc_algo_Z_dR__433->SetBinContent(3,1.565717);
   VbbHcc_algo_Z_dR__433->SetBinContent(4,3.397562);
   VbbHcc_algo_Z_dR__433->SetBinContent(5,3.979886);
   VbbHcc_algo_Z_dR__433->SetBinContent(6,3.632137);
   VbbHcc_algo_Z_dR__433->SetBinContent(7,2.546352);
   VbbHcc_algo_Z_dR__433->SetBinContent(8,1.812974);
   VbbHcc_algo_Z_dR__433->SetBinContent(9,1.423628);
   VbbHcc_algo_Z_dR__433->SetBinContent(10,1.286657);
   VbbHcc_algo_Z_dR__433->SetBinContent(11,1.269361);
   VbbHcc_algo_Z_dR__433->SetBinContent(12,1.242069);
   VbbHcc_algo_Z_dR__433->SetBinContent(13,1.225383);
   VbbHcc_algo_Z_dR__433->SetBinContent(14,1.110254);
   VbbHcc_algo_Z_dR__433->SetBinContent(15,1.027164);
   VbbHcc_algo_Z_dR__433->SetBinContent(16,0.9339293);
   VbbHcc_algo_Z_dR__433->SetBinContent(17,0.8190857);
   VbbHcc_algo_Z_dR__433->SetBinContent(18,0.7569371);
   VbbHcc_algo_Z_dR__433->SetBinContent(19,0.719715);
   VbbHcc_algo_Z_dR__433->SetBinContent(20,0.6714885);
   VbbHcc_algo_Z_dR__433->SetBinContent(21,0.6202322);
   VbbHcc_algo_Z_dR__433->SetBinContent(22,0.5522837);
   VbbHcc_algo_Z_dR__433->SetBinContent(23,0.4950107);
   VbbHcc_algo_Z_dR__433->SetBinContent(24,0.4363169);
   VbbHcc_algo_Z_dR__433->SetBinContent(25,0.4416442);
   VbbHcc_algo_Z_dR__433->SetBinContent(26,0.4647401);
   VbbHcc_algo_Z_dR__433->SetBinContent(27,0.5194235);
   VbbHcc_algo_Z_dR__433->SetBinContent(28,0.508652);
   VbbHcc_algo_Z_dR__433->SetBinContent(29,0.3856384);
   VbbHcc_algo_Z_dR__433->SetBinContent(30,0.2430231);
   VbbHcc_algo_Z_dR__433->SetBinContent(31,0.1543871);
   VbbHcc_algo_Z_dR__433->SetBinError(2,0.000627233);
   VbbHcc_algo_Z_dR__433->SetBinError(3,0.02288065);
   VbbHcc_algo_Z_dR__433->SetBinError(4,0.03326496);
   VbbHcc_algo_Z_dR__433->SetBinError(5,0.03558565);
   VbbHcc_algo_Z_dR__433->SetBinError(6,0.03372915);
   VbbHcc_algo_Z_dR__433->SetBinError(7,0.0280935);
   VbbHcc_algo_Z_dR__433->SetBinError(8,0.02386041);
   VbbHcc_algo_Z_dR__433->SetBinError(9,0.02116957);
   VbbHcc_algo_Z_dR__433->SetBinError(10,0.02016766);
   VbbHcc_algo_Z_dR__433->SetBinError(11,0.01999738);
   VbbHcc_algo_Z_dR__433->SetBinError(12,0.01988148);
   VbbHcc_algo_Z_dR__433->SetBinError(13,0.01972728);
   VbbHcc_algo_Z_dR__433->SetBinError(14,0.01870942);
   VbbHcc_algo_Z_dR__433->SetBinError(15,0.0181048);
   VbbHcc_algo_Z_dR__433->SetBinError(16,0.01726047);
   VbbHcc_algo_Z_dR__433->SetBinError(17,0.01613304);
   VbbHcc_algo_Z_dR__433->SetBinError(18,0.01550746);
   VbbHcc_algo_Z_dR__433->SetBinError(19,0.01514269);
   VbbHcc_algo_Z_dR__433->SetBinError(20,0.01464287);
   VbbHcc_algo_Z_dR__433->SetBinError(21,0.01396156);
   VbbHcc_algo_Z_dR__433->SetBinError(22,0.01317791);
   VbbHcc_algo_Z_dR__433->SetBinError(23,0.01250903);
   VbbHcc_algo_Z_dR__433->SetBinError(24,0.01167738);
   VbbHcc_algo_Z_dR__433->SetBinError(25,0.01177761);
   VbbHcc_algo_Z_dR__433->SetBinError(26,0.01209364);
   VbbHcc_algo_Z_dR__433->SetBinError(27,0.01283554);
   VbbHcc_algo_Z_dR__433->SetBinError(28,0.01270246);
   VbbHcc_algo_Z_dR__433->SetBinError(29,0.01113371);
   VbbHcc_algo_Z_dR__433->SetBinError(30,0.008811696);
   VbbHcc_algo_Z_dR__433->SetBinError(31,0.007037433);
   VbbHcc_algo_Z_dR__433->SetEntries(112352);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR__433->SetFillColor(ci);
   VbbHcc_algo_Z_dR__433->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_algo_Z_dR__433->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR__433->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__433->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR__433->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__433->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__433->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__433->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__433->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR__433->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__433->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
