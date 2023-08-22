void dR_HZ_both_16()
{
//=========Macro generated from canvas: dR_HZ_both_16/dR_HZ_both_16
//=========  (Tue Aug 22 09:22:58 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_both_16 = new TCanvas("dR_HZ_both_16", "dR_HZ_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_both_16->SetHighLightColor(2);
   dR_HZ_both_16->Range(-1.2,-0.001392537,6.8,0.01253284);
   dR_HZ_both_16->SetFillColor(0);
   dR_HZ_both_16->SetBorderMode(0);
   dR_HZ_both_16->SetBorderSize(2);
   dR_HZ_both_16->SetLeftMargin(0.15);
   dR_HZ_both_16->SetFrameBorderMode(0);
   dR_HZ_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dR_HZ_stack_11 = new TH1D("VbbHcc_both_dR_HZ_stack_11","",60,0,6);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(6,0.001765897);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(8,0.002186347);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(11,0.00235356);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(12,0.002082123);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(13,0.006668572);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(15,0.002067091);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(22,0.002186526);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(23,0.00384208);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(24,0.003880901);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(25,0.002126611);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(27,0.006477141);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(28,0.01060981);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(29,0.00525009);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(31,0.002272667);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(32,0.002450362);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(34,0.002209336);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(35,0.002114099);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(36,0.00193606);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(37,0.002422398);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(38,0.002238844);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(39,0.001942041);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(44,0.002120116);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(46,0.004351625);
   VbbHcc_both_dR_HZ_stack_11->SetBinContent(54,0.002042848);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(6,0.001765897);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(8,0.002186347);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(11,0.00235356);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(12,0.002082123);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(13,0.003864678);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(15,0.002067091);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(22,0.002186526);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(23,0.002754821);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(24,0.002754567);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(25,0.002126611);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(27,0.003745929);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(28,0.004769499);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(29,0.003779421);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(31,0.002272667);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(32,0.002450362);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(34,0.002209336);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(35,0.002114099);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(36,0.00193606);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(37,0.002422398);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(38,0.002238844);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(39,0.001942041);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(44,0.002120116);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(46,0.003089189);
   VbbHcc_both_dR_HZ_stack_11->SetBinError(54,0.002042848);
   VbbHcc_both_dR_HZ_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_dR_HZ_stack_11->SetFillColor(ci);
   VbbHcc_both_dR_HZ_stack_11->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_both_dR_HZ_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_dR_HZ_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_dR_HZ_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_both_16->Modified();
   dR_HZ_both_16->cd();
   dR_HZ_both_16->SetSelected(dR_HZ_both_16);
}
