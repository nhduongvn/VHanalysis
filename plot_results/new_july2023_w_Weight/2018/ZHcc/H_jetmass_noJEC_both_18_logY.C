void H_jetmass_noJEC_both_18_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_18/H_jetmass_noJEC_both_18
//=========  (Thu Aug 10 12:22:00 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_18 = new TCanvas("H_jetmass_noJEC_both_18", "H_jetmass_noJEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_18->SetHighLightColor(2);
   H_jetmass_noJEC_both_18->Range(-60,-3.069512,340,-0.9631095);
   H_jetmass_noJEC_both_18->SetFillColor(0);
   H_jetmass_noJEC_both_18->SetBorderMode(0);
   H_jetmass_noJEC_both_18->SetBorderSize(2);
   H_jetmass_noJEC_both_18->SetLogy();
   H_jetmass_noJEC_both_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(4,0.01741191);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(5,0.01941303);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(6,0.0353754);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(7,0.03120402);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(8,0.02094319);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(9,0.01664998);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(10,0.01180279);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(11,0.007025249);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(12,0.01129472);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(13,0.004722339);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(14,0.003551429);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(16,0.003682377);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(18,0.002767952);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(19,0.002823081);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(22,0.002982215);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(29,0.002885672);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(4,0.007130743);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(5,0.007489372);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(6,0.01037729);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(7,0.009467856);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(8,0.008031138);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(9,0.006861616);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(10,0.005914008);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(11,0.005008651);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(12,0.005212983);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(13,0.003378167);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(14,0.003551429);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(16,0.003682377);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(18,0.002767952);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(19,0.002823081);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(22,0.002982215);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(29,0.002885672);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetEntries(69);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetFillColor(ci);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_both_18->Modified();
   H_jetmass_noJEC_both_18->cd();
   H_jetmass_noJEC_both_18->SetSelected(H_jetmass_noJEC_both_18);
}
