void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Thu Aug 10 10:43:04 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-4.635042,6.8,-1.49696);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.002303543);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.003770915);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.006067787);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.006513224);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.008159869);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.004505123);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.003726578);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.004137044);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.004650089);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.004015967);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.003911299);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.003698248);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.005645573);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.004838875);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.001844276);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.001753557);
   VbbHcc_both_H_dR_stack_12->SetBinContent(19,0.0006854137);
   VbbHcc_both_H_dR_stack_12->SetBinContent(20,0.0007236514);
   VbbHcc_both_H_dR_stack_12->SetBinContent(21,0.0005705953);
   VbbHcc_both_H_dR_stack_12->SetBinContent(23,0.0003004564);
   VbbHcc_both_H_dR_stack_12->SetBinContent(24,9.545455e-05);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.0007368707);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.000978171);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.001199802);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.001252224);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.001437555);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.001063234);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.000973405);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.000979901);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.001054172);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.0009845937);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.0009838813);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.0009297261);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.001161346);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.001070762);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0006699555);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.0006700718);
   VbbHcc_both_H_dR_stack_12->SetBinError(19,0.000397906);
   VbbHcc_both_H_dR_stack_12->SetBinError(20,0.0004185448);
   VbbHcc_both_H_dR_stack_12->SetBinError(21,0.0003356427);
   VbbHcc_both_H_dR_stack_12->SetBinError(23,0.0003004564);
   VbbHcc_both_H_dR_stack_12->SetBinError(24,9.545455e-05);
   VbbHcc_both_H_dR_stack_12->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
