void H_dR_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Tue Aug 22 09:16:05 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.2,-3.263406,6.8,-1.602911);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLogy();
   H_dR_tags_16->SetLeftMargin(0.15);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.008984434);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.004636889);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.006250067);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.005603249);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.00662769);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.004122407);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.002082123);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.003849515);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.002114099);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.008299265);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.002123896);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(18,0.0085325);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.00404955);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(20,0.002155655);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.002422398);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.002036349);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.001598357);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.002108704);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.004496037);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.003284079);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.003633261);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.003988595);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.003840496);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.00292035);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.002082123);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.002731274);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.002114099);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.004168792);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.002123896);
   VbbHcc_tags_H_dR_stack_11->SetBinError(18,0.004272009);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.002864089);
   VbbHcc_tags_H_dR_stack_11->SetBinError(20,0.002155655);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.002422398);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.002036349);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.001598357);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.002108704);
   VbbHcc_tags_H_dR_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
