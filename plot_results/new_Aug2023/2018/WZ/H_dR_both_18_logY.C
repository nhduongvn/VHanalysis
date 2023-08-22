void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Tue Aug 22 09:18:19 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.2,-0.9326019,6.8,0.796381);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLogy();
   H_dR_both_18->SetLeftMargin(0.15);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(3,0.6853785);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,2.217858);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,2.087693);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,0.9354488);
   VbbHcc_both_H_dR_stack_7->SetBinContent(9,0.5652251);
   VbbHcc_both_H_dR_stack_7->SetBinContent(10,0.4702074);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,1.265549);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,0.4671207);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,0.3690103);
   VbbHcc_both_H_dR_stack_7->SetBinContent(14,1.7803);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,1.379059);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,0.4394432);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,0.6196682);
   VbbHcc_both_H_dR_stack_7->SetBinContent(19,0.3477974);
   VbbHcc_both_H_dR_stack_7->SetBinError(3,0.4846417);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,0.9975036);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,0.9480176);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.5463117);
   VbbHcc_both_H_dR_stack_7->SetBinError(9,0.4761242);
   VbbHcc_both_H_dR_stack_7->SetBinError(10,0.4702074);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.7368768);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.4671207);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,0.3690103);
   VbbHcc_both_H_dR_stack_7->SetBinError(14,1.127063);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,0.6981447);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,0.4394432);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,0.6196682);
   VbbHcc_both_H_dR_stack_7->SetBinError(19,0.3477974);
   VbbHcc_both_H_dR_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
