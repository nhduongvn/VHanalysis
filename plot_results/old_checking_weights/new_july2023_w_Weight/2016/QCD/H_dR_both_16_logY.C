void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Thu Aug 10 10:43:03 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,0.006291601,6.8,5.084581);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLogy();
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,6.53357);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,13695.28);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,11085.05);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,8654.354);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,7099.231);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,8193.619);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,8297.93);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,7338.707);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,10861.39);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,6635.893);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,9648.32);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,13279.34);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,15475.84);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,19916.05);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,18890.26);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,9500.516);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,5370.349);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,3673.867);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,3992.781);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,3033.947);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,1136.659);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,356.4389);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,149.7189);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,356.5565);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,28.20677);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,6.53357);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,2643.902);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,2035.132);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,2008.425);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,1119.871);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,2015.613);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,2017.566);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,1160.066);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,2119.064);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,955.2528);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1320.405);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,2523.717);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,2752.896);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,2449.672);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,2735.946);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,1893.681);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,904.4316);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,780.1012);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,871.0196);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,1557.909);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,401.3705);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,81.1598);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,51.83468);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,286.4041);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,21.39855);
   VbbHcc_both_H_dR_stack_1->SetEntries(9914);

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
