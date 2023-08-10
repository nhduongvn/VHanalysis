void H_pt_tags_17_logY()
{
//=========Macro generated from canvas: H_pt_tags_17/H_pt_tags_17
//=========  (Thu Aug 10 10:40:52 2023) by ROOT version 6.14/09
   TCanvas *H_pt_tags_17 = new TCanvas("H_pt_tags_17", "H_pt_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_pt_tags_17->SetHighLightColor(2);
   H_pt_tags_17->Range(-400,-1.122249,2266.667,-0.03203048);
   H_pt_tags_17->SetFillColor(0);
   H_pt_tags_17->SetBorderMode(0);
   H_pt_tags_17->SetBorderSize(2);
   H_pt_tags_17->SetLogy();
   H_pt_tags_17->SetLeftMargin(0.15);
   H_pt_tags_17->SetFrameBorderMode(0);
   H_pt_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_pt_stack_7 = new TH1D("VbbHcc_tags_H_pt_stack_7","",1000,0,2000);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(40,0.3503188);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(45,0.3136654);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(49,0.2715318);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(52,0.3814159);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(57,0.3047304);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(60,0.2891015);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(63,0.2751033);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(68,0.3138408);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(69,0.2655071);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(76,0.2861422);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(79,0.1957868);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(84,0.294848);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(85,0.3092578);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(98,0.3152355);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(109,0.2891015);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(119,0.2572919);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(121,0.2900543);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(122,0.1940007);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(141,0.3317125);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(174,0.2653625);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(177,0.2948417);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(183,0.302748);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(385,0.3152361);
   VbbHcc_tags_H_pt_stack_7->SetBinError(40,0.3503188);
   VbbHcc_tags_H_pt_stack_7->SetBinError(45,0.3136654);
   VbbHcc_tags_H_pt_stack_7->SetBinError(49,0.2715318);
   VbbHcc_tags_H_pt_stack_7->SetBinError(52,0.269785);
   VbbHcc_tags_H_pt_stack_7->SetBinError(57,0.3047304);
   VbbHcc_tags_H_pt_stack_7->SetBinError(60,0.2891015);
   VbbHcc_tags_H_pt_stack_7->SetBinError(63,0.2751033);
   VbbHcc_tags_H_pt_stack_7->SetBinError(68,0.3138408);
   VbbHcc_tags_H_pt_stack_7->SetBinError(69,0.2655071);
   VbbHcc_tags_H_pt_stack_7->SetBinError(76,0.2861422);
   VbbHcc_tags_H_pt_stack_7->SetBinError(79,0.1957868);
   VbbHcc_tags_H_pt_stack_7->SetBinError(84,0.294848);
   VbbHcc_tags_H_pt_stack_7->SetBinError(85,0.3092578);
   VbbHcc_tags_H_pt_stack_7->SetBinError(98,0.3152355);
   VbbHcc_tags_H_pt_stack_7->SetBinError(109,0.2891015);
   VbbHcc_tags_H_pt_stack_7->SetBinError(119,0.2572919);
   VbbHcc_tags_H_pt_stack_7->SetBinError(121,0.2900543);
   VbbHcc_tags_H_pt_stack_7->SetBinError(122,0.1940007);
   VbbHcc_tags_H_pt_stack_7->SetBinError(141,0.3317125);
   VbbHcc_tags_H_pt_stack_7->SetBinError(174,0.2653625);
   VbbHcc_tags_H_pt_stack_7->SetBinError(177,0.2948417);
   VbbHcc_tags_H_pt_stack_7->SetBinError(183,0.302748);
   VbbHcc_tags_H_pt_stack_7->SetBinError(385,0.3152361);
   VbbHcc_tags_H_pt_stack_7->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_pt_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetTitle("H p_{T} [GeV]");
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetRange(1,1000);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_17->Modified();
   H_pt_tags_17->cd();
   H_pt_tags_17->SetSelected(H_pt_tags_17);
}
