void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Tue Aug 22 09:18:17 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-0.09931936,6.8,4.946151);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLogy();
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,5.084611);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,9239.111);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,7889.993);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,6129.504);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,4908.327);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,5736.19);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,5642.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,5337.081);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,7789.423);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,4857.698);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,7226.197);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,9945.723);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,11213.62);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,14589.99);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,13375.18);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,7009.714);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,3956.463);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,2841.024);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,2709.402);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,2252.281);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,832.5661);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,220.8444);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,135.5415);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,273.7632);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,23.52951);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,5.084611);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,1575.295);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,1310.052);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,1224.928);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,802.1043);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,1484.491);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,1330.083);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,891.948);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,1436.688);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,715.185);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1036.251);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,1811.64);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,1820.827);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,1798.231);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,1782.881);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,1366.531);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,672.4662);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,589.5313);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,622.4267);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,1100.611);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,301.8758);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,55.48975);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,46.34506);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,217.6745);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,18.29624);
   VbbHcc_both_H_dR_stack_1->SetEntries(9183);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->Draw("HIST");
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
