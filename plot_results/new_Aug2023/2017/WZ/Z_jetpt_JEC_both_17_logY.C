void Z_jetpt_JEC_both_17_logY()
{
//=========Macro generated from canvas: Z_jetpt_JEC_both_17/Z_jetpt_JEC_both_17
//=========  (Tue Aug 22 09:19:09 2023) by ROOT version 6.14/09
   TCanvas *Z_jetpt_JEC_both_17 = new TCanvas("Z_jetpt_JEC_both_17", "Z_jetpt_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_JEC_both_17->SetHighLightColor(2);
   Z_jetpt_JEC_both_17->Range(-60,-1.27847,340,0.1554128);
   Z_jetpt_JEC_both_17->SetFillColor(0);
   Z_jetpt_JEC_both_17->SetBorderMode(0);
   Z_jetpt_JEC_both_17->SetBorderSize(2);
   Z_jetpt_JEC_both_17->SetLogy();
   Z_jetpt_JEC_both_17->SetLeftMargin(0.15);
   Z_jetpt_JEC_both_17->SetFrameBorderMode(0);
   Z_jetpt_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetpt_JEC_stack_7 = new TH1D("VbbHcc_both_Z_jetpt_JEC_stack_7","",150,0,300);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(27,0.1753319);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(29,0.2275793);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(31,0.3158821);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(33,0.2529144);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(36,0.4529732);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(37,0.2734067);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(41,0.4724706);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(43,0.1699058);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(44,0.2774426);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(46,0.5385512);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(48,0.269206);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(49,0.5425948);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(55,0.24863);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(56,0.3388179);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(58,0.181553);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(60,0.2454468);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(72,0.3004961);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(80,0.1465374);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(84,0.2364404);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(90,0.2962674);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(93,0.2329143);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(101,0.3176054);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(27,0.1753319);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(29,0.2275793);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(31,0.3158821);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(33,0.2529144);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(36,0.3307819);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(37,0.2734067);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(41,0.3352211);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(43,0.1699058);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(44,0.2774426);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(46,0.3808229);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(48,0.269206);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(49,0.3874052);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(55,0.24863);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(56,0.3388179);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(58,0.181553);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(60,0.2454468);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(72,0.3004961);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(80,0.1465374);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(84,0.2364404);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(90,0.2962674);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(93,0.2329143);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(101,0.3176054);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_jetpt_JEC_stack_7->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetpt_JEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetpt_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetpt_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_JEC_both_17->Modified();
   Z_jetpt_JEC_both_17->cd();
   Z_jetpt_JEC_both_17->SetSelected(Z_jetpt_JEC_both_17);
}
