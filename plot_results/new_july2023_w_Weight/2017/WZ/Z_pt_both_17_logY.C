void Z_pt_both_17_logY()
{
//=========Macro generated from canvas: Z_pt_both_17/Z_pt_both_17
//=========  (Thu Aug 10 10:42:56 2023) by ROOT version 6.14/09
   TCanvas *Z_pt_both_17 = new TCanvas("Z_pt_both_17", "Z_pt_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_pt_both_17->SetHighLightColor(2);
   Z_pt_both_17->Range(-400,-1.162769,2266.667,0.1490218);
   Z_pt_both_17->SetFillColor(0);
   Z_pt_both_17->SetBorderMode(0);
   Z_pt_both_17->SetBorderSize(2);
   Z_pt_both_17->SetLogy();
   Z_pt_both_17->SetLeftMargin(0.15);
   Z_pt_both_17->SetFrameBorderMode(0);
   Z_pt_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_pt_stack_7 = new TH1D("VbbHcc_both_Z_pt_stack_7","",1000,0,2000);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(32,0.2861422);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(46,0.2572919);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(60,0.3136654);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(63,0.3047304);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(67,0.1957868);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(72,0.2653625);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(75,0.2891015);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(78,0.294848);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(80,0.3152355);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(82,0.2655071);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(83,0.1859687);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(86,0.3138408);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(87,0.3092578);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(88,0.1940007);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(94,0.3317125);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(107,0.2891015);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(110,0.1954472);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(111,0.2948417);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(114,0.3503188);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(121,0.2751033);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(123,0.2900543);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(129,0.1879968);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(150,0.5499128);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(157,0.2715318);
   VbbHcc_both_Z_pt_stack_7->SetBinContent(190,0.302748);
   VbbHcc_both_Z_pt_stack_7->SetBinError(32,0.2861422);
   VbbHcc_both_Z_pt_stack_7->SetBinError(46,0.2572919);
   VbbHcc_both_Z_pt_stack_7->SetBinError(60,0.3136654);
   VbbHcc_both_Z_pt_stack_7->SetBinError(63,0.3047304);
   VbbHcc_both_Z_pt_stack_7->SetBinError(67,0.1957868);
   VbbHcc_both_Z_pt_stack_7->SetBinError(72,0.2653625);
   VbbHcc_both_Z_pt_stack_7->SetBinError(75,0.2891015);
   VbbHcc_both_Z_pt_stack_7->SetBinError(78,0.294848);
   VbbHcc_both_Z_pt_stack_7->SetBinError(80,0.3152355);
   VbbHcc_both_Z_pt_stack_7->SetBinError(82,0.2655071);
   VbbHcc_both_Z_pt_stack_7->SetBinError(83,0.1859687);
   VbbHcc_both_Z_pt_stack_7->SetBinError(86,0.3138408);
   VbbHcc_both_Z_pt_stack_7->SetBinError(87,0.3092578);
   VbbHcc_both_Z_pt_stack_7->SetBinError(88,0.1940007);
   VbbHcc_both_Z_pt_stack_7->SetBinError(94,0.3317125);
   VbbHcc_both_Z_pt_stack_7->SetBinError(107,0.2891015);
   VbbHcc_both_Z_pt_stack_7->SetBinError(110,0.1954472);
   VbbHcc_both_Z_pt_stack_7->SetBinError(111,0.2948417);
   VbbHcc_both_Z_pt_stack_7->SetBinError(114,0.3503188);
   VbbHcc_both_Z_pt_stack_7->SetBinError(121,0.2751033);
   VbbHcc_both_Z_pt_stack_7->SetBinError(123,0.2900543);
   VbbHcc_both_Z_pt_stack_7->SetBinError(129,0.1879968);
   VbbHcc_both_Z_pt_stack_7->SetBinError(150,0.3929974);
   VbbHcc_both_Z_pt_stack_7->SetBinError(157,0.2715318);
   VbbHcc_both_Z_pt_stack_7->SetBinError(190,0.302748);
   VbbHcc_both_Z_pt_stack_7->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_pt_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_pt_stack_7->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   VbbHcc_both_Z_pt_stack_7->GetXaxis()->SetRange(1,1000);
   VbbHcc_both_Z_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_both_17->Modified();
   Z_pt_both_17->cd();
   Z_pt_both_17->SetSelected(Z_pt_both_17);
}
