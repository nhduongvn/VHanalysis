void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Tue Aug 22 09:18:18 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-0.06708664,6.8,5.293226);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,5.888093);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,30174.91);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,10167.19);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,8029.056);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,7210.552);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,6079.771);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,6543.029);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,5698.807);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,24303.66);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,8699.991);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,8440.766);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,10305.44);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,13043.02);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,14484.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,16376.56);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,7788.51);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,7974.289);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,5789.629);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,2129.723);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,1821.918);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,966.0947);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,878.0304);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,687.4474);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,104.0494);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,309.9717);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,5.888093);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,20625.72);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,1246.863);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,1097.805);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,1061.777);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,909.8713);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,943.8196);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,808.857);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,16559.12);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,1310.328);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,1033.422);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,1213.627);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,1364.116);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,1415.496);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,1880.128);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,950.7077);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,1115.84);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,953.7844);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,476.8704);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,465.1244);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,360.707);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,348.3233);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,361.9289);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,36.20369);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,264.1796);
   VbbHcc_both_H_dR_stack_1->SetEntries(9795);

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
