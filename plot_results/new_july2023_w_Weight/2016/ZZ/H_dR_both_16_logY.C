void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Thu Aug 10 10:43:03 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-1.146652,6.8,1.308881);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLogy();
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_8 = new TH1D("VbbHcc_both_H_dR_stack_8","",30,0,6);
   VbbHcc_both_H_dR_stack_8->SetBinContent(3,2.569726);
   VbbHcc_both_H_dR_stack_8->SetBinContent(4,4.846359);
   VbbHcc_both_H_dR_stack_8->SetBinContent(5,5.884227);
   VbbHcc_both_H_dR_stack_8->SetBinContent(6,3.409229);
   VbbHcc_both_H_dR_stack_8->SetBinContent(7,1.843704);
   VbbHcc_both_H_dR_stack_8->SetBinContent(8,1.034431);
   VbbHcc_both_H_dR_stack_8->SetBinContent(9,1.060434);
   VbbHcc_both_H_dR_stack_8->SetBinContent(10,1.798105);
   VbbHcc_both_H_dR_stack_8->SetBinContent(11,1.916442);
   VbbHcc_both_H_dR_stack_8->SetBinContent(12,3.453877);
   VbbHcc_both_H_dR_stack_8->SetBinContent(13,1.633749);
   VbbHcc_both_H_dR_stack_8->SetBinContent(14,3.184038);
   VbbHcc_both_H_dR_stack_8->SetBinContent(15,6.106315);
   VbbHcc_both_H_dR_stack_8->SetBinContent(16,3.249267);
   VbbHcc_both_H_dR_stack_8->SetBinContent(17,1.739229);
   VbbHcc_both_H_dR_stack_8->SetBinContent(18,1.110442);
   VbbHcc_both_H_dR_stack_8->SetBinContent(19,0.7651763);
   VbbHcc_both_H_dR_stack_8->SetBinContent(20,0.2511492);
   VbbHcc_both_H_dR_stack_8->SetBinError(3,0.8143416);
   VbbHcc_both_H_dR_stack_8->SetBinError(4,1.146579);
   VbbHcc_both_H_dR_stack_8->SetBinError(5,1.255802);
   VbbHcc_both_H_dR_stack_8->SetBinError(6,0.9490324);
   VbbHcc_both_H_dR_stack_8->SetBinError(7,0.6974606);
   VbbHcc_both_H_dR_stack_8->SetBinError(8,0.517233);
   VbbHcc_both_H_dR_stack_8->SetBinError(9,0.5307944);
   VbbHcc_both_H_dR_stack_8->SetBinError(10,0.6812877);
   VbbHcc_both_H_dR_stack_8->SetBinError(11,0.7253524);
   VbbHcc_both_H_dR_stack_8->SetBinError(12,0.9602774);
   VbbHcc_both_H_dR_stack_8->SetBinError(13,0.6678682);
   VbbHcc_both_H_dR_stack_8->SetBinError(14,0.9057963);
   VbbHcc_both_H_dR_stack_8->SetBinError(15,1.278505);
   VbbHcc_both_H_dR_stack_8->SetBinError(16,0.9252252);
   VbbHcc_both_H_dR_stack_8->SetBinError(17,0.6621802);
   VbbHcc_both_H_dR_stack_8->SetBinError(18,0.5563142);
   VbbHcc_both_H_dR_stack_8->SetBinError(19,0.4417913);
   VbbHcc_both_H_dR_stack_8->SetBinError(20,0.2511492);
   VbbHcc_both_H_dR_stack_8->SetEntries(175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_stack_8->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
