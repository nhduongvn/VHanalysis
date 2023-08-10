void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Thu Aug 10 12:21:34 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-3.461328,6.8,-1.120192);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(3,0.003614904);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.0233424);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.009208526);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.02173164);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.02175064);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.01837727);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.00707511);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.006223292);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.00726553);
   VbbHcc_both_H_dR_stack_11->SetBinContent(12,0.009517493);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.00798139);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.00560736);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.006967617);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.009251562);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.009418995);
   VbbHcc_both_H_dR_stack_11->SetBinContent(18,0.001185265);
   VbbHcc_both_H_dR_stack_11->SetBinContent(20,0.002100715);
   VbbHcc_both_H_dR_stack_11->SetBinContent(21,0.001245676);
   VbbHcc_both_H_dR_stack_11->SetBinError(3,0.00262964);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.006771918);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.004143002);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.006339256);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.006152242);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.005947543);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.003569651);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.003612465);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.003648917);
   VbbHcc_both_H_dR_stack_11->SetBinError(12,0.004337109);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.003817787);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.003241882);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.003541869);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.004205521);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.004273048);
   VbbHcc_both_H_dR_stack_11->SetBinError(18,0.001185265);
   VbbHcc_both_H_dR_stack_11->SetBinError(20,0.002100715);
   VbbHcc_both_H_dR_stack_11->SetBinError(21,0.001245676);
   VbbHcc_both_H_dR_stack_11->SetEntries(95);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->Draw("HIST");
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
