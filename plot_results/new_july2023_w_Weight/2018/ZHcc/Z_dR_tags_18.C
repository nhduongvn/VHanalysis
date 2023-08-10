void Z_dR_tags_18()
{
//=========Macro generated from canvas: Z_dR_tags_18/Z_dR_tags_18
//=========  (Thu Aug 10 12:23:16 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_18 = new TCanvas("Z_dR_tags_18", "Z_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_18->SetHighLightColor(2);
   Z_dR_tags_18->Range(-1.2,-0.003803136,6.8,0.03422822);
   Z_dR_tags_18->SetFillColor(0);
   Z_dR_tags_18->SetBorderMode(0);
   Z_dR_tags_18->SetBorderSize(2);
   Z_dR_tags_18->SetLeftMargin(0.15);
   Z_dR_tags_18->SetFrameBorderMode(0);
   Z_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.02897627);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.02617565);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.02589173);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.007879855);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.005626234);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,0.005727716);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,0.00272295);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.00557904);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.004100726);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.002923899);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.01441001);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.009121097);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.004830859);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.002662043);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.002576493);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.008484602);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.008667896);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.009785773);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(27,0.00283147);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(29,0.003551429);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.009320467);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.008838309);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.009147011);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.00488979);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.003978433);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.004050224);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.00272295);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.003945095);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.00310294);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.002923899);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.006447717);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.005289296);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.003466234);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.002662043);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.002576493);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.004898638);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.00503001);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.005682443);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(27,0.00283147);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(29,0.003551429);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(64);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_18->Modified();
   Z_dR_tags_18->cd();
   Z_dR_tags_18->SetSelected(Z_dR_tags_18);
}
