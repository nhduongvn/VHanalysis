void Z_jetpt_noJEC_tags_17_logY()
{
//=========Macro generated from canvas: Z_jetpt_noJEC_tags_17/Z_jetpt_noJEC_tags_17
//=========  (Thu Aug 10 12:20:25 2023) by ROOT version 6.14/09
   TCanvas *Z_jetpt_noJEC_tags_17 = new TCanvas("Z_jetpt_noJEC_tags_17", "Z_jetpt_noJEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_noJEC_tags_17->SetHighLightColor(2);
   Z_jetpt_noJEC_tags_17->Range(-60,-1.187003,340,0.3671264);
   Z_jetpt_noJEC_tags_17->SetFillColor(0);
   Z_jetpt_noJEC_tags_17->SetBorderMode(0);
   Z_jetpt_noJEC_tags_17->SetBorderSize(2);
   Z_jetpt_noJEC_tags_17->SetLogy();
   Z_jetpt_noJEC_tags_17->SetLeftMargin(0.15);
   Z_jetpt_noJEC_tags_17->SetFrameBorderMode(0);
   Z_jetpt_noJEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetpt_noJEC_stack_7 = new TH1D("VbbHcc_tags_Z_jetpt_noJEC_stack_7","",150,0,300);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(24,0.1954472);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(27,0.1940007);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(32,0.2572919);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(33,0.294848);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(35,0.6100772);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(36,0.1859687);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(39,0.2891015);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(41,0.8593391);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(43,0.2653625);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(47,0.3138408);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(51,0.302748);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(54,0.3317125);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(55,0.3136654);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(57,0.2751033);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(61,0.2861422);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(67,0.1957868);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(69,0.3503188);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(87,0.2900543);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(90,0.2715318);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(101,0.3152361);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(117,0.3092578);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(24,0.1954472);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(27,0.1940007);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(32,0.2572919);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(33,0.294848);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(35,0.4316307);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(36,0.1859687);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(39,0.2891015);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(41,0.4969249);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(43,0.2653625);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(47,0.3138408);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(51,0.302748);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(54,0.3317125);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(55,0.3136654);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(57,0.2751033);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(61,0.2861422);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(67,0.1957868);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(69,0.3503188);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(87,0.2900543);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(90,0.2715318);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(101,0.3152361);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(117,0.3092578);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetFillColor(ci);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetXaxis()->SetTitle("b-jet p_{T} [GeV]");
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_noJEC_tags_17->Modified();
   Z_jetpt_noJEC_tags_17->cd();
   Z_jetpt_noJEC_tags_17->SetSelected(Z_jetpt_noJEC_tags_17);
}
