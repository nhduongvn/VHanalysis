void Z_jetpt_JEC_both_17()
{
//=========Macro generated from canvas: Z_jetpt_JEC_both_17/Z_jetpt_JEC_both_17
//=========  (Thu Aug 10 12:25:19 2023) by ROOT version 6.14/09
   TCanvas *Z_jetpt_JEC_both_17 = new TCanvas("Z_jetpt_JEC_both_17", "Z_jetpt_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_JEC_both_17->SetHighLightColor(2);
   Z_jetpt_JEC_both_17->Range(-60,-0.07973155,340,0.7175839);
   Z_jetpt_JEC_both_17->SetFillColor(0);
   Z_jetpt_JEC_both_17->SetBorderMode(0);
   Z_jetpt_JEC_both_17->SetBorderSize(2);
   Z_jetpt_JEC_both_17->SetLeftMargin(0.15);
   Z_jetpt_JEC_both_17->SetFrameBorderMode(0);
   Z_jetpt_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetpt_JEC_stack_7 = new TH1D("VbbHcc_both_Z_jetpt_JEC_stack_7","",150,0,300);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(27,0.1940007);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(29,0.2572919);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(31,0.3092578);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(33,0.294848);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(36,0.5012042);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(37,0.2948417);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(41,0.578203);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(43,0.1879968);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(44,0.3136654);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(46,0.5308696);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(48,0.3138408);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(49,0.6074784);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(55,0.2751033);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(56,0.3317125);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(58,0.1957868);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(60,0.2861422);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(72,0.3503188);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(80,0.1954472);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(84,0.2346766);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(90,0.2900543);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(93,0.2715318);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinContent(101,0.3152361);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(27,0.1940007);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(29,0.2572919);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(31,0.3092578);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(33,0.294848);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(36,0.3660024);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(37,0.2948417);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(41,0.4088513);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(43,0.1879968);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(44,0.3136654);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(46,0.3753815);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(48,0.3138408);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(49,0.4295544);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(55,0.2751033);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(56,0.3317125);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(58,0.1957868);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(60,0.2861422);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(72,0.3503188);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(80,0.1954472);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(84,0.2346766);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(90,0.2900543);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(93,0.2715318);
   VbbHcc_both_Z_jetpt_JEC_stack_7->SetBinError(101,0.3152361);
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
